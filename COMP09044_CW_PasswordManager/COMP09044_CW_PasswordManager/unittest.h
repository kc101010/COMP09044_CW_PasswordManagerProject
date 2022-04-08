/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - UnitTest header/definition
 * Class used to test features during development stage
*/

#ifndef UNITTEST_H
#define UNITTEST_H

#include "password.h"
#include "account.h"
#include "accountdirectory.h"
#include "datahandler.h"
#include "hashtable.h"
#include <QDebug>
#include <QException>

class UnitTest
{
    public:
        UnitTest();
        void password_generation();
        void account_creation();
        void data_handling();
        void hash_table();
        void account_directory();

};

#endif // UNITTEST_H
