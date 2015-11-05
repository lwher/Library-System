#include "class.h"
#include <QDateTime>

using namespace std;

unsigned long long Book :: id_cnt = 0;
unsigned long long Event :: id_cnt = 0;

QString get_time()
{
    QDateTime time = QDateTime::currentDateTime();
    return time.toString("yyyy-MM-dd hh:mm:ss");
}

bool is_num(QString str)
{
    bool ok;
    str.toInt(&ok);
    return ok;
}
