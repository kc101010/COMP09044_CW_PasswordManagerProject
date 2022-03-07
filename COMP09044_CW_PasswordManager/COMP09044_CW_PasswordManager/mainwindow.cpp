#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTableWidget>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

void MainWindow::setAccountList(){

    QTableWidget* tmp = centralWidget()->findChild<QTableWidget*>("tableWidget");
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

