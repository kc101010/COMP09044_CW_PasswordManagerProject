#include "account.h"

Account::Account(QString un, QString pw, QString em, QDate dc)
{
    try{
        set_username(un);
        set_password(pw);
        set_email(em);
        set_date_created(dc);
    }catch(QException e){
        qDebug() << "Account creation failed: " << e.what() << Qt::endl;
    }
}

QString Account::get_password(){
    return password;
}

void Account::set_password(QString new_pword){
    password = new_pword;
}

QString Account::get_username(){
    return username;
}

void Account::set_username(QString new_username){
    username = new_username;
}

QString Account::get_email(){
    return email;
}

void Account::set_email(QString new_email){

    QRegularExpression rexp("([A-Za-z0-9_.]{3,})@([A-Za-z0-9]{3,}).([A-Za-z0-9]{2,6})");

    if(rexp.match(new_email).hasMatch()){
        email= new_email;
    }else{
        qDebug() << "Could not set email - not valid" << Qt::endl;
    }

}

QDate Account::get_last_use(){
    return lastUse;
}

void Account::set_last_use(QDate date){
    if(date.isValid()){
        lastUse = date;
    }else{
        qDebug() << "Could not set last use date - not valid" << Qt::endl;
    }

}

QDate Account::get_date_created(){
    return dateCreated;
}

void Account::set_date_created(QDate creation_date){
    if(creation_date.isValid()){
        dateCreated = creation_date;
    }else{
        qDebug() << "Could not set creation date - Not valid" << Qt::endl;
    }
}




