/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Sort window code
 * Class used to display sorted ids
*/

#include "sort.h"
#include "ui_sort.h"

sort::sort(int size, QVector<int> sort, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sort)
{
    ui->setupUi(this);
    this->setWindowTitle("Sorted IDs");

    for(int i = 0; i < size; i++){
        ui->listWidget->addItem(QString::number(sort.at(i)));
    }
}

sort::~sort()
{
    delete ui;
}
