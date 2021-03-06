/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - UnitTest class
 * Class used to test features during development stage
*/

#include "unittest.h"

UnitTest::UnitTest()
{

}

//test various length values within password_builder method
void UnitTest::password_generation(){
    try {
        Password p;

        p.password_builder(16);
        qDebug() << p.get_password()<< Qt::endl;

        p.password_builder(32);
        qDebug() << p.get_password()<< Qt::endl;

        p.password_builder(1);
        qDebug() << p.get_password()<< Qt::endl;

        p.password_builder('x');
        qDebug() << p.get_password()<< Qt::endl;

        p.password_builder(555);
        qDebug() << p.get_password()<< Qt::endl;

        p.password_builder(-1);
        qDebug() << p.get_password() << Qt::endl;
    }  catch (QException e) {
        qDebug() << "Unit Test Failed: " << e.what() << Qt::endl;
    }

}

//test creating an account w/ details then outputting to terminal
void UnitTest::account_creation(){
    Password pw;
    QDate today = QDate::currentDate();
    pw.password_builder(16);

    try{
       Account *john = new Account("john_w", pw.get_password(), "john_w@email.com", today );
       john->set_last_use(today);
       qDebug() << john->get_username() << Qt::endl;
       qDebug() << john->get_password() << Qt::endl;
       qDebug() << john->get_email() << Qt::endl;
       qDebug() << john->get_date_created().toString("dd.MM.yyyy") << Qt::endl;
       qDebug() << john->get_last_use().toString("dd.MM.yyyy") << Qt::endl;
       delete john;
    }catch (QException e) {
        qDebug() << "Unit Test Failed: " << e.what() << Qt::endl;
    }
}

void UnitTest::data_handling(){
    Password pw;
    QDate today = QDate::currentDate();
    pw.password_builder(16);

    try{
        Account *julia = new Account("julia1131", pw.get_password(), "jules@hotmail.com", today);
        julia->set_last_use(today);
        DataHandler *dh = new DataHandler();

        dh->saveAccount(julia);

        delete dh;
        delete julia;
    }catch(QException e){
        qDebug() << "Unit Test Failed: " << e.what() << Qt::endl;
    }

}

void UnitTest::hash_table(){
    Password pw;
    QDate today = QDate::currentDate();
    pw.password_builder(16);
    HashTable<int, Account*>* h = new HashTable<int, Account*>;
    Account *julia = new Account("julia1131", pw.get_password(), "jules@hotmail.com", today);
    julia->set_last_use(today);


    try{

        h->insert(0, julia);
        h->insert(699, julia);
        h->insert(155, julia);
        h->insert(890, julia);
        h->insert(601, julia);
        h->insert(1155, julia);

        qDebug() << h->is_empty() << Qt::endl;

        //h->print_table();

        qDebug() << h->search(699) << Qt::endl;

        h->remove(601);

        //h->print_table();


        delete julia;
        delete h;
    }catch(QException e){
        qDebug() << "Unit Test Failed: " << e.what() << Qt::endl;
    }

}

void UnitTest::account_directory(){
    AccountDirectory dir;
}

