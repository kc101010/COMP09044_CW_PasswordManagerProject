#ifndef HASHMAP_H
#define HASHMAP_H

#include <QList>
#include <QString>

class Hashmap
{
    private:
        static const qint32 size = 10;
        QList<QPair<qint32, QString>> map[size];


    public:
        Hashmap();
        qint32 hash(qint32 key);
        bool isEmpty();
        void insert(qint32 key, QString val);
        void remove(qint32 key);
        QString search(qint32 key);

};

#endif // HASHMAP_H
