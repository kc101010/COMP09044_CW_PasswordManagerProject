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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Account;
    QAction *actionRefresh;
    QAction *actionImport;
    QAction *actionExport;
    QWidget *centralwidget;
    QLabel *Label_MainMenu;
    QComboBox *input_Sort;
    QTableWidget *List_accounts;
    QLabel *label_uname;
    QLabel *label_email;
    QLabel *label_date_created;
    QLabel *label_date_last_used;
    QPushButton *button_click_search;
    QLineEdit *search_input;
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
        MainWindow->setMaximumSize(QSize(800, 600));
        actionNew_Account = new QAction(MainWindow);
        actionNew_Account->setObjectName(QString::fromUtf8("actionNew_Account"));
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        Label_MainMenu = new QLabel(centralwidget);
        Label_MainMenu->setObjectName(QString::fromUtf8("Label_MainMenu"));
        Label_MainMenu->setGeometry(QRect(20, 10, 65, 31));
        Label_MainMenu->setWordWrap(true);
        input_Sort = new QComboBox(centralwidget);
        input_Sort->addItem(QString());
        input_Sort->addItem(QString());
        input_Sort->addItem(QString());
        input_Sort->addItem(QString());
        input_Sort->setObjectName(QString::fromUtf8("input_Sort"));
        input_Sort->setGeometry(QRect(660, 20, 121, 21));
        List_accounts = new QTableWidget(centralwidget);
        if (List_accounts->columnCount() < 4)
            List_accounts->setColumnCount(4);
        if (List_accounts->rowCount() < 10)
            List_accounts->setRowCount(10);
        List_accounts->setObjectName(QString::fromUtf8("List_accounts"));
        List_accounts->setGeometry(QRect(10, 80, 771, 451));
        List_accounts->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        List_accounts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        List_accounts->setDragEnabled(false);
        List_accounts->setShowGrid(false);
        List_accounts->setRowCount(10);
        List_accounts->setColumnCount(4);
        List_accounts->horizontalHeader()->setVisible(false);
        List_accounts->horizontalHeader()->setCascadingSectionResizes(false);
        List_accounts->verticalHeader()->setVisible(false);
        label_uname = new QLabel(centralwidget);
        label_uname->setObjectName(QString::fromUtf8("label_uname"));
        label_uname->setGeometry(QRect(30, 60, 71, 16));
        label_email = new QLabel(centralwidget);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(130, 60, 65, 15));
        label_date_created = new QLabel(centralwidget);
        label_date_created->setObjectName(QString::fromUtf8("label_date_created"));
        label_date_created->setGeometry(QRect(220, 60, 91, 16));
        label_date_last_used = new QLabel(centralwidget);
        label_date_last_used->setObjectName(QString::fromUtf8("label_date_last_used"));
        label_date_last_used->setGeometry(QRect(330, 60, 91, 16));
        button_click_search = new QPushButton(centralwidget);
        button_click_search->setObjectName(QString::fromUtf8("button_click_search"));
        button_click_search->setGeometry(QRect(610, 20, 41, 21));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("SP_DialogApplyButton");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        button_click_search->setIcon(icon);
        search_input = new QLineEdit(centralwidget);
        search_input->setObjectName(QString::fromUtf8("search_input"));
        search_input->setGeometry(QRect(112, 20, 501, 21));
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
        menuFiles->addAction(actionRefresh);
        menuFiles->addAction(actionImport);
        menuFiles->addAction(actionExport);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Password Manager (Prototype)", nullptr));
        actionNew_Account->setText(QCoreApplication::translate("MainWindow", "New Account", nullptr));
        actionRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        actionImport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        Label_MainMenu->setText(QCoreApplication::translate("MainWindow", "Password Prototype", nullptr));
        input_Sort->setItemText(0, QCoreApplication::translate("MainWindow", "Alphabetical", nullptr));
        input_Sort->setItemText(1, QCoreApplication::translate("MainWindow", "Earliest Created", nullptr));
        input_Sort->setItemText(2, QCoreApplication::translate("MainWindow", "Last Used", nullptr));
        input_Sort->setItemText(3, QCoreApplication::translate("MainWindow", "Most Recently Created", nullptr));

        input_Sort->setPlaceholderText(QCoreApplication::translate("MainWindow", "Sort: TYPE", nullptr));
        label_uname->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_email->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_date_created->setText(QCoreApplication::translate("MainWindow", "Date created", nullptr));
        label_date_last_used->setText(QCoreApplication::translate("MainWindow", "Last Used", nullptr));
        button_click_search->setText(QCoreApplication::translate("MainWindow", "Go!", nullptr));
        search_input->setText(QString());
        search_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
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
