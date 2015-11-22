#include "class.h"
#include "start_moive.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    creat_database();
    start_moive tem;
    tem.work();
    login_window() -> show();
    return a.exec();
}
