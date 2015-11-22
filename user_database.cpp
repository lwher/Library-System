#include "class.h"

int user_insert(User user)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare
    (
        "insert into users " "values ( "
        ":id, "
        ":key, "
        ":name, "
        ":email, "
        ":phone, "
        ":level)"
    );
    query.bindValue(":id", user.id);
    query.bindValue(":key", user.key);
    query.bindValue(":name", user.name);
    query.bindValue(":email", user.email);
    query.bindValue(":phone", user.phone);
    query.bindValue(":level", user.level);
    if(!query.exec())
        return warning("Insert fail", 1);
    return warning("Insert success", 0);
}

int user_delete(QString id)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare("delete from users where id = :id");
    query.bindValue(":id", id);
    if (!query.exec())
        return warning("Delete fail", 1);
    return warning("Delete success", 0);
}

int user_modify(User user)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);
    QSqlQuery query;
    query.prepare
    (
        "update users set "
        "key = :key, "
        "name = :name, "
        "email = :email, "
        "phone = :phone, "
        "level = :level "
        "where id = :id"
    );
    query.bindValue(":id", user.id);
    query.bindValue(":key", user.key);
    query.bindValue(":name", user.name);
    query.bindValue(":email", user.email);
    query.bindValue(":phone", user.phone);
    query.bindValue(":level", user.level);
    if (!query.exec())
        return warning("Modify fail", 1);
    return warning("Modify success", 0);
}

int search_user_id(User &user, QString user_id)
{
    if(user_id == "")
        return warning("Please input id", 1);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("can't find data.db!", 2);

    enum type{id, key, name, email, phone, level};
    QSqlQuery query;
    query.prepare("select * from users where id = :id");
    query.bindValue(":id", user_id);
    if(!query.exec())
        return warning("Search id fail", 1);

    while(query.next())
    {
        user.id = query.value(id).toString();
        user.key = query.value(key).toString();
        user.name = query.value(name).toString();
        user.email = query.value(email).toString();
        user.phone = query.value(phone).toString();
        user.level = query.value(level).toInt();
    }

    if(user.id != user_id)
        return warning("Search id fail", 1);
    return warning("Success!", 0);
}

int user_search(QVector<User> &user, QString str, int flag)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return warning("Can't find data.db!", 2);

    User tem;
    user.clear();
    enum type{id, key, name, email, phone, level};

    for(int i = str.size() - 1; i >= 0; i--)
        if(str[i] == QChar(' '))
            str[i] = QChar('%');
    str = "%" + str + "%";
    QSqlQuery query;
    if(flag == id)
    {
        query.prepare("select * from users where id like :id");
        query.bindValue(":id", str);
    }
    if(flag == name)
    {
        query.prepare("select * from users where name like :name");
        query.bindValue(":name", str);
    }
    if(!query.exec())
       return warning("Search fail", 1);
    while (query.next())
    {
        tem.id = query.value(id).toString();
        tem.key = query.value(key).toString();
        tem.name = query.value(name).toString();
        tem.email = query.value(email).toString();
        tem.phone = query.value(phone).toString();
        tem.level = query.value(level).toInt();
        user.push_back(tem);
    }
    return warning("Success", 0);
}
