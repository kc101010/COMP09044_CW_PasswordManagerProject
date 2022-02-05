#include "password.h"

Password::Password()
{

}


QString Password::password_builder(qint16 len){
    QChar to_add;
    QString final_password;


    while(final_password.length() != len){
        to_add = QRandomGenerator::global()->bounded(33, 122);
        final_password.append(to_add);
    }

    set_password(final_password);
    return final_password;
}

QString Password::get_password(){
    return password;
}

void Password::set_password(QString pword){
    password = pword;
}
