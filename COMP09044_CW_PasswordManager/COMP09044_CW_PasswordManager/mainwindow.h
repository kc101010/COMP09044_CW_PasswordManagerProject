#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "accountdirectory.h"

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

private:
    Ui::MainWindow *ui;
    AccountDirectory Accounts;
};
#endif // MAINWINDOW_H
