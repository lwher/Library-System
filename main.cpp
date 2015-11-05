#include "class.h"
#include "login.h"
#include "regist.h"
#include "book_imformation.h"
#include "user_imformation.h"
#include "event_imformation.h"
#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //input_user(), input_book(), input_event();
    login login_window;
    login_window.show();
//    book_imformation book_window;
//    book_window.show();
//    user_imformation user_window;
//    user_window.show();
//    timer = new QTimer();
    return a.exec();
}
/*
#include <QCoreApplication>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("easybook-3313b0");
    db.setDatabaseName("qtDB.db");
    db.setUserName("zhouhejun");
    db.setPassword("123456");
    db.open();
}
*/
