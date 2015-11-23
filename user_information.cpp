#include "user_information.h"
#include "ui_user_information.h"
#include "class.h"

user_information::user_information(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_information)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

user_information::~user_information()
{
    delete ui;
}

bool user_information::get_user(User &user)
{
    if(!is_num(ui -> level_edit -> text()))
    {
        doge_warning("Pealse input number for level");
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
    {
        int flag = search_user_id(tem, user.id);
        if(flag == 0)
        {
            if(user.key == make_password(""))
            {
               user.key = tem.key;
            }

            if(root.level <= tem.level || root.level <= user.level)
            {
                doge_warning("Permission Denied");
                return;
            }
            add_user_log(2, root, user);
            user_modify(user);
            doge_success("Modify Success");
        }
        if(flag == 1)
        {
            doge_warning("Can't find this Id");
        }
    }
}
void user_information :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void user_information :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void user_information :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void user_information::on_delete_but_clicked()
{
    QString id = ui -> id_edit -> text();
    User tem;
    int flag = search_user_id(tem, id);
    if(flag == 0)
    {
        if(root.level <= tem.level)
        {
            doge_warning("Permission Denied");
            return;
        }
        add_user_log(1, root, tem);
        user_delete(id);
        doge_success("Delete success");
    }
    if(flag == 1)
    {
        doge_warning("Can't find this Id");
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
    {
        int flag = search_user_id(tem, user.id);
        if(flag == 1)
        {
            if(ui -> key_edit -> text() == "")
            {
                doge_warning("Please input the key");
                return;
            }
            if(root.level <= user.level)
            {
                doge_warning("Permission Denied");
                return;
            }
            add_user_log(0, root, user);
            user_insert(user);
            doge_success("Insert success");
        }
        if(flag == 0)
        {
            doge_warning("Id exist");
        }
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
        ui -> user_table -> insertRow(cnt);
        ui -> user_table -> setItem(cnt, 0, new QTableWidgetItem(it -> id));
        ui -> user_table -> setItem(cnt, 1, new QTableWidgetItem(it -> name));
        ui -> user_table -> setItem(cnt, 2, new QTableWidgetItem(it -> email));
        ui -> user_table -> setItem(cnt, 3, new QTableWidgetItem(it -> phone));
        ui -> user_table -> setItem(cnt, 4, new QTableWidgetItem(QString::number(it -> level, 10)));
        ++cnt;
    }
}
