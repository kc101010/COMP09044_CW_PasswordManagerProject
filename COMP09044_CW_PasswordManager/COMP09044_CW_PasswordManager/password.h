/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Password header/definition
 * Class used to generate secure passwords
*/

#ifndef PASSWORD_H
#define PASSWORD_H

#include "inputvalexcept.h"
#include <QChar>
#include <QDebug>
#include <QException>
#include <QString>
#include <QRandomGenerator>
#include <QRegularExpression>


class Password
{

private:
    QString password;   //stores password
    qint16 length;      //stores current password length to use
public:
    Password();
    QString password_builder(qint16 len);
    QString get_password();
    void set_password(QString pword);
};

#endif // PASSWORD_H
