#include "modify.h"
#include "ui_modify.h"
#include "class.h"
modify::modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify)
{
    ui->setupUi(this);
//    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
//    setWindowFlags(Qt::FramelessWindowHint);
}

modify::~modify()
{
    delete ui;
}

void modify::on_submit_but_clicked()
{
    User user;

    if(make_password(ui -> original_key_edit -> text()) != root.key)
    {
        warning("Wrong key");
        return;
    }

    if(ui -> key_edit -> text() != ui -> confirm_edit -> text())
    {
        warning("Two password is not the same");
        return;
    }

    if(ui -> key_edit -> text() == "")
    {
        warning("Please input the newkey");
        return;
    }

    user.id = root.id;
    user.key = make_password(ui -> key_edit -> text());
    user.name = ui -> name_edit -> text();
    user.phone = ui -> phone_edit -> text();
    user.email = ui -> email_edit -> text();
    if((ui -> admin_edit -> text()) == admin_key)
    {
        user.level = 1;
    }
    else
    {
        user.level = root.level;
    }
    user_modify(user);
    root = user;
}

void modify::on_exit_but_clicked()
{
    close();
}
