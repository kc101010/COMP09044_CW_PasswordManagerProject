/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - AccountDirectory header/definition
 * Class uses a hashtable to hold user Accounts from Database
*/

#ifndef ACCOUNTDIRECTORY_H
#define ACCOUNTDIRECTORY_H

#include "account.h"
#include "datahandler.h"
#include "hashtable.h"

#include <QString>
#include <QDebug>


class AccountDirectory
{
private:
    HashTable<int, Account*> AccDirectory;
    DataHandler data;

public:
    AccountDirectory();
    void sort_accounts(Account* A[] , int size);
    void search_accounts(QString search_term);
    void new_account(Account* in);
    void delete_account();
    void modify_account();
    void refresh_list();
    Account* at(int index);
    qint32 size();

};

#endif // ACCOUNTDIRECTORY_H
