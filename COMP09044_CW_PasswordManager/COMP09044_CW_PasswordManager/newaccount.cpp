#include "newaccount.h"
#include "ui_newaccount.h"

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

    //if any fields are empty, don't details to be saved
    if(ui->input_Username->text().isEmpty()
            || ui->input_Email->text().isEmpty()
            || ui->input_Password->text().isEmpty())
    {
        qDebug() << "Input empty" << Qt::endl;
    }else{
        //otherwise if confirm password and password fields match
        if(ui->input_ConfirmPassword->text() == ui->input_Password->text()){
            //try to create a new account and save it to the database
            try{
                QDate today = QDate::currentDate();
                DataHandler* dh = new DataHandler;

                Account* to_add = new Account(
                                ui->input_Username->text(),
                                ui->input_Password->text(),
                                ui->input_Email->text(),
                                today
                            );

                to_add->set_last_use(today);
                dh->saveAccount(to_add);

                delete dh;
                delete to_add;

                //set messagebox text to provide user feedback
                msg.setText("Account successfully created!");
                msg.exec();

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
