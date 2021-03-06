QT += core gui sql widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 crypto

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    accountdirectory.cpp \
    breachchecker.cpp \
    datahandler.cpp \
    inputvalexcept.cpp \
    main.cpp \
    mainwindow.cpp \
    newaccount.cpp \
    password.cpp \
    sort.cpp \
    unittest.cpp

HEADERS += \
    account.h \
    accountdirectory.h \
    breachchecker.h \
    datahandler.h \
    hashtable.h \
    inputvalexcept.h \
    mainwindow.h \
    newaccount.h \
    password.h \
    sort.h \
    unittest.h

FORMS += \
    mainwindow.ui \
    newaccount.ui \
    sort.ui

LIBS += -L$${PATH_QCA_LIB} -lqca

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
