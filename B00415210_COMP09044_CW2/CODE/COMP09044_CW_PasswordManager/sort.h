/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Sort class definition
 * Class used to display sorted ids
*/

#ifndef SORT_H
#define SORT_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class sort;
}

class sort : public QDialog
{
    Q_OBJECT

public:
    explicit sort(int size, int* sort, QWidget *parent = nullptr);
    ~sort();

private:
    Ui::sort *ui;
    int* sorted_items[];
};

#endif // SORT_H
