#include "newaccount.h"
#include "ui_newaccount.h"
#include "password.h"

NewAccount::NewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAccount)
{
    ui->setupUi(this);
}

NewAccount::~NewAccount()
{
    delete ui;
}

void NewAccount::on_button_cancel_exit_clicked()
{
    this->~NewAccount();
}

//function saves the account when create button is clicked
void NewAccount::on_buttonSubmit_clicked()
{
    //declare messagebox for feedback
    QMessageBox msg;

    //if any fields are empty and generate password isn't checked, don't save account
    if((ui->input_Username->text().isEmpty()
            || ui->input_Email->text().isEmpty()
            || ui->input_Password->text().isEmpty())
            && pword_check_state == false)
    {
        qDebug() << "Input empty" << Qt::endl;
    }else{
        //otherwise if passwords match or generate password is checked
        if(pword_check_state == true || (ui->input_ConfirmPassword->text() == ui->input_Password->text())){

            //declare string to hold password
            QString password;

            //if generate password is checked
            if(pword_check_state == true){
                //declare a password generator and set a new password
                Password pgen;
                pgen.password_builder(16);
                password = pgen.get_password();
            }else{
                //otherwise use the password field
                password = ui->input_Password->text();
            }

            //try to create a new account and save it to the database
            try{
                //declare new date and datahandler instance
                QDate today = QDate::currentDate();
                DataHandler* dh = new DataHandler;

                //set the new account
                to_add = new Account(
                                ui->input_Username->text(),
                                password,
                                ui->input_Email->text(),
                                today
                            );
                to_add->set_last_use(today);

                //save the account to the database
                dh->saveAccount(to_add);

                //free datahandler and account instances
                delete dh;
                delete to_add;

                //set messagebox text to provide user feedback
                msg.setText("Account successfully created!");
                msg.exec();

                //close new account ui
                this->~NewAccount();
            }catch(QException e){
                qDebug() << e.what() << Qt::endl;
                this->~NewAccount();
            }
        }else{
            //if passwords don't match, output a message and don't save anything
            msg.setText("Account creation failed - passwords do not match");
            msg.exec();

        }
    }
}

void NewAccount::on_input_GeneratePassword_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked){
        qDebug() << "checked";
        pword_check_state = true;
        ui->input_Password->setEnabled(false);
        ui->input_ConfirmPassword->setEnabled(false);
    }else{
        pword_check_state = false;
        ui->input_Password->setEnabled(true);
        ui->input_ConfirmPassword->setEnabled(true);
    }
}
