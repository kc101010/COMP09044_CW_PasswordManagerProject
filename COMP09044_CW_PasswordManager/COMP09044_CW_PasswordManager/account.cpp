/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Account class
 * Class used to store user account details
*/

#include "account.h"

//constructor sets up most of the account details
Account::Account(QString un, QString pw, QString em, QDate dc)
{
    //try to set various account details
    try{
        set_username(un);
        set_password(pw);
        set_email(em);
        set_date_created(dc);
        set_id();
    //otherwise catch the exception and print information
    }catch(QException e){
        qDebug() << "Account creation failed: " << e.what() << Qt::endl;
    }
}

Account::Account(int id, QString un, QString pw, QString em, QDate dc)
{
    //try to set various account details
    try{
        set_username(un);
        set_password(pw);
        set_email(em);
        set_date_created(dc);
        set_id(id);
    //otherwise catch the exception and print information
    }catch(QException e){
        qDebug() << "Account creation failed: " << e.what() << Qt::endl;
    }
}

//function allows viewing of stored password
QString Account::get_password(){
    return password;
}

//function sets a new password to be stored
void Account::set_password(QString new_pword){
    password = new_pword;
}

//function allows viewing of stored username
QString Account::get_username(){
    return username;
}

//function sets a new username to be stored
void Account::set_username(QString new_username){
    if(new_username.length() > 2){
        username = new_username;
    }else{
        throw Inputvalexcept();
    }
}

//function allows viewing of stored email
QString Account::get_email(){
    return email;
}

//function validates and sets a new email to be stored
void Account::set_email(QString new_email){
    //define a regular expression for an email format
    QRegularExpression rexp("([A-Za-z0-9_.]{3,})@([A-Za-z0-9]{3,}).([A-Za-z0-9]{2,6})");

    //if the new email fits the regex, it is valid and can be set
    if(rexp.match(new_email).hasMatch()){
        email= new_email;
    //otherwise inform user that email isn't valid
    }else{
        qDebug() << "Could not set email - not valid" << Qt::endl;
        throw Inputvalexcept();
    }

}

//function allows viewing of when account was last used
QDate Account::get_last_use(){
    return lastUse;
}

//function validates and sets when account was last used
void Account::set_last_use(QDate date){
    //if the date being passed is valid, it can be set
    if(date.isValid()){
        lastUse = date;
    //otherwise print error info
    }else{
        qDebug() << "Could not set last use date - not valid" << Qt::endl;
        throw Inputvalexcept();
    }

}

//function allows viewing of when account was created
QDate Account::get_date_created(){
    return dateCreated;
}

//function validates and sets when account was created
void Account::set_date_created(QDate creation_date){
    //if the date being passed is valid, it can be set
    if(creation_date.isValid()){
        dateCreated = creation_date;
    //otherwise print error info
    }else{
        qDebug() << "Could not set creation date - Not valid" << Qt::endl;
        throw Inputvalexcept();
    }
}

//function returns numeric id when called
int Account::get_id(){
    return id;
}

//function generates numeric id based on certain properties
void Account::set_id(){

    int userlen = username.length();
    int emaillen = email.length();
    id = (userlen + emaillen) * QRandomGenerator::global()->bounded(2, 8);

}

void Account::set_id(int id_to_set){
    id = id_to_set;
}






