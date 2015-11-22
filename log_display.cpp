#include "log_display.h"
#include "ui_log_display.h"
#include "class.h"
//#include "log_system.h"

log_display::log_display(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::log_display)
{
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

void log_display::on_user_id_search_but_clicked()
{
    QString Uid = ui -> user_id_edit -> text();
    qDebug() << "usersearch begin by uid" << Uid << endl;
    QVector<QString> logs;
    logs.clear();
    //select_log_with_id(logs,Uid);
    select_log_with_id(logs, Uid);
    QString Text="";
    for(QVector <QString>  :: iterator it = logs.begin(); it != logs.end(); ++it)
    {
        Text+=(*it);
        Text+="\n";
    }
    ui -> log_text -> setText(Text);
}

void log_display::on_book_search_but_clicked()
{
    QString Bid = ui -> book_id_edit -> text(),Bname = ui -> book_name_edit -> text();
    QVector<QString> logs;
    logs.clear();
    select_log_with_bookid(logs,Bid,Bname);
    QString Text="";
    for(QVector <QString>  :: iterator it = logs.begin(); it != logs.end(); ++it)
    {
        Text+=(*it);
        Text+="\n";
    }
    ui -> log_text -> setText(Text);}

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
