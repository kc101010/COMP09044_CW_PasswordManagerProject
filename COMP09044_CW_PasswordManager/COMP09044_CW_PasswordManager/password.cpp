#include "password.h"


Password::Password()
{

}

QString Password::password_builder(qint16 len){
    //declare character to append to password, string for password
    QChar to_add;
    QString final_password;

    //fill password string with random characters until it meets the right length
    while(final_password.length() != len){
        //use numbers between 33 and 122, in ASCII these are special chars, numbers & letters
        to_add = QRandomGenerator::global()->bounded(33, 122);
        final_password.append(to_add);
    }

    //set new password to current password then return it
    set_password(final_password);
    return final_password;
}

QString Password::get_password(){
    return password;
}

void Password::set_password(QString pword){
    try{
        password = pword;
    }catch(QException e){
        qDebug() << "Password set failed: " << e.what() << Qt::endl;
    }

}
