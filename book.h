#ifndef BOOK
#define BOOK
#include <QDebug>
class Book
{
public :
    QString id, name, author, press, intro,IBSN;
    int total, left, level;
    void printf()
    {
        qDebug() << "Id :" << id;
        qDebug() << "IBSN :" << IBSN;
        qDebug() << "level :" << level;
        qDebug() << "Nmae :" << name;
        qDebug() << "Author :" << author;
        qDebug() << "Press :" << press;
        qDebug() << "Intro :" << intro;
        qDebug() << "Total :" << total;
        qDebug() << "Left :" << left;
    }
};

#endif // BOOK

