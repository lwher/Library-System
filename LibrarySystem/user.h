#ifndef USER
#define USER
#include <QDebug>
class User
{
public :
    QString id, key, name, email, phone;
    int level;
    void printf()
    {
        qDebug() << "Id :" << id;
        qDebug() << "Key :" << key;
        qDebug() << "Name :" << name;
        qDebug() << "Email :" << email;
        qDebug() << "Phone :" << phone;
        qDebug() << "Level :" << level;
    }

};

#endif // USER

