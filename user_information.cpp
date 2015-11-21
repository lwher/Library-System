#include "user_information.h"
#include "ui_user_information.h"
#include "class.h"

user_information::user_information(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_information)
{
    ui->setupUi(this);
}

user_information::~user_information()
{
    delete ui;
}

bool user_information::get_user(User &user)
{
    if(!is_num(ui -> level_edit -> text()))
    {
        warning("Pealse input number for level");
        return 0;
    }
    user.id = ui -> id_edit -> text();
    user.key = make_password(ui -> key_edit -> text());
    user.name = ui -> name_edit -> text();
    user.email = ui -> email_edit -> text();
    user.phone = ui -> phone_edit -> text();
    user.level = (ui -> level_edit -> text()).toInt();
    return 1;
}

void user_information::on_modify_but_clicked()
{
    User user, tem;
    if(get_user(user))
        if(search_user_id(tem, user.id) == 0)
        {
            if(root.level <= tem.level || root.level <= user.level)
            {
                warning("Permission Denied");
                return;
            }
            user_modify(user);
        }
}

void user_information::on_delete_but_clicked()
{
    QString id = ui -> id_edit -> text();
    User tem;

    if(search_user_id(tem, id) == 0)
    {
        if(root.level <= tem.level)
        {
            warning("Permission Denied");
            return;
        }
        user_delete(id);
    }

}

void user_information::on_exit_but_clicked()
{
    close();
}

void user_information::on_insert_but_clicked()
{
    User user, tem;
    if(get_user(user))
        if(search_user_id(tem, user.id) == 1)
        {
            if(root.level <= user.level)
            {
                warning("Permission Denied");
                return;
            }
            user_insert(user);
        }
}

void user_information::on_search_id_but_clicked()
{
    QString id = ui -> search_id_edit -> text();
    User user;
    if(search_user_id(user, id) == 0)
    {
        ui -> id_edit -> setText(user.id);
        ui -> key_edit -> setText("");
        ui -> name_edit -> setText(user.name);
        ui -> email_edit -> setText(user.email);
        ui -> phone_edit -> setText(user.phone);
        ui -> level_edit -> setText(QString :: number(user.level));
    }
}

void user_information::on_search_but_clicked()
{

    QString str = ui -> search_edit -> text();
    int flag, cnt;
    enum type{id, key, name, email, phone, level};
    flag = name;
    QVector <User> user;
    user_search(user, str, flag);
    while(cnt = ui -> user_table -> rowCount())
        ui -> user_table -> removeRow(cnt - 1);

    for(QVector <User>  :: iterator it = user.begin(); it != user.end(); ++it)
    {
        //(*it).printf();
        ui -> user_table -> insertRow(cnt);
        ui -> user_table -> setItem(cnt, 0, new QTableWidgetItem(it -> id));
        ui -> user_table -> setItem(cnt, 1, new QTableWidgetItem(it -> name));
        ui -> user_table -> setItem(cnt, 2, new QTableWidgetItem(it -> email));
        ui -> user_table -> setItem(cnt, 3, new QTableWidgetItem(it -> phone));
        ui -> user_table -> setItem(cnt, 4, new QTableWidgetItem(QString::number(it -> level, 10)));
        ++cnt;
    }
    //ui -> book_table -> removeRow(3);

}
