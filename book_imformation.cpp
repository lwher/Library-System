#include "book_imformation.h"
#include "class.h"
#include "ui_book_imformation.h"
book_imformation::book_imformation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::book_imformation)
{
    ui->setupUi(this);
}

book_imformation::~book_imformation()
{
    delete ui;
}

void book_imformation::on_search_but_clicked()
{

}

void book_imformation::on_add_book_but_clicked()
{

}

void book_imformation::on_modify_but_clicked()
{

}

void book_imformation::on_delete_but_clicked()
{

}
