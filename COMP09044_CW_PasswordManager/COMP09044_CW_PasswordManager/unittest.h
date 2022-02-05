#ifndef UNITTEST_H
#define UNITTEST_H

#include "password.h"
#include "account.h"
#include <QDebug>
#include <QException>

class UnitTest
{
    public:
        UnitTest();
        void password_generation();
        void account_creation();

};

#endif // UNITTEST_H
