#include "userdisplay.h"
#include "ui_userdisplay.h"

UserDisplay::UserDisplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserDisplay)
{
    ui->setupUi(this);
}

UserDisplay::~UserDisplay()
{
    delete ui;
}
