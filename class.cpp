#include "class.h"
using namespace std;

QString admin_key = "dogeisgood";

User root;

login* login_window(){ static login tem; return &tem;}

modify* modify_window(){ static modify tem; return &tem;}

regist* regist_window(){ static regist tem; return &tem;}

user_information* user_window(){ static user_information tem; return &tem;}

book_information* book_window(){ static book_information tem; return &tem;}

event_information* event_window(){ static event_information tem; return &tem;}

user_display* user_display_window(){ static user_display tem; return &tem;}

book_display* book_display_window(){ static book_display tem; return &tem;}

log_display* log_display_window(){ static log_display tem; return &tem;}

Borrow_book* borrow_window(){ static Borrow_book tem; return &tem;}
void close_all()
{
    //compress();
    login_window() -> close();
    modify_window() -> close();
    regist_window() -> close();
    user_window() -> close();
    book_window() -> close();
    event_window() -> close();
    user_display_window() -> close();
    book_display_window() -> close();
    log_display_window() -> close();
}

void close_window()
{
    login_window() -> close();
    modify_window() -> close();
    regist_window() -> close();
    user_window() -> close();
    book_window() -> close();
    event_window() -> close();
    user_display_window() -> close();
    book_display_window() -> close();
    log_display_window() -> close();
}

bool is_num(QString str) { bool ok; str.toInt(&ok); return ok;}

QString get_time()
{
    QDateTime time = QDateTime::currentDateTime();
    return time.toString("yyyy-MM-dd hh:mm:ss");
}

int warning(QString str, int tem)
{
    //QMessageBox::warning(NULL, "warning", str, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    //qDebug() << str;
    return tem;
}

void doge_warning(QString str)
{
    static Doge tem;
    tem.doge_warning(str);
}
void doge_success(QString str)
{
    static Doge tem;
    tem.doge_success(str);
}

bool create_database()
{
    //decompress();
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    if(!db.open())
        return false;
    QSqlQuery query;

    query.exec
    (
        "create table if not exists books( "
        "id varchar primary key, "
        "ISBN varchar, "
        "level int, "
        "name varchar, "
        "author varchar, "
        "press varchar, "
        "intro varchar, "
        "total int, "
        "left int)"
    );

    query.exec
    (
        "create table if not exists users ( "
        "id varchar primary key, "
        "key varchar, "
        "name varchar, "
        "email varchar, "
        "phone varchar, "
        "level int)"
    );

    query.exec
    (
        "create table if not exists events ( "
        "id int primary key, "
        "user_id varchar, "
        "user_name varchar, "
        "book_id varchar, "
        "book_name varchar, "
        "start_time varchar, "
        "end_time varchar)"
    );
    query.exec
    (
        "create table if not exists log ( "
        "id int primary key, "
        "state varchar, "
        "exe_id varchar, "
        "exe_name varchar, "
        "usr_id varchar, "
        "usr_name varchar, "
        "opt varchar, "
        "TM varchar)"
    );

    // add administrator
    User admin;
    if(search_user_id(admin, "doge") == 1)
    {
        admin.id = "doge";
        admin.key = make_password("doge");
        admin.email = "doge_biu_biu_boom@sjtu.edu.cn";
        admin.name = "doge";
        admin.phone = "call me doge";
        admin.level = 2;
        user_insert(admin);
    }
    return true;
}

