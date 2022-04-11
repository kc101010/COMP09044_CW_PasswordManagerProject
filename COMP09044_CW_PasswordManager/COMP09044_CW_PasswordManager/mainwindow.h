/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - MainWindow header/definition
 * Class used to control primary interface
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:
    Ui::MainWindow *ui;
    AccountDirectory Accounts;
};
#endif // MAINWINDOW_H
