#include "class.h"
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int compress()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data.db");
    db.close();
    db.close();db.close();db.close();db.close();db.close();
    char file_name[50] = "compression.rar";
    char rar_name[50] = "data.db";
    char order[50] = {"rar.exe a "};

    strcat(order, file_name);
    strcat(order, " ");
    strcat(order, rar_name);
    strcat(order, " ");
    system("rar.exe a compression.rar data.db ");

    qDebug() << order;
    //system("del data.db");
    return 0;
}
