#include "log_display.h"
#include "ui_log_display.h"
#include "class.h"
//#include "log_system.h"

log_display::log_display(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::log_display)
{
    this->setAttribute(Qt::WA_TranslucentBackground, true);//透明
    setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);
}

log_display::~log_display()
{
    delete ui;
}

void log_display::on_exit_but_clicked()
{
    close();
}
void log_display :: mousePressEvent(QMouseEvent *e)
{
    last = e -> globalPos();
}
void log_display :: mouseMoveEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    last = e -> globalPos();
    move(x() + dx, y() + dy);
}
void log_display :: mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e -> globalX() - last.x();
    int dy = e -> globalY() - last.y();
    move(x() + dx, y() + dy);
}
void log_display::on_user_id_search_but_clicked()
{
    QString Uid = ui -> user_id_edit -> text();
    static QVector<QString> logs;
    logs.clear();
    select_log_with_usr_id(logs, Uid);
    QString Text="";
    for(QVector <QString>  :: iterator it = logs.begin(); it != logs.end(); ++it)
    {
        Text+=(*it);
        Text+="\n";
    }
    ui -> log_text -> setText(Text);
}

void log_display::on_all_search_but_clicked()
{
    QVector<QString> logs;
    logs.clear();
    select_log_all(logs);
    QString Text="";
    for(QVector <QString>  :: iterator it = logs.begin(); it != logs.end(); ++it)
    {
        Text+=(*it);
        Text+="\n";
    }
    ui -> log_text -> setText(Text);}

void log_display::on_book_id_search_but_clicked()
{
    QString Uid = ui -> book_id_edit -> text();
    static QVector<QString> logs;
    logs.clear();
    select_log_with_book_id(logs, Uid);
    QString Text="";
    for(QVector <QString>  :: iterator it = logs.begin(); it != logs.end(); ++it)
    {
        Text+=(*it);
        Text+="\n";
    }
    ui -> log_text -> setText(Text);
}
