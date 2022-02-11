#ifndef UNITTEST_H
#define UNITTEST_H

#include "password.h"
#include "account.h"
#include "datahandler.h"
#include <QDebug>
#include <QException>

class UnitTest
{
    public:
        UnitTest();
        void password_generation();
        void account_creation();
        void data_handling();

};

#endif // UNITTEST_H
