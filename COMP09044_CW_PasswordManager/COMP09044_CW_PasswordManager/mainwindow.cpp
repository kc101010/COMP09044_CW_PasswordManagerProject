#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

void MainWindow::setAccountList(){

    QTableWidget* tmp = centralWidget()->findChild<QTableWidget*>("List_accounts");
    tmp->setRowCount(Accounts.size());

    QTableWidgetItem* it;

    for(int i{0}; i < Accounts.size(); i++){
        Account* acc = Accounts.at(i);

        if(acc){
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
    //QTableWidget* tmp = centralWidget()->findChild<QTableWidget*>("List_accounts");

    /*select all columns within the current row
    for(int i{0}; i < tmp->columnCount(); i++){
        //print column data within row
        qDebug() << tmp->item(item->row(), i)->text();
    }*/

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
