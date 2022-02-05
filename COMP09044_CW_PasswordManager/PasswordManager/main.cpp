#include "main.h"
#include "ui_main.h"

#include <QDebug>
#include "password.cpp"

Main::Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main)
{
    ui->setupUi(this);
    Password p;

    p.password_builder(16);

    qDebug() << p.get_password();


}

Main::~Main()
{
    delete ui;
}

