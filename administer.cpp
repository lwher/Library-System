#include "administer.h"
#include "ui_administer.h"

administer::administer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::administer)
{
    ui->setupUi(this);
}

administer::~administer()
{
    delete ui;
}

void administer::on_event_manage_but_clicked()
{
    event_window.show();
}

void administer::on_user_manage_but_clicked()
{

    user_window.show();
}

void administer::on_book_manage_but_clicked()
{

    book_window.show();
}

void administer::on_exit_but_clicked()
{
    event_window.close();
    user_window.close();
    book_window.close();
    close();
}
