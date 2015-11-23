#include "modify.h"
#include "ui_modify.h"
#include "class.h"
modify::modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

modify::~modify()
{
    delete ui;
}

void modify :: modify_root(User root)
{
    ui -> name_edit -> setText(root.name);
    ui -> phone_edit -> setText(root.phone);
    ui -> email_edit -> setText(root.email);
    show();
}
void modify :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void modify :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void modify :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void modify::on_submit_but_clicked()
{
    User user;

    if(make_password(ui -> original_key_edit -> text()) != root.key)
    {
        doge_warning("Wrong key");
        return;
    }

    if(ui -> key_edit -> text() != ui -> confirm_edit -> text())
    {
        doge_warning("Two password is not the same");
        return;
    }

    if(ui -> key_edit -> text() == "")
    {
        doge_warning("Please input the new key");
        return;
    }

    user.id = root.id;
    user.key = make_password(ui -> key_edit -> text());
    user.name = ui -> name_edit -> text();
    user.phone = ui -> phone_edit -> text();
    user.email = ui -> email_edit -> text();
    if((ui -> admin_edit -> text()) == admin_key)
    {
        user.level = std :: max(root.level, 1);
    }
    else
    {
        user.level = root.level;
    }
    user_modify(user);
    if(root.level == 0 && user.level > 0)
    {
        book_window() -> check_root();
        book_window() -> close();
        event_window() -> show();
    }
    root = user;
    doge_success("modify success");
    close();
}

void modify::on_exit_but_clicked()
{
    close();
}
