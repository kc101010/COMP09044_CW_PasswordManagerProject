#include "unittest.h"

UnitTest::UnitTest()
{
    password_generation();
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
