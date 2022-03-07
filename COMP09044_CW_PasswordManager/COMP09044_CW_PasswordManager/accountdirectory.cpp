#include "accountdirectory.h"

#include <QDebug>

AccountDirectory::AccountDirectory()
{
    AccDirectory = data.readAccountDirectory();
    //AccDirectory.print_table();
}


Account* AccountDirectory::at(int index){
    return AccDirectory.at(index);
}

qint32 AccountDirectory::size(){
    return AccDirectory.size();
}
