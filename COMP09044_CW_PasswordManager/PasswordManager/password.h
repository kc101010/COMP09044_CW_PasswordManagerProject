#ifndef PASSWORD_H
#define PASSWORD_H

#include <QChar>
#include <QString>
#include <QRandomGenerator>

class Password
{

private:
    QString password;
    qint16 length;
public:
    Password();
    QString password_builder(qint16 len);
    QString get_password();
    void set_password(QString pword);
};

#endif // PASSWORD_H
