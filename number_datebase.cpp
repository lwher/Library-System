#include "class.h"
void get_number()
{
    QSqlQuery query;
    query.exec("select id, name, age FROM people");
}

void update_number()
{

}

