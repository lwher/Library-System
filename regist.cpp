#include "regist.h"
#include "ui_regist.h"
#include "class.h"
regist::regist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground, true);
//    this->setAttribute(Qt::WA_TranslucentBackground, true);
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

}

void regist::on_exit_but_clicked()
{
    close();
}
