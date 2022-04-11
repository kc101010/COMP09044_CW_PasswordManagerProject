/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - AccountDirectory class
 * Class uses a hashtable to hold user Accounts from Database
*/

#include "accountdirectory.h"

AccountDirectory::AccountDirectory()
{
    this->refresh_list();
    //AccDirectory.print_table();
}

void AccountDirectory::sort_accounts(Account* A[] , int size){

    int i, j;
    Account* v;

    for(i = 2; i <= size; i++){
        v = A[i];
        j = i;

        while(A[j - 1]->get_date_created() > v->get_date_created()){
            A[j] = A[j - 1];
            j--;
        }

        A[j] = v;
    }


}

void AccountDirectory::new_account(Account* in){
    data.saveAccount(in);
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
