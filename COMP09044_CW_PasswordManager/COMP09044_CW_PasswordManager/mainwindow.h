/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - MainWindow header/definition
 * Class used to control primary interface
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QDate>
#include <QTableWidget>
#include "accountdirectory.h"
#include "newaccount.h"
#include "breachchecker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setAccountList();
    ~MainWindow();

private slots:
    void on_List_accounts_itemDoubleClicked(QTableWidgetItem *item);
    void on_actionNew_Account_triggered();
    void on_actionRefresh_triggered();
    void on_input_Sort_currentIndexChanged(const QString &arg1);
    void on_buttton_Sort_clicked();
    void on_List_accounts_customContextMenuRequested(const QPoint &pos);
    void edit_account(Account *ed);

private:
    Ui::MainWindow *ui;
    AccountDirectory Accounts;
    QMenu *menu = new QMenu(this);
};
#endif // MAINWINDOW_H
