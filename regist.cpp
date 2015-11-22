#include "regist.h"
#include "ui_regist.h"
#include "class.h"
regist::regist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regist)
{

    ui->setupUi(this);
//    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
//    setWindowFlags(Qt::FramelessWindowHint);
}

regist::~regist()
{
    delete ui;
}

void regist::clear()
{

}

void regist::on_submit_but_clicked()
{
    User user, tem;
    if(ui -> key_edit -> text() != ui -> confirm_edit -> text())
    {
        warning("Two password is not the same");
        return;
    }
    user.id = ui -> id_edit -> text();
    user.key = make_password(ui -> key_edit -> text());
    user.name = ui -> name_edit -> text();
    user.phone = ui -> phone_edit -> text();
    user.email = ui -> email_edit -> text();
    user.level = (ui -> admin_edit -> text()) == admin_key;
    if(search_user_id(tem, user.id) == 0)
        warning("Id exist");
    else
    {
        warning("Success");
        user_insert(user);
        close();
    }
}

void regist::on_exit_but_clicked()
{
    close();
}
