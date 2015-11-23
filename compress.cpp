#include "class.h"
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int compress()
{
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    system("rar.exe a compression.rar data.db ");
    system("del data.db");
    return 0;
}
