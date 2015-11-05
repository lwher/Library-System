#include "common_user.h"
#include "ui_common_user.h"

common_user::common_user(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::common_user)
{
    ui->setupUi(this);
}

common_user::~common_user()
{
    delete ui;
}
