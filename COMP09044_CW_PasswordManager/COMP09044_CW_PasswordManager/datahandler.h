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

class DataHandler
{
    private:
        QSqlDatabase db;
        QFile DataFile;
    public:
        DataHandler();
        void saveAccount(Account *acc_save);
        void deleteAccount(Account *acc_del);
        void editAccount(Account *acc_edit);
        void EncryptDB();
        void DecryptDB();
        void setDataFile(QString fname);
        QFile getDataFile();

};

#endif // DATAHANDLER_H
