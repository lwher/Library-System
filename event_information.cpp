#include "event_information.h"
#include "ui_event_information.h"
#include "class.h"
event_information::event_information(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::event_information)
{
    ui->setupUi(this);
}

event_information::~event_information()
{
    delete ui;
}

void event_information::on_insert_but_clicked()
{
    QString user_id = ui -> user_id_edit -> text();
    QString book_id = ui -> book_id_edit -> text();
    User user;
    Book book;
    if(search_user_id(user, user_id) == 1)
    {
        warning("Please input correct user_id");
        return;
    }
    if(search_book_id(book, book_id) == 1)
    {
        warning("Please input correct book_id");
        return;
    }
    if(book.left == 0)
    {
        warning("No such book left");
        return;
    }
    Event tem;
    tem.user_id = user.id;
    tem.user_name = user.name;
    tem.book_id = book.id;
    tem.book_name = book.name;
    tem.start_time = get_time();
    tem.end_time = "Still not return";
    tem.printf();
    if(event_insert(tem) == 0)
    {
        warning("Success");
        --book.left;
        book_modify(book);
    }
    else
        warning("event insert fail");
}

void event_information::on_return_but_clicked()
{
    int id = (ui -> id_edit -> text()).toInt();
    if(!id)
    {
        warning("Please input correct number");
        return ;
    }
    Event tem;
    if(search_event_id(tem, id) == 0)
    {
        QString book_id = tem.book_id;
        Book book;
        search_book_id(book, book_id);
        ++book.left;
        book_modify(book);
        tem.end_time = get_time();
        //event_modify(tem);
        event_delete(id);
    }
}

void event_information::on_search_but_clicked()
{
    enum type{id, user_id, user_name, book_id, book_name, start_time, end_time};
    int flag;
    if(ui -> user_id_but -> isChecked())
        flag = user_id;
    if(ui -> user_name_but -> isChecked())
        flag = user_name;
    if(ui -> book_id_but -> isChecked())
        flag = book_id;
    if(ui -> book_name_but -> isChecked())
        flag = book_name;
    QVector<Event> event;
    QString str = ui -> search_edit -> text();
    event_search(event, str, flag);
    int cnt;
    while(cnt = ui -> event_table -> rowCount())
        ui -> event_table -> removeRow(cnt - 1);

    for(QVector <Event>  :: iterator it = event.begin(); it != event.end(); ++it)
    {
        //(*it).printf();
        ui -> event_table -> insertRow(cnt);
        ui -> event_table -> setItem(cnt, id, new QTableWidgetItem(QString :: number(it -> id, 10)));
        ui -> event_table -> setItem(cnt, user_id, new QTableWidgetItem(it -> user_id));
        ui -> event_table -> setItem(cnt, user_name, new QTableWidgetItem(it -> user_name));
        ui -> event_table -> setItem(cnt, book_id, new QTableWidgetItem(it -> book_id));
        ui -> event_table -> setItem(cnt, book_name, new QTableWidgetItem(it -> book_name));
        ui -> event_table -> setItem(cnt, start_time, new QTableWidgetItem(it -> start_time));
        ui -> event_table -> setItem(cnt, end_time, new QTableWidgetItem(it -> end_time));
        ++cnt;
    }
}

void event_information::on_user_id_search_but_clicked()
{
    QString str = ui -> user_id_edit -> text();
    user_display_window() -> get_started(str);
    user_display_window() -> show();
}

void event_information::on_book_id_search_but_clicked()
{
    QString str = ui -> book_id_edit -> text();
    book_display_window() -> get_started(str);
    book_display_window() -> show();
}

void event_information::on_exit_but_clicked()
{
    modify_window() -> close();
    user_window() -> close();
    book_window() -> close();
    close();
}

void event_information::on_book_info_but_clicked()
{
    book_window() -> show();
}


void event_information::on_user_info_but_clicked()
{
    user_window() -> show();
}

void event_information::on_modify_but_clicked()
{
     modify_window() -> show();
}

