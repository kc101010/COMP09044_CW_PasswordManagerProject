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

//function sets the main table on primary interface
void MainWindow::setAccountList(){

    //Refresh accounts to include new data
    Accounts.refresh_list();

    //set temp variable to interact with account list table
    QTableWidget* tmp = centralWidget()->findChild<QTableWidget*>("List_accounts");
    //set number of rows to number of accounts in account directory
    tmp->setRowCount(Accounts.size());
    tmp->setColumnCount(6);
    tmp->setToolTip("Double click to perform a data check!");

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

            it = new QTableWidgetItem();
            it->setData(Qt::DisplayRole, "EDIT");
            tmp->setItem(i, 4, it);

            it = new QTableWidgetItem();
            it->setData(Qt::DisplayRole, "DELETE");
            tmp->setItem(i, 5, it);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


//function allows for data checking by double clicking
void MainWindow::on_List_accounts_itemDoubleClicked(QTableWidgetItem *item)
{

    //user double clicks account to edit
    qDebug() << "User clicked: " << item->row();
    Account* acc_tmp = Accounts.at(item->row());
    qDebug() << acc_tmp->get_username();
    qDebug() << acc_tmp->get_email();
    qDebug() << acc_tmp->get_date_created();
    qDebug() << acc_tmp->get_last_use() << Qt::endl;

    if(item->column() == 4){
        edit_account(acc_tmp);
    }else if(item->column() == 5){
        Accounts.delete_account(acc_tmp);
    }else{
        BreachChecker* bchk = new BreachChecker(acc_tmp->get_email());
        //perform check
        bchk->check_if_breached();

        delete bchk;
    }
}

//function handles new account
void MainWindow::on_actionNew_Account_triggered()
{
    //create a new dialog as NewAccount ui and execute
    QDialog* dlg = new NewAccount();
    dlg->exec();
}

//function refreshes main interface table
void MainWindow::on_actionRefresh_triggered()
{
    this->setAccountList();
}

void MainWindow::on_input_Sort_currentIndexChanged(const QString &arg1)
{
    qDebug() << arg1 << Qt::endl;
}

//function sorts account ids when clicked
void MainWindow::on_buttton_Sort_clicked()
{
    try{
        //declare array for ids and int to store array size
        QVector<int> id_arr;
        id_arr.resize(Accounts.size());

        //loop through Account list
        for(int i{0}; i < Accounts.size(); i++){
            //temporarily store account
            Account* tmp = Accounts.at(i);

            //if the account exists and has a username
            if(tmp && tmp->get_username().size() > 0){
                 //store account id to id array
                 id_arr.push_front(tmp->get_id());
            }
       }

       //sort accounts and store them to a new variable
       QVector<int> sorted_id = Accounts.sort_accounts(id_arr, Accounts.size());

       //loop through and print each sorted id
       for(int i{0}; i < Accounts.size(); i++){
           qDebug() << sorted_id.at(i);
       }

       QDialog *sorted = new sort(Accounts.size(), sorted_id);
       sorted->exec();

    }catch(QException e){
        qDebug() << e.what() << Qt::endl;
    }
}

void MainWindow::on_List_accounts_customContextMenuRequested(const QPoint &pos)
{
    menu->popup(ui->List_accounts->mapToGlobal(pos));
}

void MainWindow::edit_account(Account* ed){
    QDialog *dlg = new NewAccount(ed);
    dlg->exec();
}
