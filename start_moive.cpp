#include "start_moive.h"
#include "ui_start_moive.h"

start_moive::start_moive(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::start_moive)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
}

start_moive::~start_moive()
{
    delete ui;
}
void start_moive :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void start_moive :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void start_moive :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void start_moive :: work()
{
    show();
    QTime time;
    QMovie *movie;
    movie = new QMovie( "../2.gif" );
    ui -> label -> setMovie( movie );
    movie -> start();
    time.start();
    while ( time.elapsed() < 4500 )
    {
        QApplication::processEvents();
    }
    close();
}
