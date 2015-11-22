#include "doge_success.h"
#include "ui_doge_success.h"

doge_success::doge_success(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doge_success)
{
    ui->setupUi(this);
}

doge_success::~doge_success()
{
    delete ui;
}
