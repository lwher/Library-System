#include "user_display.h"
#include "ui_user_display.h"
#include "class.h"

user_display::user_display(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_display)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

user_display::~user_display()
{
    delete ui;
}

void user_display :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void user_display :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void user_display :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void user_display::get_started(QString Str)
{
    User user;
    if(search_user_id(user, Str) == 0)
    {
        ui -> id_edit -> setText(user.id);
        ui -> name_edit -> setText(user.name);
        ui -> email_edit -> setText(user.email);
        ui -> phone_edit -> setText(user.phone);
    }
}

void user_display::on_exit_but_clicked()
{
    close();
}
