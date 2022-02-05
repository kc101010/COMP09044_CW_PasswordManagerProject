#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QDate>
#include <QDebug>
#include <QException>
#include <QRegularExpression>
#include <QString>

class Account
{
    private:
        QString username;
        QString password;
        QString email;
        QDate lastUse;
        QDate dateCreated;
    public:
        Account(QString un, QString pw, QString em, QDate dc);
        QString get_password();
        void set_password(QString new_pword);
        QString get_username();
        void set_username(QString new_username);
        QString get_email();
        void set_email(QString new_email);
        QDate get_last_use();
        void set_last_use(QDate date);
        QDate get_date_created();
        void set_date_created(QDate creation_date);
};

#endif // ACCOUNT_H
