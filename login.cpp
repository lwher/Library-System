#include "ui_login.h"
#include "class.h"
#include "login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QMovie *movie_of_books;
    movie_of_books = new QMovie( "./4.gif" );
    ui -> label_ -> setMovie( movie_of_books );
    movie_of_books -> start();
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

login::~login()
{
    delete ui;
}

void login::on_log_but_clicked()
{
    User tem;
    if(search_user_id(tem, ui -> id_edit -> text()) == 0)
    {
        if(make_password(ui -> key_edit -> text()) != tem.key)
            warning("Wrong key");
        else
        {
            root = tem ;
            //add_user_log(2,tem,tem);
            //qDebug() << "addlog" << tem.id << endl;
            if(root.level > 0)
            {
                book_window() -> ButtonEnable();
                event_window() -> show();
            }
            else
            {
                book_window() -> ButtonDisable();
                book_window() -> show();
            }
            close();
        }
    }
    else
        warning("Id doesn't exist");
}

void login::on_exit_but_clicked()
{
   compress();
   close();
}

void login::on_reg_but_clicked()
{
    regist_window() -> show();
}
