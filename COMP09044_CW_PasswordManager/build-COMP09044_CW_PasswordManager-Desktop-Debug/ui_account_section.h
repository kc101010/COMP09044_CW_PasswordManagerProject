/********************************************************************************
** Form generated from reading UI file 'account_section.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_SECTION_H
#define UI_ACCOUNT_SECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *Account;
    QLabel *label_3;
    QLabel *acc_username;
    QLabel *acc_email;
    QPushButton *acc_button_copy;
    QCheckBox *checkBox;
    QPushButton *acc_button_trash;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(751, 80);
        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 751, 80));
        Account = new QHBoxLayout(horizontalLayoutWidget);
        Account->setObjectName(QString::fromUtf8("Account"));
        Account->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        Account->addWidget(label_3);

        acc_username = new QLabel(horizontalLayoutWidget);
        acc_username->setObjectName(QString::fromUtf8("acc_username"));

        Account->addWidget(acc_username);

        acc_email = new QLabel(horizontalLayoutWidget);
        acc_email->setObjectName(QString::fromUtf8("acc_email"));

        Account->addWidget(acc_email);

        acc_button_copy = new QPushButton(horizontalLayoutWidget);
        acc_button_copy->setObjectName(QString::fromUtf8("acc_button_copy"));

        Account->addWidget(acc_button_copy);

        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setTristate(false);

        Account->addWidget(checkBox);

        acc_button_trash = new QPushButton(horizontalLayoutWidget);
        acc_button_trash->setObjectName(QString::fromUtf8("acc_button_trash"));

        Account->addWidget(acc_button_trash);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "WEBSITE", nullptr));
        acc_username->setText(QCoreApplication::translate("Form", "USERNAME", nullptr));
        acc_email->setText(QCoreApplication::translate("Form", "EMAIL", nullptr));
        acc_button_copy->setText(QCoreApplication::translate("Form", "COPY", nullptr));
        checkBox->setText(QString());
        acc_button_trash->setText(QCoreApplication::translate("Form", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_SECTION_H
