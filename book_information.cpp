#include "book_information.h"
#include "book_database.h"
#include "ui_book_information.h"
#include "class.h"

book_information::book_information(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::book_information)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

book_information::~book_information()
{
    delete ui;
}

void book_information::ButtonEnable()
{
    ui -> modify_but -> show();//setEnabled(true);
    ui -> insert_but -> show();//setEnabled(true);
    ui -> delete_but -> show();//setEnabled(true);
    ui -> modify_info_but -> hide();
}

void book_information::ButtonDisable()
{
    ui -> modify_but -> hide();
    ui -> insert_but -> hide();//setEnabled(false);
    ui -> delete_but -> hide();//setEnabled(false);
    ui -> modify_info_but -> show();
}

void book_information::SetSearchText(QString Str)
{
    ui -> search_edit ->setText(Str);
}

void book_information::on_search_but_clicked()
{
    QString str = ui -> search_edit -> text();
    enum type{id, ISBN, level, name, author, press, intro, total,left};
    int flag, cnt;
    if(ui -> name_but ->isChecked()) flag = name;
    if(ui -> author_but ->isChecked()) flag = author;
    if(ui -> press_but ->isChecked()) flag = press;
    QVector <Book> book;
    book_search(book, str, flag);
    while(cnt = ui -> book_table -> rowCount())
        ui -> book_table -> removeRow(cnt - 1);

    for(QVector <Book>  :: iterator it = book.begin(); it != book.end(); ++it)
    {
        //(*it).printf();
        ui -> book_table -> insertRow(cnt);
        ui -> book_table -> setItem(cnt, id, new QTableWidgetItem(it -> id));
        ui -> book_table -> setItem(cnt, ISBN, new QTableWidgetItem(it -> ISBN));
        ui -> book_table -> setItem(cnt, level, new QTableWidgetItem(QString::number(it -> level, 10)));
        ui -> book_table -> setItem(cnt, name, new QTableWidgetItem(it -> name));
        ui -> book_table -> setItem(cnt, author, new QTableWidgetItem(it -> author));
        ui -> book_table -> setItem(cnt, press, new QTableWidgetItem(it -> press));
        ui -> book_table -> setItem(cnt, total, new QTableWidgetItem(QString::number(it -> total, 10)));
        ui -> book_table -> setItem(cnt, left, new QTableWidgetItem(QString::number(it -> left, 10)));
        ++cnt;
    }
    //ui -> book_table -> removeRow(3);
}

bool book_information::get_book(Book &book)
{
    if(!is_num(ui -> total_edit -> text()))
    {
        doge_warning("Pealse input number for total");
        return 0;
    }
    if(!is_num(ui -> left_edit -> text()))
    {
        doge_warning("Pealse input number for left");
        return 0;
    }
    book.id = ui -> id_edit -> text();
    book.ISBN = ui -> ISBN_edit -> text();
    book.level = (ui -> level_edit -> text()).toInt();
    book.name = ui -> name_edit -> text();
    book.author = ui -> author_edit -> text();
    book.press = ui -> press_edit -> text();
    book.intro = ui -> intro_edit -> toPlainText();
    book.total = (ui -> total_edit -> text()).toInt();
    book.left = (ui -> left_edit -> text()).toInt();
    return 1;
}

void book_information::on_modify_but_clicked()
{
    Book book, tem;
    if(get_book(book))
    {
        int flag = search_book_id(tem,book.id);
        if(flag == 0)
        {
            book_modify(book);
            add_book_log(2, root, book, root);
            doge_success("Modify success");
        }
        if(flag == 1)
        {
            doge_warning("Can't find this ID");
        }
    }
}

void book_information::on_delete_but_clicked()
{
    QString id = ui -> id_edit -> text();
    Book tem;
    int flag = search_book_id(tem, id);
    if(flag == 0)
    {
        book_delete(id);
        add_book_log(1, root, tem, root);
        doge_success("Delete success");
    }
    if(flag == 1)
    {
        doge_warning("Can't find this ID");
    }

}

void book_information::on_exit_but_clicked()
{
    close();
}

void book_information::on_insert_but_clicked()
{
    Book book, tem;
    if(get_book(book))
    {
        int flag = search_book_id(tem,book.id);
        if(flag == 1)
        {
            book_insert(book);
            add_book_log(0, root, book, root);
            doge_success("Insert success");
        }
        if(flag == 0)
        {
            doge_warning("ID exist");
        }
    }
}

void book_information::on_search_id_clicked()
{
    QString id = ui -> search_id_edit -> text();
    Book book;
    if(search_book_id(book, id) == 0)
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

void book_information::on_modify_info_but_clicked()
{
    modify_window() -> show();
}
