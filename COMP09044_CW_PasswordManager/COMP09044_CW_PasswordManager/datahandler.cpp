#include "datahandler.h"

DataHandler::DataHandler(){
    try{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("p_program.sqlite");
        setDataFile("p_program.sqlite");
        db.open();
        QSqlQuery stm("CREATE TABLE IF NOT EXISTS accounts(username TEXT, password TEXT, email TEXT, last_used DATE, creation_date DATE)");

        stm.exec();

        stm.finish();
        db.close();
    }catch(QSqlError e){
        qDebug() << e.text() << e.type() << Qt::endl;
    }

}

void DataHandler::saveAccount(Account *acc_save){
    try{

        db.open();
        QSqlQuery stm;

        stm.prepare("INSERT INTO accounts(username, password, email, last_used, creation_date) VALUES(?,?,?,?,?)");

        stm.bindValue(0, acc_save->get_username());
        stm.bindValue(1, acc_save->get_password());
        stm.bindValue(2, acc_save->get_email());
        stm.bindValue(3, acc_save->get_last_use());
        stm.bindValue(4, acc_save->get_date_created());

        stm.exec();

        stm.finish();
        db.close();
    }catch(QSqlError e){
        qDebug() << e.text() << e.type() << Qt::endl;
    }

}

void DataHandler::deleteAccount(Account *acc_del){
    try{

        db.open();
        QSqlQuery stm;

        stm.prepare("DELETE FROM accounts WHERE username LIKE ? AND email LIKE ?");

        stm.bindValue(0, acc_del->get_username());
        stm.bindValue(1, acc_del->get_email());

        stm.exec();

        stm.finish();
        db.close();
    }catch(QSqlError e){
        qDebug() << e.text() << e.type() << Qt::endl;
    }
}

void DataHandler::editAccount(Account *acc_edit){
    try{

        db.open();
        QSqlQuery stm;

        stm.prepare("UPDATE accounts SET username = ?, password = ?, email = ?, last_used = ?, creation_date = ? WHERE username LIKE ? AND email LIKE ? ");

        stm.bindValue(0, acc_edit->get_username());
        stm.bindValue(1, acc_edit->get_password());
        stm.bindValue(2, acc_edit->get_email());
        stm.bindValue(3, acc_edit->get_last_use());
        stm.bindValue(4, acc_edit->get_date_created());
        stm.bindValue(5, acc_edit->get_username());
        stm.bindValue(6, acc_edit->get_password());

        stm.exec();

        stm.finish();
        db.close();
    }catch(QSqlError e){
        qDebug() << e.text() << e.type() << Qt::endl;
    }
}
