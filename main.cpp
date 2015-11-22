/*
#include "class.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    creat_database();
    login_window() -> show();
    return a.exec();
}
*/
#include "class.h"
#include "start_moive.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    creat_database();
    start_moive tem_moive;
    tem_moive.work();
    //login_window() -> setWindowOpacity(0);
    login_window() -> show();
    return a.exec();
}

