#ifndef EVENT
#define EVENT
#include "user.h"
#include "book.h"
class Event
{
private :
    static int id_cnt;
public :
    int id;
    QString user_id, user_name, book_id, book_name;
    QString start_time, end_time;

    int get_id() { return ++id_cnt;}

    void printf()
    {
        qDebug() << "Id :" << id;
        qDebug() << "user_id :" << user_id;
        qDebug() << "user_name :" << user_name;
        qDebug() << "book_id :" << book_id;
        qDebug() << "book_name :" << book_name;
        qDebug() << "start_time :" << start_time;
        qDebug() << "end_time :" << end_time;
    }
};

#endif // EVENT

