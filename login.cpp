#include "ui_login.h"
#include "class.h"
#include "login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground, true);
}

login::~login()
{
    delete ui;
}

void login::on_log_but_clicked()
{

}

void login::on_exit_but_clicked()
{
    close();
}

void login::on_reg_but_clicked()
{
    regist_window.show();
}
