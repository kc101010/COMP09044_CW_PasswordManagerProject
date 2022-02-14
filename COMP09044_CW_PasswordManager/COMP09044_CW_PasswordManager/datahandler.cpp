#include "datahandler.h"


//constructor sets up database info and DataFile for encryption/decryption
DataHandler::DataHandler(){
    try{
        //create a new database, set its name for db and encryption functionality
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("p_program.sqlite");
        setFile("p_program.sqlite");
        db.open();
        //ensure table exists
        QSqlQuery stm("CREATE TABLE IF NOT EXISTS accounts(username TEXT, password TEXT, email TEXT, last_used DATE, creation_date DATE)");

        stm.exec();

        //close query and db connection
        stm.finish();
        db.close();
    }catch(QSqlError e){
        //print exception info
        qDebug() << e.text() << e.type() << Qt::endl;
    }

}

void DataHandler::saveAccount(Account *acc_save){
    try{
        //open new connnection to database and declare new query
        db.open();
        QSqlQuery stm;

        //prepare statement to save a new account
        stm.prepare("INSERT INTO accounts(username, password, email, last_used, creation_date) VALUES(?,?,?,?,?)");

        //bind account informataion to sql statement
        stm.bindValue(0, acc_save->get_username());
        stm.bindValue(1, acc_save->get_password());
        stm.bindValue(2, acc_save->get_email());
        stm.bindValue(3, acc_save->get_last_use());
        stm.bindValue(4, acc_save->get_date_created());

        stm.exec();

        //close query and db connection
        stm.finish();
        db.close();
    }catch(QSqlError e){
        //print exception info
        qDebug() << e.text() << e.type() << Qt::endl;
    }

}

void DataHandler::deleteAccount(Account *acc_del){
    try{
        //open new connnection to database and declare new query
        db.open();
        QSqlQuery stm;

        //prepare statement to delete existing account
        stm.prepare("DELETE FROM accounts WHERE username LIKE ? AND email LIKE ?");

        //bind account informataion to sql statement
        stm.bindValue(0, acc_del->get_username());
        stm.bindValue(1, acc_del->get_email());

        stm.exec();

        //close query and db connection
        stm.finish();
        db.close();
    }catch(QSqlError e){
        qDebug() << e.text() << e.type() << Qt::endl;
    }
}

void DataHandler::editAccount(Account *acc_edit){
    try{
        //open new connnection to database and declare new query
        db.open();
        QSqlQuery stm;

        //prepare statement to delete existing account
        stm.prepare("UPDATE accounts SET username = ?, password = ?, email = ?, last_used = ?, creation_date = ? WHERE username LIKE ? AND email LIKE ? ");

        //bind account informataion to sql statement
        stm.bindValue(0, acc_edit->get_username());
        stm.bindValue(1, acc_edit->get_password());
        stm.bindValue(2, acc_edit->get_email());
        stm.bindValue(3, acc_edit->get_last_use());
        stm.bindValue(4, acc_edit->get_date_created());
        stm.bindValue(5, acc_edit->get_username());
        stm.bindValue(6, acc_edit->get_password());

        stm.exec();

        //close query and db connection
        stm.finish();
        db.close();
    }catch(QSqlError e){
        qDebug() << e.text() << e.type() << Qt::endl;
    }
}

void DataHandler::setFile(QString fname){
    if(fname.contains(".sqlite")){
        DataFile.setFileName(fname);
    }else{
        qDebug() << "Name is not valid!" << Qt::endl;
    }
}

void DataHandler::EncryptDB(){

}

void DataHandler::DecryptDB(){

}
