#ifndef CLASS
#define CLASS
#include <QString>
#include <QVector>
#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QMessageBox>
#include <algorithm>
#include <string>
#include <map>
#include <QTimer>
using namespace std;

class User
{
private :
    string make_passwork(string);
public :
    QString id, key, email, QQ, phone;
    int level;
    User(QString _id, QString _key, int _level = 0)
    {
        id = _id;
        key = QString::fromStdString(this -> make_passwork(_key.toStdString()));
        level = _level;
    }
};

class Book
{
private :
    static unsigned long long id_cnt;
public :
    unsigned long long id;
    QString name, author, press;
    int total, left;
    Book(QString _name, int _total)
    {
        id = id_cnt++;
        name = _name;
        left = total = _total;
    }
};

class Event
{
private :
    static unsigned long long id_cnt;
public :
    unsigned long long id, book_id;
    QString user_id, start_time, end_time;
};

extern QString get_time();
extern bool is_num();

#endif // CLASS
