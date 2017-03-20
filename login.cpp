#include "ui_login.h"
#include "class.h"
#include "login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QMovie *movie_of_books;
    movie_of_books = new QMovie( "../4.gif" );
    ui -> label_ -> setMovie( movie_of_books );
    movie_of_books -> start();
    setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
    setAcceptDrops(true);
}

login::~login()
{
    delete ui;
}
void login :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void login :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void login :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void login::on_log_but_clicked()
{
    User tem;
    if(search_user_id(tem, ui -> id_edit -> text()) == 0)
    {
        if(make_password(ui -> key_edit -> text()) != tem.key)
            doge_warning("Wrong key");
        else
        {
            close();
            start_moive moive;
            moive.work();
            root = tem ;
            book_window() -> check_root();
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
        }
    }
    else
        doge_warning("Id doesn't exist");
}

void login::on_exit_but_clicked()
{
   close_all();
}

void login::on_reg_but_clicked()
{
    regist_window() -> show();
}
