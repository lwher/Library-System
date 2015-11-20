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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
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
    QPushButton *exit_but;
    QFrame *frame;
    QLineEdit *id_edit;
    QPushButton *log_but;
    QLineEdit *key_edit;
    QPushButton *reg_but;
    QLabel *label;
    QCheckBox *auto_login_check;
    QLabel *label_2;
    QCheckBox *keep_password_check;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(892, 628);
        login->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        exit_but = new QPushButton(centralWidget);
        exit_but->setObjectName(QStringLiteral("exit_but"));
        exit_but->setGeometry(QRect(573, 449, 71, 21));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(233, 122, 451, 381));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/picture/\347\231\273\345\275\225.png);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        id_edit = new QLineEdit(centralWidget);
        id_edit->setObjectName(QStringLiteral("id_edit"));
        id_edit->setGeometry(QRect(389, 289, 151, 20));
        id_edit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        log_but = new QPushButton(centralWidget);
        log_but->setObjectName(QStringLiteral("log_but"));
        log_but->setGeometry(QRect(360, 392, 81, 25));
        log_but->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        key_edit = new QLineEdit(centralWidget);
        key_edit->setObjectName(QStringLiteral("key_edit"));
        key_edit->setGeometry(QRect(389, 330, 151, 20));
        key_edit->setEchoMode(QLineEdit::Password);
        reg_but = new QPushButton(centralWidget);
        reg_but->setObjectName(QStringLiteral("reg_but"));
        reg_but->setGeometry(QRect(453, 392, 81, 25));
        reg_but->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"image: url(:/new/prefix1/picture/\346\263\250\345\206\214.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(351, 289, 32, 17));
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        auto_login_check = new QCheckBox(centralWidget);
        auto_login_check->setObjectName(QStringLiteral("auto_login_check"));
        auto_login_check->setGeometry(QRect(473, 370, 71, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(351, 330, 32, 17));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        keep_password_check = new QCheckBox(centralWidget);
        keep_password_check->setObjectName(QStringLiteral("keep_password_check"));
        keep_password_check->setGeometry(QRect(350, 370, 71, 16));
        login->setCentralWidget(centralWidget);
        frame->raise();
        exit_but->raise();
        id_edit->raise();
        log_but->raise();
        key_edit->raise();
        reg_but->raise();
        label->raise();
        auto_login_check->raise();
        label_2->raise();
        keep_password_check->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
        exit_but->setText(QApplication::translate("login", "\351\200\200\345\207\272", 0));
        id_edit->setText(QString());
        log_but->setText(QApplication::translate("login", "\347\231\273\345\275\225", 0));
        key_edit->setText(QString());
        reg_but->setText(QApplication::translate("login", "\346\263\250\345\206\214", 0));
        label->setText(QApplication::translate("login", " \345\270\220\345\217\267 ", 0));
        auto_login_check->setText(QApplication::translate("login", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        label_2->setText(QApplication::translate("login", " \345\257\206\347\240\201 ", 0));
        keep_password_check->setText(QApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
