#include "class.h"
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int decompress()
{
    system("rar.exe e compression.rar");
    system("del compression.rar");
    return 0;
}
