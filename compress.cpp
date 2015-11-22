#include "class.h"
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int compress()
{
    char file_name[50] = "compression.rar";
    char rar_name[50] = "data.db";
    char order[50] = {"rar.exe a "};

    strcat(order, file_name);
    strcat(order, " ");
    strcat(order, rar_name);
    strcat(order, " ");
    system(order);
    system("del data.db");
    return 0;
}
