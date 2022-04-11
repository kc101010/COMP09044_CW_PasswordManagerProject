/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - BreachChecker class
 * Class used to check for data breaches on a specific account
*/


#include "breachchecker.h"

//constructor sets account to check/its email
BreachChecker::BreachChecker(QString email)
{
    set_account_to_check(email);
}

//function copies the email into the clipboard and asks the user to paste into website
void BreachChecker::check_if_breached(){
    //declare a messagebox for user feedback
    QMessageBox msg;

    try{
        //dopen website
        QDesktopServices::openUrl(QUrl("https://haveibeenpwned.com"));

        //copy the email into the system clipboard
        qApp->clipboard()->setText(QString(email_to_check), QClipboard::Clipboard);

        //set feedback box info
        msg.setWindowTitle("Email copied!");
        msg.setText("Account email copied - please paste into Website!");
        msg.setButtonText(0, "OK");
        msg.exec();

        //qDebug() << "Email copied!" << Qt::endl;
    }catch(QException e){
        msg.setWindowTitle("Error!");
        QString txt = e.what();
        msg.setText(txt);
        msg.exec();
    }
}

QString BreachChecker::get_account_to_check(){
    return email_to_check;
}

void BreachChecker::set_account_to_check(QString email){
    email_to_check = email;
}
