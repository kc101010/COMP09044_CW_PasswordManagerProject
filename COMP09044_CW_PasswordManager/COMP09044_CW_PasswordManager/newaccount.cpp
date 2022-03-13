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
