#include "user_imformation.h"
#include "ui_user_imformation.h"
#include "class.h"

user_imformation::user_imformation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_imformation)
{
    ui->setupUi(this);
}

user_imformation::~user_imformation()
{
    delete ui;
}

void user_imformation::on_lvlup_but_clicked()
{

}

void user_imformation::on_modify_but_clicked()
{

}

void user_imformation::on_delete_but_clicked()
{

}

void user_imformation::on_search_but_clicked()
{

}
