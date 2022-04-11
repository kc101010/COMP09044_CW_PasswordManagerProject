#ifndef BREACHCHECKER_H
#define BREACHCHECKER_H

#include "account.h"

class BreachChecker
{
private:
    Account* Account_To_Check;
    QString Result;
public:
    BreachChecker(Account set);
    QString check_if_breached();
    Account get_account_to_check();
    void set_account_to_check(Account set);
};

#endif // BREACHCHECKER_H
