/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Account;
    QAction *actionSave;
    QAction *actionImport;
    QAction *actionExport;
    QWidget *centralwidget;
    QLabel *Label_MainMenu;
    QTextEdit *input_Search;
    QComboBox *input_Sort;
    QScrollArea *AccountListing;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menuFiles;
    QMenu *menuEdit;
    QMenu *menuOptions;
    QMenu *menuTools;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        actionNew_Account = new QAction(MainWindow);
        actionNew_Account->setObjectName(QString::fromUtf8("actionNew_Account"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Label_MainMenu = new QLabel(centralwidget);
        Label_MainMenu->setObjectName(QString::fromUtf8("Label_MainMenu"));
        Label_MainMenu->setGeometry(QRect(20, 10, 65, 31));
        Label_MainMenu->setWordWrap(true);
        input_Search = new QTextEdit(centralwidget);
        input_Search->setObjectName(QString::fromUtf8("input_Search"));
        input_Search->setGeometry(QRect(100, 20, 571, 21));
        QFont font;
        font.setPointSize(8);
        input_Search->setFont(font);
        input_Search->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        input_Search->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        input_Search->setCursorWidth(0);
        input_Sort = new QComboBox(centralwidget);
        input_Sort->addItem(QString());
        input_Sort->addItem(QString());
        input_Sort->setObjectName(QString::fromUtf8("input_Sort"));
        input_Sort->setGeometry(QRect(680, 20, 111, 21));
        AccountListing = new QScrollArea(centralwidget);
        AccountListing->setObjectName(QString::fromUtf8("AccountListing"));
        AccountListing->setGeometry(QRect(20, 60, 761, 491));
        AccountListing->setFrameShape(QFrame::Box);
        AccountListing->setFrameShadow(QFrame::Sunken);
        AccountListing->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        AccountListing->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 743, 487));
        AccountListing->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFiles = new QMenu(menubar);
        menuFiles->setObjectName(QString::fromUtf8("menuFiles"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFiles->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFiles->addAction(actionNew_Account);
        menuFiles->addAction(actionSave);
        menuFiles->addAction(actionImport);
        menuFiles->addAction(actionExport);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Password Manager (Prototype)", nullptr));
        actionNew_Account->setText(QCoreApplication::translate("MainWindow", "New Account", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionImport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        Label_MainMenu->setText(QCoreApplication::translate("MainWindow", "Password Prototype", nullptr));
        input_Search->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search ", nullptr));
        input_Sort->setItemText(0, QCoreApplication::translate("MainWindow", "Ascending", nullptr));
        input_Sort->setItemText(1, QCoreApplication::translate("MainWindow", "Descending", nullptr));

        input_Sort->setCurrentText(QString());
        input_Sort->setPlaceholderText(QCoreApplication::translate("MainWindow", "Sort: TYPE", nullptr));
        menuFiles->setTitle(QCoreApplication::translate("MainWindow", "Files", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
