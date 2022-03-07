#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:
    Ui::MainWindow *ui;
    AccountDirectory Accounts;
};
#endif // MAINWINDOW_H
