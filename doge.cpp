#include "doge.h"
#include "ui_doge.h"

Doge::Doge(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Doge)
{
    ui->setupUi(this);
    this -> setAttribute(Qt::WA_TranslucentBackground, true);//透明
    this -> setWindowFlags(Qt::FramelessWindowHint);
}
void Doge :: doge_warning(QString str)
{
    ui -> doge_success_label -> hide();
    ui -> doge_warning_label -> show();
    show();
    ui -> doge_edit -> setText(str);
}
void Doge :: doge_success(QString str)
{
    ui -> doge_warning_label -> hide();
    ui -> doge_success_label -> show();
    show();
    ui -> doge_edit -> setText(str);
}

Doge::~Doge()
{
    delete ui;
}

void Doge::on_pushButton_clicked()
{
    close();
}
