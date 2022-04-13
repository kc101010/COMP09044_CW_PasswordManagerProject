/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - DataHandler class
 * Class interacts with SQLite database to store and manage account info
*/

#include "datahandler.h"

//constructor sets up database info and DataFile for encryption/decryption
DataHandler::DataHandler(){
    try{
        //Decrypt the database to allow access
        //DecryptDB();
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

DataHandler::~DataHandler(){
    db.close();
    //Encrypt database
    //EncryptDB();
}

HashTable<int, Account*> DataHandler::readAccountDirectory(){
    HashTable<int, Account*> data;

    try{
        //open database
        db.open();

        //prepare statment to read from database
        QSqlQuery stm;
        stm.prepare("SELECT username, password, email, creation_date, last_used FROM accounts ");

        stm.exec();

        //store each account within hash table
        while(stm.next()){
            Account* temp = new Account(
                        stm.value(0).toString(),
                        stm.value(1).toString(),
                        stm.value(2).toString(),
                        stm.value(3).toDate()
                                            );
            temp->set_last_use(stm.value(4).toDate());

            //generate a key for the hash table by using aspects of the account creation date
            int key = temp->get_date_created().day() + temp->get_date_created().month();
            data.insert(key, temp);

        }


        //close db access
        stm.finish();
        db.close();

    }catch(QSqlError e){
        //print exception info
        qDebug() << e.text() << e.type() << Qt::endl;
    }

    return data;
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

void DataHandler::editAccount(Account *prev, Account *acc_edit){
    try{
        //open new connnection to database and declare new query
        db.open();
        QSqlQuery stm;

        //prepare statement to delete existing account
        stm.prepare("UPDATE accounts SET username = ?, password = ?, email = ?, last_used = ?, creation_date = ? WHERE username LIKE ? AND email LIKE ? OR username LIKE ? ");

        //bind account informataion to sql statement
        stm.bindValue(0, acc_edit->get_username());
        stm.bindValue(1, acc_edit->get_password());
        stm.bindValue(2, acc_edit->get_email());
        stm.bindValue(3, acc_edit->get_last_use());
        stm.bindValue(4, acc_edit->get_date_created());
        stm.bindValue(5, prev->get_username());
        stm.bindValue(6, prev->get_email());
        stm.bindValue(7, prev->get_username());

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
