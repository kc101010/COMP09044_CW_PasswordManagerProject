#ifndef NEWACCOUNT_H
#define NEWACCOUNT_H

#include "password.h"
#include "account.h"
#include "datahandler.h"
#include <QWidget>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class NewAccount;
}

class NewAccount : public QDialog
{
    Q_OBJECT

public:

    explicit NewAccount(QWidget *parent = 0);
    ~NewAccount();

private slots:
    void on_button_cancel_exit_clicked();
    void on_buttonSubmit_clicked();
    void on_input_GeneratePassword_stateChanged(int arg1);

private:
    Ui::NewAccount *ui;
    Account* to_add;
    bool pword_check_state;

};

#endif // NEWACCOUNT_H
