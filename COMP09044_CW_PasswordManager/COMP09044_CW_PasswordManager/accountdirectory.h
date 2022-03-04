#ifndef ACCOUNTDIRECTORY_H
#define ACCOUNTDIRECTORY_H

#include "account.h"
#include "hashtable.h"
#include <QString>

class AccountDirectory
{
private:
    HashTable<int, Account*> AccDirectory;

public:
    AccountDirectory();
    void sort_accounts(QString sort_type);
    void search_accounts(QString search_term);
    void new_account();
    void delete_account();
    void modify_account();
    qint32 number_accounts();
};

#endif // ACCOUNTDIRECTORY_H
