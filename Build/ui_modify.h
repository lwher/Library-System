/********************************************************************************
** Form generated from reading UI file 'modify.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_H
#define UI_MODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modify
{
public:
    QFrame *frame;
    QPushButton *exit_but;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *email_edit;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *confirm_edit;
    QLineEdit *original_key_edit;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *name_edit;
    QLabel *label_7;
    QLineEdit *admin_edit;
    QPushButton *submit_but;
    QLineEdit *phone_edit;
    QLineEdit *key_edit;
    QLabel *label_12;
    QLabel *label_8;

    void setupUi(QDialog *modify)
    {
        if (modify->objectName().isEmpty())
            modify->setObjectName(QStringLiteral("modify"));
        modify->resize(953, 696);
        frame = new QFrame(modify);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(270, -40, 361, 731));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\2062.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        exit_but = new QPushButton(modify);
        exit_but->setObjectName(QStringLiteral("exit_but"));
        exit_but->setGeometry(QRect(510, 510, 81, 21));
        label = new QLabel(modify);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(330, 153, 61, 17));
        label->setAcceptDrops(false);
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setScaledContents(false);
        label->setWordWrap(false);
        label_5 = new QLabel(modify);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 386, 61, 17));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-color: rgb(255, 255, 255);"));
        label_5->setFrameShape(QFrame::NoFrame);
        email_edit = new QLineEdit(modify);
        email_edit->setObjectName(QStringLiteral("email_edit"));
        email_edit->setGeometry(QRect(396, 339, 133, 20));
        label_4 = new QLabel(modify);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 339, 61, 17));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(modify);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 293, 61, 17));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        confirm_edit = new QLineEdit(modify);
        confirm_edit->setObjectName(QStringLiteral("confirm_edit"));
        confirm_edit->setGeometry(QRect(396, 246, 133, 20));
        original_key_edit = new QLineEdit(modify);
        original_key_edit->setObjectName(QStringLiteral("original_key_edit"));
        original_key_edit->setGeometry(QRect(396, 153, 133, 20));
        label_2 = new QLabel(modify);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 200, 61, 17));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(modify);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 432, 60, 17));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        name_edit = new QLineEdit(modify);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setGeometry(QRect(396, 293, 133, 20));
        label_7 = new QLabel(modify);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 246, 61, 17));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        admin_edit = new QLineEdit(modify);
        admin_edit->setObjectName(QStringLiteral("admin_edit"));
        admin_edit->setGeometry(QRect(396, 432, 133, 20));
        submit_but = new QPushButton(modify);
        submit_but->setObjectName(QStringLiteral("submit_but"));
        submit_but->setGeometry(QRect(396, 479, 91, 23));
        phone_edit = new QLineEdit(modify);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));
        phone_edit->setGeometry(QRect(396, 386, 133, 20));
        key_edit = new QLineEdit(modify);
        key_edit->setObjectName(QStringLiteral("key_edit"));
        key_edit->setGeometry(QRect(396, 200, 133, 20));
        key_edit->setEchoMode(QLineEdit::Normal);
        label_12 = new QLabel(modify);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(350, 80, 201, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 23pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_8 = new QLabel(modify);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 350, 561, 351));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/22333.png);"));
        frame->raise();
        label->raise();
        label_5->raise();
        label_4->raise();
        label_3->raise();
        confirm_edit->raise();
        original_key_edit->raise();
        label_2->raise();
        label_6->raise();
        name_edit->raise();
        label_7->raise();
        key_edit->raise();
        label_12->raise();
        label_8->raise();
        exit_but->raise();
        email_edit->raise();
        admin_edit->raise();
        submit_but->raise();
        phone_edit->raise();

        retranslateUi(modify);

        QMetaObject::connectSlotsByName(modify);
    } // setupUi

    void retranslateUi(QDialog *modify)
    {
        modify->setWindowTitle(QApplication::translate("modify", "Dialog", 0));
        exit_but->setText(QApplication::translate("modify", "\345\205\263\351\227\255", 0));
        label->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\345\216\237\345\247\213\345\257\206\347\240\201</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\346\211\213\346\234\272</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\351\202\256\347\256\261</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\346\226\260\345\257\206\347\240\201</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("modify", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201</span></p></body></html>", 0));
        submit_but->setText(QApplication::translate("modify", "\346\217\220\344\272\244", 0));
        label_12->setText(QApplication::translate("modify", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class modify: public Ui_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_H
