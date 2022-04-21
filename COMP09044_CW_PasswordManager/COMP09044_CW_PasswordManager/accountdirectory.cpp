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

//function performs an insertion sort on a given array of integers
QVector<int> AccountDirectory::sort_accounts(QVector<int> arr, int size){

    int j{0}, k{0};

    for(int i{1}; i < size; i++){
        k = arr[i];
        j = i;

        while(j > 0 && arr[j - 1] > k){
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = k;
    }

    return arr;
}

void AccountDirectory::new_account(Account* in){
    data.saveAccount(in);
}

void AccountDirectory::delete_account(Account* in){
    data.deleteAccount(in);
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
