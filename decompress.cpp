#include "class.h"
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int decompress()
{
    char rar_name[50] = "compression.rar";
    char order[50] = {"rar.exe e "};
    strcat(order, rar_name);
    system(order);
    return 0;
}
