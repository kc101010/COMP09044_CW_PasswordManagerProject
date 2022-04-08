/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - AccountDirectory class
 * Class uses a hashtable to hold user Accounts from Database
*/

#include "accountdirectory.h"

#include <QDebug>

AccountDirectory::AccountDirectory()
{
    this->refresh_list();
    //AccDirectory.print_table();
}


void AccountDirectory::refresh_list(){
    AccDirectory = data.readAccountDirectory();
}

Account* AccountDirectory::at(int index){
    return AccDirectory.at(index);
}

qint32 AccountDirectory::size(){
    return AccDirectory.size();
}
