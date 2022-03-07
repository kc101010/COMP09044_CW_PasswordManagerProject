#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <QDebug>
#include <QVector>
#include <QString>


template <typename Key, typename Value> class HashTable
{

private:

    const static qint32 max_size = 100;

    QVector<Value> vals;
    QVector<Key> keys;

    int hash(Key key){
        return key % max_size;
    }


public:
    HashTable(){
        keys.resize(max_size);
        vals.resize(max_size);
    }

    void insert(Key key, Value val){
        int i;

        for(i = hash(key); keys.at(i) != NULL; i++){
            if(keys.at(i) == key) break;
        }

        keys.insert(i, key);
        vals.insert(i, val);

    }

    void remove(Key key){
        for(int i {hash(key)};; i++){
            if(keys.at(i) == key){
                keys.remove(i);
                vals.remove(i);
                return;
             }
        }
    }

    Value search(Key key){
        for(int i {hash(key)}; keys.at(i) != NULL; i++){
            if(key == keys.at(i)) return vals.at(i);
        }
    }

    Value at(int index){
       return vals.at(index);
    }

    bool is_empty(){
        bool state = true;

        for(int i{0}; i < keys.size(); i++){
            if(vals.at(i) && keys.at(i)){
               state = false;
            }
        }

        return state;
    }

    qint32 size(){
        return max_size;
    }
};

#endif // HASHTABLE_H
