#include "mainwindow.h"
#include "unittest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //run various unit tests
    //UnitTest().password_generation();
    //UnitTest().account_creation();
    //UnitTest().data_handling();
    UnitTest().hash_map();

    w.show();
    return a.exec();
}
