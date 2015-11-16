#include "book_imformation.h"
#include "book_database.h"
#include "ui_book_imformation.h"
#include "class.h"

book_imformation::book_imformation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::book_imformation)
{
    ui->setupUi(this);
    //this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    //setWindowFlags(Qt::FramelessWindowHint);
}

book_imformation::~book_imformation()
{
    delete ui;
}

void book_imformation::on_search_but_clicked()
{
    QString str = ui -> search_edit -> text();
    enum type{id, name, author, press};
    int flag;
    if(ui -> author_but ->isChecked()) flag = author;
    if(ui -> press_but ->isChecked()) flag = press;
    QVector <Book> book;
    book_search(book, str, flag);
    for(QVector <Book>  :: iterator it = book.begin(); it != book.end(); ++it)
    {
        (*it).printf();
    }
}
bool book_imformation::get_book(Book &book)
{
    if(!is_num(ui -> total_edit -> text()))
    {
        warning("Pealse input number for total");
        return 0;
    }
    if(!is_num(ui -> left_edit -> text()))
    {
        warning("Pealse input number for left");
        return 0;
    }
    book.id = ui -> id_edit -> text();
    book.name = ui -> name_edit -> text();
    book.author = ui -> author_edit -> text();
    book.press = ui -> press_edit -> text();
    book.intro = ui -> intro_edit -> toPlainText();
    book.total = (ui -> total_edit -> text()).toInt();
    book.left = (ui -> left_edit -> text()).toInt();
    return 1;
}

void book_imformation::on_modify_but_clicked()
{
    Book book, tem;
    if(get_book(book))
        if(search_book_id(tem,book.id) == 0)
            book_modify(book);
}

void book_imformation::on_delete_but_clicked()
{
    QString id = ui -> id_edit -> text();
    Book tem;
    if(search_book_id(tem, id) == 0) book_delete(id);
}

void book_imformation::on_exit_but_clicked()
{
    close();
}

void book_imformation::on_insert_but_clicked()
{
    Book book, tem;
    if(get_book(book))
        if(search_book_id(tem,book.id) == 1)
            book_insert(book);
}

void book_imformation::on_search_id_clicked()
{
    QString id = ui -> search_id_edit -> text();
    Book book;
    if(search_book_id(book, id) == 0)
    {
        ui -> id_edit -> setText(book.id);
        ui -> name_edit -> setText(book.name);
        ui -> author_edit -> setText(book.author);
        ui -> press_edit -> setText(book.press);
        ui -> intro_edit -> setText(book.intro);
        ui -> total_edit -> setText(QString :: number(book.total));
        ui -> left_edit -> setText(QString :: number(book.left));
    }
}
