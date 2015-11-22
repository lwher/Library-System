#include "book_display.h"
#include "ui_book_display.h"
#include "class.h"

book_display::book_display(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::book_display)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

void book_display::get_started(QString str)
{
    Book book;
    if(search_book_id(book, str) == 0)
    {
        ui -> id_edit -> setText(book.id);
        ui -> ISBN_edit -> setText(book.ISBN);
        ui -> level_edit -> setText(QString :: number(book.level));
        ui -> name_edit -> setText(book.name);
        ui -> author_edit -> setText(book.author);
        ui -> press_edit -> setText(book.press);
        ui -> intro_edit -> setText(book.intro);
        ui -> total_edit -> setText(QString :: number(book.total));
        ui -> left_edit -> setText(QString :: number(book.left));
    }
}

book_display::~book_display()
{
    delete ui;
}

void book_display::on_exit_but_clicked()
{
    close();
}
