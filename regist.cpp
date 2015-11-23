#include "regist.h"
#include "ui_regist.h"
#include "class.h"
regist::regist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regist)
{

    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

regist::~regist()
{
    delete ui;
}

void regist::clear()
{

}
void regist :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void regist :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void regist :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void regist::on_submit_but_clicked()
{
    User user, tem;
    if(ui -> id_edit -> text() == "")
    {
        doge_warning("Please input the ID");
        return;
    }
    if(ui -> key_edit -> text() == "")
    {
        doge_warning("Please input the key");
        return;
    }
    if(ui -> key_edit -> text() != ui -> confirm_edit -> text())
    {
        doge_warning("Two password is not the same");
        return;
    }
    user.id = ui -> id_edit -> text();
    user.key = make_password(ui -> key_edit -> text());
    user.name = ui -> name_edit -> text();
    user.phone = ui -> phone_edit -> text();
    user.email = ui -> email_edit -> text();
    user.level = (ui -> admin_edit -> text()) == admin_key;
    if(search_user_id(tem, user.id) == 0)
        doge_warning("Id exist");
    else
    {
        doge_success("Success");
        user_insert(user);
        close();
    }
}

void regist::on_exit_but_clicked()
{
    close();
}
