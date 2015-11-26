/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralWidget;
    QLineEdit *key_edit;
    QLabel *label_3;
    QPushButton *exit_but;
    QLabel *label_2;
    QPushButton *log_but;
    QLineEdit *id_edit;
    QPushButton *reg_but;
    QLabel *label_;
    QLabel *label_4;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(1138, 716);
        login->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        key_edit = new QLineEdit(centralWidget);
        key_edit->setObjectName(QStringLiteral("key_edit"));
        key_edit->setGeometry(QRect(240, 548, 151, 20));
        key_edit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(204, 518, 31, 20));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3->setFrameShape(QFrame::Box);
        exit_but = new QPushButton(centralWidget);
        exit_but->setObjectName(QStringLiteral("exit_but"));
        exit_but->setGeometry(QRect(390, 620, 71, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(204, 546, 31, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 255);"));
        label_2->setFrameShape(QFrame::Box);
        log_but = new QPushButton(centralWidget);
        log_but->setObjectName(QStringLiteral("log_but"));
        log_but->setGeometry(QRect(204, 580, 81, 25));
        log_but->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        id_edit = new QLineEdit(centralWidget);
        id_edit->setObjectName(QStringLiteral("id_edit"));
        id_edit->setGeometry(QRect(240, 520, 151, 21));
        id_edit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        reg_but = new QPushButton(centralWidget);
        reg_but->setObjectName(QStringLiteral("reg_but"));
        reg_but->setGeometry(QRect(310, 580, 81, 25));
        reg_but->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"image: url(:/new/prefix1/picture/\346\263\250\345\206\214.png);"));
        label_ = new QLabel(centralWidget);
        label_->setObjectName(QStringLiteral("label_"));
        label_->setGeometry(QRect(130, 10, 881, 651));
        label_->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 420, 191, 251));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/QQ\346\210\252\345\233\27620151108145840.png);"));
        login->setCentralWidget(centralWidget);
        label_->raise();
        key_edit->raise();
        label_3->raise();
        exit_but->raise();
        label_2->raise();
        log_but->raise();
        id_edit->raise();
        reg_but->raise();
        label_4->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
        key_edit->setText(QString());
        label_3->setText(QApplication::translate("login", "\345\270\220\345\217\267", 0));
        exit_but->setText(QApplication::translate("login", "\351\200\200\345\207\272", 0));
        label_2->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"> \345\257\206\347\240\201 </p></body></html>", 0));
        log_but->setText(QApplication::translate("login", "\347\231\273\345\275\225", 0));
        id_edit->setText(QString());
        reg_but->setText(QApplication::translate("login", "\346\263\250\345\206\214", 0));
        label_->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
