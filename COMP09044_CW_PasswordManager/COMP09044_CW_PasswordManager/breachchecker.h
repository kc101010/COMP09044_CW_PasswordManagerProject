/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - BreachChecker header/definition
 * Class used to check for data breaches on a specific account
*/


#ifndef BREACHCHECKER_H
#define BREACHCHECKER_H

#include "account.h"
#include <QApplication>
#include <QClipboard>
#include <QDesktopServices>
#include <QMessageBox>
#include <QKeyEvent>
#include <QUrl>


class BreachChecker
{
private:
    QString email_to_check;
    QString Result;
public:
    BreachChecker(QString email);
    void check_if_breached();
    QString get_account_to_check();
    void set_account_to_check(QString email);
};

#endif // BREACHCHECKER_H
