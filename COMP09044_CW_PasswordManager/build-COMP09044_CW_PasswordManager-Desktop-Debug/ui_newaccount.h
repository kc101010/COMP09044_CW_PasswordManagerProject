/********************************************************************************
** Form generated from reading UI file 'newaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACCOUNT_H
#define UI_NEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewAccount
{
public:
    QPushButton *buttonSubmit;
    QLineEdit *input_Username;
    QLineEdit *input_Email;
    QLineEdit *input_Password;
    QLineEdit *input_ConfirmPassword;
    QLineEdit *input_Website;
    QPushButton *button_cancel_exit;

    void setupUi(QWidget *NewAccount)
    {
        if (NewAccount->objectName().isEmpty())
            NewAccount->setObjectName(QString::fromUtf8("NewAccount"));
        NewAccount->setWindowModality(Qt::NonModal);
        NewAccount->resize(400, 300);
        NewAccount->setFocusPolicy(Qt::NoFocus);
        NewAccount->setContextMenuPolicy(Qt::NoContextMenu);
        buttonSubmit = new QPushButton(NewAccount);
        buttonSubmit->setObjectName(QString::fromUtf8("buttonSubmit"));
        buttonSubmit->setGeometry(QRect(120, 180, 141, 41));
        input_Username = new QLineEdit(NewAccount);
        input_Username->setObjectName(QString::fromUtf8("input_Username"));
        input_Username->setGeometry(QRect(140, 20, 113, 23));
        input_Email = new QLineEdit(NewAccount);
        input_Email->setObjectName(QString::fromUtf8("input_Email"));
        input_Email->setGeometry(QRect(140, 50, 113, 23));
        input_Password = new QLineEdit(NewAccount);
        input_Password->setObjectName(QString::fromUtf8("input_Password"));
        input_Password->setGeometry(QRect(140, 110, 113, 23));
        input_Password->setEchoMode(QLineEdit::Password);
        input_ConfirmPassword = new QLineEdit(NewAccount);
        input_ConfirmPassword->setObjectName(QString::fromUtf8("input_ConfirmPassword"));
        input_ConfirmPassword->setGeometry(QRect(140, 140, 113, 23));
        input_ConfirmPassword->setEchoMode(QLineEdit::Password);
        input_Website = new QLineEdit(NewAccount);
        input_Website->setObjectName(QString::fromUtf8("input_Website"));
        input_Website->setGeometry(QRect(140, 80, 113, 23));
        button_cancel_exit = new QPushButton(NewAccount);
        button_cancel_exit->setObjectName(QString::fromUtf8("button_cancel_exit"));
        button_cancel_exit->setGeometry(QRect(150, 240, 84, 23));

        retranslateUi(NewAccount);

        QMetaObject::connectSlotsByName(NewAccount);
    } // setupUi

    void retranslateUi(QWidget *NewAccount)
    {
        NewAccount->setWindowTitle(QCoreApplication::translate("NewAccount", "New Account", nullptr));
        buttonSubmit->setText(QCoreApplication::translate("NewAccount", "Create", nullptr));
        input_Username->setPlaceholderText(QCoreApplication::translate("NewAccount", "Username", nullptr));
        input_Email->setPlaceholderText(QCoreApplication::translate("NewAccount", "Email", nullptr));
        input_Password->setPlaceholderText(QCoreApplication::translate("NewAccount", "Password", nullptr));
        input_ConfirmPassword->setPlaceholderText(QCoreApplication::translate("NewAccount", "Confirm password", nullptr));
        input_Website->setPlaceholderText(QCoreApplication::translate("NewAccount", "Website", nullptr));
        button_cancel_exit->setText(QCoreApplication::translate("NewAccount", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewAccount: public Ui_NewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACCOUNT_H
