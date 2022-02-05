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

