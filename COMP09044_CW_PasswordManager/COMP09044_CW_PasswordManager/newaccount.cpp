/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - NewAccount class
 * Class controls new account UI and stores new accounts
 * to database
*/

#include "newaccount.h"
#include "ui_newaccount.h"
#include "password.h"

NewAccount::NewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAccount)
{
    ui->setupUi(this);
    ui->buttonSubmit->setEnabled(false);
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
    msg.setWindowTitle("Account status");

    //if generate password is checked or user passwords match
    if((pword_check_state == true) || (ui->input_ConfirmPassword->text() == ui->input_Password->text())){
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

            //set messagebox text to provide user feedback
            msg.setText("Account successfully created!");
            msg.exec();

            //save the account to the database
            dh->saveAccount(to_add);

            //free datahandler and account instances
            delete dh;
            delete to_add;

            //close new account ui
            this->~NewAccount();

        }catch(Inputvalexcept e){
            qDebug() << e.what() << Qt::endl;
            msg.setText("Account could not be created - please try again.");
            msg.exec();

        }
    }else{
        //if passwords don't match, output a message and don't save anything
        msg.setText("Account creation failed - passwords do not match");
        msg.exec();

    }
}


void NewAccount::on_input_GeneratePassword_stateChanged(int arg1)
{
    //if generate password is checked, disable the password fields and set state variable
    if(arg1 == Qt::Checked){
        qDebug() << "checked";
        pword_check_state = true;
        ui->input_Password->setEnabled(false);
        ui->input_ConfirmPassword->setEnabled(false);
    //otherwise enable the fields, set state variable
    }else{
        pword_check_state = false;
        ui->input_Password->setEnabled(true);
        ui->input_ConfirmPassword->setEnabled(true);
    }
}

void NewAccount::on_input_Username_editingFinished()
{
    //when the field loses focus, if its empty or too short disable the submit button
    if(ui->input_Username->text().isEmpty() || ui->input_Username->text().length() < 3){
        ui->buttonSubmit->setEnabled(false);
    }else{
        ui->buttonSubmit->setEnabled(true);
    }
}

void NewAccount::on_input_Email_editingFinished()
{
    //when the field loses focus, if its empty or too short disable the submit button
    if(ui->input_Email->text().isEmpty() || ui->input_Email->text().length() < 3){
        ui->buttonSubmit->setEnabled(false);
    }else{
        ui->buttonSubmit->setEnabled(true);
    }
}
