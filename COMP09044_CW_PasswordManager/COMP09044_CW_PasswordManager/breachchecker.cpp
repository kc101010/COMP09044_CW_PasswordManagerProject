#include "breachchecker.h"

BreachChecker::BreachChecker(Account set)
{
    set_account_to_check(set);
}

QString BreachChecker::check_if_breached(){
    return "breached";
}

Account BreachChecker::get_account_to_check(){
    return *Account_To_Check;
}

void BreachChecker::set_account_to_check(Account set){
    Account_To_Check = &set;
}
