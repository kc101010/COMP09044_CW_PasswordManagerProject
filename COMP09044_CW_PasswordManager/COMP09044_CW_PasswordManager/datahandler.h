#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include "account.h"

#include <QDebug>
#include <QException>
#include <QFile>
#include <QString>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QtCrypto>

class DataHandler
{
    private:
        QSqlDatabase db;   //stores database to be used
        QFile DataFile;    //stores database file for encryption/decryption
        QCA::Initializer init;
    public:
        DataHandler();
        ~DataHandler();
        void saveAccount(Account *acc_save);    //saves a new account to database
        void deleteAccount(Account *acc_del);   //deletes account from database
        void editAccount(Account *acc_edit);    //edits existing account information
        void EncryptDB();                       //Encrypts database file for security
        void DecryptDB();                       //Decrypts database file for program use
        void setFile(QString fname);
        QFile getDataFile();

};

#endif // DATAHANDLER_H
