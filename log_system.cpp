#include "class.h"
#include "user.h"
#include <ctime>
#include <cstdio>
#include <cstring>

int max_id()
{
    int max_id = 0;
    QSqlQuery query;
    query.prepare("select max(id) from log");
    if(!query.exec())
        return 0;
    while(query.next())
        max_id = query.value(0).toInt();
    return max_id;
}

/**
 * @brief add_book_log
 * @param state
 * @param executor
 * @param book
 * !!!!!!!!!!!!!!! All the operations are done by the User opt.  //operator
 * !!!!!!!!!!!!!!! If an admin modifies a book, the opt is his self.
 * state == 0:
        A user (mostly an admin) adds a book to the library.
   state == 1:
        A user (mostly an admin) deletes a book from the library.
   state == 2:
        A user (mostly an admin) modifies a book in the library.
   state == 3:
        A user rents a book from the library.
   state == 4:
        A user returns a book to the library.
 */

int add_book_log(int state, User executor, Book book, User opt)
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);

    time_t t = time(0);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y/%m/%d %X, ", localtime(&t));

    QString TM = "";
    for (int i = 0; i != strlen(tmp); ++i)
        TM += QChar (tmp[i]);

    QString state_str;
    switch (state) {
    case 0:
        state_str = "added a book : ";
        break;
    case 1:
        state_str = "deleted a book : ";
        break;
    case 2:
        state_str = "modifies a book : ";
        break;
    case 3:
        state_str = "lent a book : ";
        break;
    case 4:
        state_str = "returned a book : ";
        break;
    default:
        break;
    }


    QSqlQuery query;
    query.prepare
    (
        "insert into log " "values ( "
        ":id, "
        ":state, "
        ":exe_id, "
        ":exe_name, "
        ":usr_id, "
        ":usr_name, "
        ":opt, "
        ":TM)"
    );

    query.bindValue(":id", max_id() + 1);
    query.bindValue(":state", state_str);
    query.bindValue(":exe_id", executor.id);
    query.bindValue(":exe_name", executor.name);
    query.bindValue(":usr_id", book.id);
    query.bindValue(":usr_name", book.name);
    query.bindValue(":opt", opt.name);
    query.bindValue(":TM", TM);

    if(!query.exec())
        return warning("Add failed", 1);
    else
        return warning("Add succeeded", 0);
}

/**
 * @brief add_user_log
 * @param executor
 * @param user
 * @state :
 *      0 : executor inserts a user
 *      1 : executor deletes a user
 *      2 : executor modifies a user
 */

int add_user_log(int state, User executor, User user)
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);

    time_t t = time(0);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y/%m/%d %X, ", localtime(&t));

    QString TM = "";
    for (int i = 0; i != strlen(tmp); ++i)
        TM += QChar (tmp[i]);

    QString state_str = "";
    switch (state) {
    case 0:
        state_str = "added a user : ";
        break;
    case 1:
        state_str = "deleted a book : ";
        break;
    case 2:
        state_str = "modified a book : ";
        break;
    default:
        break;
    }

    QSqlQuery query;
    query.prepare
    (
        "insert into log " "values ( "
        ":id, "
        ":state, "
        ":exe_id, "
        ":exe_name, "
        ":usr_id, "
        ":usr_name, "
        ":opt, "
        ":TM)"
    );

    query.bindValue(":id", max_id() + 1);
    query.bindValue(":state", state_str);
    query.bindValue(":exe_id", executor.id);
    query.bindValue(":exe_name", executor.name);
    query.bindValue(":usr_id", user.id);
    query.bindValue(":usr_name", user.name);
    query.bindValue(":opt", executor.name);
    query.bindValue(":TM", TM);

    if(!query.exec())
        return warning("Add failed", 1);
    else
        return warning("Add succeeded", 0);
}

/**
 * @brief select_log_with_id
 * @param logs
 * @param id
 * "select_log_with_id" returns a vector that contain the logs<QString> that involving User(id).
 */

int select_log_with_usr_id(QVector<QString>& logs, QString id)
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
    query.prepare("select * from log where exe_id like :id");
    query.bindValue(":id", id);
    query.exec();

    logs.clear();

    while (query.next())
    {
        QString log = "";
        log += query.value(7).toString();
        log += query.value(3).toString();
        log += " through ";
        log += query.value(6).toString();
        log += " ";
        log += query.value(1).toString();
        log += query.value(5).toString();
        log += ".";
        logs.push_back(log);
    }
    return 0;
}

int select_log_with_book_id(QVector<QString>& logs, QString id)
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
    query.prepare("select * from log where usr_id like :id");
    query.bindValue(":id", id);
    query.exec();

    logs.clear();

    while (query.next())
    {
        QString log = "";
        log += query.value(7).toString();
        log += query.value(3).toString();
        log += " through ";
        log += query.value(6).toString();
        log += " ";
        log += query.value(1).toString();
        log += query.value(5).toString();
        log += ".";
        logs.push_back(log);
    }
    return 0;
}


/**a
 * @brief select_log_all
 * @param logs
 * "select_log_all" returns a vector that contain the all logs
 */

int select_log_all(QVector<QString>& logs)
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
    query.prepare("select * from log");
    query.exec();

    logs.clear();

    while (query.next())
    {
        QString log = "";
        log += query.value(7).toString();
        log += query.value(3).toString();
        log += " through ";
        log +=  query.value(6).toString();
        log += " ";
        log += query.value(1).toString();
        log += query.value(5).toString();
        log += ".";
        logs.push_back(log);
    }
    return 0;
}
