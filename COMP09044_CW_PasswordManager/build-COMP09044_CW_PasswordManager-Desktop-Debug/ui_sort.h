/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sort
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *sort)
    {
        if (sort->objectName().isEmpty())
            sort->setObjectName(QString::fromUtf8("sort"));
        sort->resize(391, 337);
        listWidget = new QListWidget(sort);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 371, 311));

        retranslateUi(sort);

        QMetaObject::connectSlotsByName(sort);
    } // setupUi

    void retranslateUi(QWidget *sort)
    {
        sort->setWindowTitle(QCoreApplication::translate("sort", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sort: public Ui_sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
