/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - MainWindow class
 * Class used to control primary interface
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


void MainWindow::setAccountList(){

    //Refresh accounts to include new data
    Accounts.refresh_list();

    //set temp variable to interact with account list table
    QTableWidget* tmp = centralWidget()->findChild<QTableWidget*>("List_accounts");
    //set number of rows to number of accounts in account directory
    tmp->setRowCount(Accounts.size());

    //create new widget to interact with rows within table
    QTableWidgetItem* it;

    //iterate through account list
    for(int i{0}; i < Accounts.size(); i++){
        //set current account in list
        Account* acc = Accounts.at(i);

        //if an account exists and username has any length (indicating the account isn't blank)
        if(acc && acc->get_username().size() > 0){
            //add account details to a new row in account list
            it = new QTableWidgetItem();
            it->setData(Qt::DisplayRole, acc->get_username());
            tmp->setItem(i, 0, it);

            it = new QTableWidgetItem();
            it->setData(Qt::DisplayRole, acc->get_email());
            tmp->setItem(i, 1, it);

            it = new QTableWidgetItem();
            it->setData(Qt::DisplayRole, acc->get_date_created());
            tmp->setItem(i, 2, it);

            it = new QTableWidgetItem();
            it->setData(Qt::DisplayRole, acc->get_last_use());
            tmp->setItem(i, 3, it);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_List_accounts_itemDoubleClicked(QTableWidgetItem *item)
{

    //user double clicks account to edit
    qDebug() << "User clicked: " << item->row();

    //get the current row and pull the data from the hash table
    Account* acc_tmp = Accounts.at(item->row());
    qDebug() << acc_tmp->get_username();
    qDebug() << acc_tmp->get_email();
    qDebug() << acc_tmp->get_date_created();
    qDebug() << acc_tmp->get_last_use() << Qt::endl;

    //FUTURE/To-do: open data in new account form to allow user editing

}

void MainWindow::on_actionNew_Account_triggered()
{
    //create a new dialog as NewAccount ui and execute
    QDialog* dlg = new NewAccount();
    dlg->exec();
}


void MainWindow::on_actionRefresh_triggered()
{
    this->setAccountList();
}

void MainWindow::on_input_Sort_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1 << Qt::endl;
}
