#include "hashmap.h"
#include "account.h"



Hashmap::Hashmap()
{

}

int Hashmap::hash(qint32 key){
    //return a key of modulo of key and size plus 1
    return (key % size) + 1;
}

bool Hashmap::isEmpty(){
    qint32 total = 0;

    //iterate through lists, add their size to total
    for(qint32 i = 0; i < size; i++) total += map[i].size();

    //if total is 0, map is empty otherwise map is not empty
    if(!total) return true;
    return false;

}

void Hashmap::insert(qint32 key, QString val){
    //hash key for index to insert to
    qint32 hashedKey= hash(key);

    //refer to index in the table, create iterator based on this ref
    auto& index = map[hashedKey];
    auto i = index.begin();
    bool exists = false;


    //iterate table
    for(;i != index.end(); i++ ){
        //if the key exists, note this and replace its value
        if(i->first == key){
            exists = true;
            i->second = val;
            break;
        }

    }

    //if the key doesn't already exist
    if(!exists){
        //create pair and assign values to insert into table
        QPair<qint32, QString> insert;
        insert.first = key;
        insert.second = val;

        //place new values at the end of the table
        map->push_back(insert);
    }
}

