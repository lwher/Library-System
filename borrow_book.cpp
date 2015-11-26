#include "borrow_book.h"
#include "ui_borrow_book.h"
#include "class.h"
Borrow_book::Borrow_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Borrow_book)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

Borrow_book::~Borrow_book()
{
    delete ui;
}
void Borrow_book :: work()
{
    QVector<Event> event;
    enum type{id, user_id, user_name, book_id, book_name, start_time, end_time};
    event_search(event, root.id, user_id);
    int cnt;
    while(cnt = ui -> borrow_table -> rowCount())
        ui -> borrow_table -> removeRow(cnt - 1);
    for(QVector <Event>  :: iterator it = event.begin(); it != event.end(); ++it)
    {
        //(*it).printf();
        ui -> borrow_table -> insertRow(cnt);
        ui -> borrow_table -> setItem(cnt, 0, new QTableWidgetItem(it -> book_id));
        ui -> borrow_table -> setItem(cnt, 1, new QTableWidgetItem(it -> book_name));
        ++cnt;
    }
    show();
}

void Borrow_book::on_pushButton_clicked()
{
    close();
}
