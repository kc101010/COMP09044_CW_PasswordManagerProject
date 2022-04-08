/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Main class
 * Class acts as entry point for program
*/


#include "mainwindow.h"
#include "accountdirectory.h"
#include "unittest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //load accounts into table
    w.setAccountList();

    //run various unit tests
    //UnitTest().password_generation();
    //UnitTest().account_creation();
    //UnitTest().data_handling();
    //UnitTest().hash_table();
    //UnitTest().account_directory();


    w.show();
    return a.exec();
}
