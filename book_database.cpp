#include "class.h"

int book_insert(Book book)
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");

    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare
    (
        "insert into books " "values ( "
        ":id, "
        ":ISBN, "
        ":level, "
        ":name, "
        ":author, "
        ":press, "
        ":intro, "
        ":total, "
        ":left)"
    );
    query.bindValue(":id", book.id);
    query.bindValue(":ISBN", book.ISBN);
    query.bindValue(":level", book.level);
    query.bindValue(":name", book.name);
    query.bindValue(":author", book.author);
    query.bindValue(":press", book.press);
    query.bindValue(":intro", book.intro);
    query.bindValue(":total", book.total);
    query.bindValue(":left", book.left);
    if(!query.exec())
        return warning("Insert fail", 1);
    return warning("Insert success", 0);
}

int book_delete(QString id)
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare("delete from books where id = :id");
    query.bindValue(":id", id);
    if (!query.exec())
        return warning("Delete fail", 1);
    return warning("Delete success", 0);
}

int book_modify(Book book)
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare
    (
        "update books set "
        "ISBN = :ISBN, "
        "level = :level, "
        "name = :name, "
        "author = :author, "
        "press = :press, "
        "intro = :intro, "
        "total = :total, "
        "left = :left "
        "where id = :id"
    );
    query.bindValue(":id", book.id);
    query.bindValue(":ISBN", book.ISBN);
    query.bindValue(":level", book.level);
    query.bindValue(":name", book.name);
    query.bindValue(":author", book.author);
    query.bindValue(":press", book.press);
    query.bindValue(":intro", book.intro);
    query.bindValue(":total", book.total);
    query.bindValue(":left", book.left);
    if (!query.exec())
        return warning("Modify fail", 1);
    return warning("Modify success", 0);
}

int search_book_id(Book &book, QString book_id)
{
    if(book_id == "")
        return warning("Please input id", 1);
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);

    enum type{id, ISBN, level, name, author, press, intro, total,left};
    QSqlQuery query;
    query.prepare("select * from books where id = :id");
    query.bindValue(":id", book_id);
    if(!query.exec())
        return warning("Search id fail", 1);

    while(query.next())
    {
        book.id = query.value(id).toString();
        book.ISBN = query.value(ISBN).toString();
        book.level = query.value(level).toInt();
        book.name = query.value(name).toString();
        book.author = query.value(author).toString();
        book.press = query.value(press).toString();
        book.intro = query.value(intro).toString();
        book.total = query.value(total).toInt();
        book.left = query.value(left).toInt();
    }
    if(book.id != book_id)
        return warning("Search id fail", 1);
    return warning("Success!", 0);
}

int book_search(QVector<Book> &book, QString str, int flag)
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("Can't find data.db!", 2);

    Book tem;
    book.clear();
    enum type{id, ISBN, level, name, author, press, intro, total,left};

    for(int i = str.size() - 1; i >= 0; i--)
        if(str[i] == QChar(' '))
            str[i] = QChar('%');
    str = "%" + str + "%";

    QSqlQuery query;
    if(flag == id)
    {
        query.prepare("select * from books where id like :id");
        query.bindValue(":id", str);
    }
    if(flag == name)
    {
        query.prepare("select * from books where name like :name");
        query.bindValue(":name", str);
    }
    if(flag == author)
    {
        query.prepare("select * from books where author like :author");
        query.bindValue(":author", str);
    }
    if(flag == press)
    {
        query.prepare("select * from books where press like :press");
        query.bindValue(":press", str);
    }
    if(!query.exec())
       return warning("Search fail", 1);
    while (query.next())
    {
        tem.id = query.value(id).toString();
        tem.ISBN = query.value(ISBN).toString();
        tem.level = query.value(level).toInt();
        tem.name = query.value(name).toString();
        tem.author = query.value(author).toString();
        tem.press = query.value(press).toString();
        tem.intro = query.value(intro).toString();
        tem.total = query.value(total).toInt();
        tem.left = query.value(left).toInt();
        book.push_back(tem);
    }
    return warning("Success", 0);
}
