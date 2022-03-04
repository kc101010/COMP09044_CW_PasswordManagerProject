QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 crypto

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    accountdirectory.cpp \
    datahandler.cpp \
    main.cpp \
    mainwindow.cpp \
    password.cpp \
    unittest.cpp

HEADERS += \
    account.h \
    accountdirectory.h \
    datahandler.h \
    hashtable.h \
    mainwindow.h \
    password.h \
    unittest.h

FORMS += \
    mainwindow.ui

LIBS += -L$${PATH_QCA_LIB} -lqca

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
