#include "event_imformation.h"
#include "ui_event_imformation.h"

event_imformation::event_imformation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::event_imformation)
{
    ui->setupUi(this);
}

event_imformation::~event_imformation()
{
    delete ui;
}

void event_imformation::on_add_but_clicked()
{

}

void event_imformation::on_delete_but_clicked()
{

}

void event_imformation::on_search_but_clicked()
{

}
