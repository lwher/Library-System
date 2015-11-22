#include "class.h"

int event_insert(Event event)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare
    (
        "insert into events " "values ( "
        ":id, "
        ":user_id, "
        ":user_name, "
        ":book_id, "
        ":book_name, "
        ":start_time, "
        ":end_time)"
    );
    query.bindValue(":id", get_max_id() + 1);
    query.bindValue(":user_id", event.user_id);
    query.bindValue(":user_name", event.user_name);
    query.bindValue(":book_id", event.book_id);
    query.bindValue(":book_name", event.book_name);
    query.bindValue(":start_time", event.start_time);
    query.bindValue(":end_time", event.end_time);
    event.printf();
    if(!query.exec())
        return warning("Insert fail", 1);
    return warning("Insert success", 0);
}

int event_modify(Event event)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare
    (
        "update events set "
        "user_id = :user_id, "
        "user_name = :user_name, "
        "book_id = :book_id, "
        "book_name = :book_name, "
        "start_time = :start_time, "
        "end_time = :end_time "
        "where id = :id"
    );
    query.bindValue(":id", event.id);
    query.bindValue(":user_id", event.user_id);
    query.bindValue(":user_name", event.user_name);
    query.bindValue(":book_id", event.book_id);
    query.bindValue(":book_name", event.book_name);
    query.bindValue(":start_time", event.start_time);
    query.bindValue(":end_time", event.end_time);
    if (!query.exec())
        return warning("Modify fail", 1);
    return warning("Modify success", 0);
}

int event_delete(int id)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare("delete from events where id = :id");
    query.bindValue(":id", id);
    if (!query.exec())
        return warning("Delete fail", 1);
    return warning("Delete success", 0);
}

int search_event_id(Event &event, QString tem_user_id, QString tem_book_id)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);

    enum type{id, user_id, user_name, book_id, book_name, start_time, end_time};
    QSqlQuery query;
    query.prepare("select * from events where user_id = :user_id and book_id = :book_id");
    query.bindValue(":user_id", tem_user_id);
    query.bindValue(":book_id", tem_book_id);
    if(!query.exec())
        return warning("Search id fail", 1);

    while(query.next())
    {
        event.id = query.value(id).toInt();
        event.user_id = query.value(user_id).toString();
        event.user_name = query.value(user_name).toString();
        event.book_id = query.value(book_id).toString();
        event.book_name = query.value(book_name).toString();
        event.start_time = query.value(start_time).toString();
        event.end_time = query.value(end_time).toString();
    }
    event.printf();
    if(event.user_id != tem_user_id || event.book_id != tem_book_id)
        return warning("Search id fail", 1);
    return warning("Success!", 0);
}

int get_max_id()
{
    int max_id = 0;
    QSqlQuery query;
    query.prepare("select max(id) from events");
    if(!query.exec())
        return 0;
    while(query.next())
        max_id = query.value(0).toInt();
    return max_id;
}

int event_search(QVector<Event> &event, QString str, int flag)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("Can't find data.db!", 2);

    Event tem;
    event.clear();
    enum type{id, user_id, user_name, book_id, book_name, start_time, end_time};

    for(int i = str.size() - 1; i >= 0; i--)
        if(str[i] == QChar(' '))
            str[i] = QChar('%');
    str = "%" + str + "%";

    QSqlQuery query;
    if(flag == user_id)
    {
        query.prepare("select * from events where user_id like :user_id");
        query.bindValue(":user_id", str);
    }
    if(flag == user_name)
    {
        query.prepare("select * from events where user_name like :user_name");
        query.bindValue(":user_name", str);
    }
    if(flag == book_id)
    {
        query.prepare("select * from events where book_id like :book_id");
        query.bindValue(":book_id", str);
    }
    if(flag == book_name)
    {
        query.prepare("select * from events where book_name like :book_name");
        query.bindValue(":book_name", str);
    }
    if(!query.exec())
       return warning("Search fail", 1);
    while(query.next())
    {
        tem.id = query.value(id).toInt();
        tem.user_id = query.value(user_id).toString();
        tem.user_name = query.value(user_name).toString();
        tem.book_id = query.value(book_id).toString();
        tem.book_name = query.value(book_name).toString();
        tem.start_time = query.value(start_time).toString();
        tem.end_time = query.value(end_time).toString();
        event.push_back(tem);
    }
    return warning("Success", 0);
}
