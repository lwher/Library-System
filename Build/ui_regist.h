/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QLineEdit *key_edit;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *admin_edit;
    QLabel *label;
    QLineEdit *email_edit;
    QLineEdit *id_edit;
    QLineEdit *name_edit;
    QLabel *label_3;
    QLineEdit *phone_edit;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *exit_but;
    QPushButton *submit_but;
    QLabel *label_7;
    QLineEdit *confirm_edit;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;

    void setupUi(QDialog *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName(QStringLiteral("regist"));
        regist->setWindowModality(Qt::NonModal);
        regist->setEnabled(true);
        regist->resize(907, 710);
        regist->setStyleSheet(QStringLiteral(""));
        regist->setSizeGripEnabled(false);
        key_edit = new QLineEdit(regist);
        key_edit->setObjectName(QStringLiteral("key_edit"));
        key_edit->setGeometry(QRect(416, 234, 133, 20));
        key_edit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(regist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 234, 61, 17));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(regist);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 466, 60, 17));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        admin_edit = new QLineEdit(regist);
        admin_edit->setObjectName(QStringLiteral("admin_edit"));
        admin_edit->setGeometry(QRect(416, 466, 133, 20));
        label = new QLabel(regist);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(350, 187, 61, 17));
        label->setAcceptDrops(false);
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setScaledContents(false);
        label->setWordWrap(false);
        email_edit = new QLineEdit(regist);
        email_edit->setObjectName(QStringLiteral("email_edit"));
        email_edit->setGeometry(QRect(416, 373, 133, 20));
        id_edit = new QLineEdit(regist);
        id_edit->setObjectName(QStringLiteral("id_edit"));
        id_edit->setGeometry(QRect(416, 187, 133, 20));
        name_edit = new QLineEdit(regist);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setGeometry(QRect(416, 327, 133, 20));
        label_3 = new QLabel(regist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 327, 61, 17));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        phone_edit = new QLineEdit(regist);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));
        phone_edit->setGeometry(QRect(416, 420, 133, 20));
        label_5 = new QLabel(regist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 420, 61, 17));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-color: rgb(255, 255, 255);"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_4 = new QLabel(regist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 373, 61, 17));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        exit_but = new QPushButton(regist);
        exit_but->setObjectName(QStringLiteral("exit_but"));
        exit_but->setGeometry(QRect(520, 538, 81, 21));
        submit_but = new QPushButton(regist);
        submit_but->setObjectName(QStringLiteral("submit_but"));
        submit_but->setGeometry(QRect(430, 500, 91, 23));
        label_7 = new QLabel(regist);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 280, 61, 17));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        confirm_edit = new QLineEdit(regist);
        confirm_edit->setObjectName(QStringLiteral("confirm_edit"));
        confirm_edit->setGeometry(QRect(416, 280, 133, 20));
        confirm_edit->setEchoMode(QLineEdit::Password);
        label_9 = new QLabel(regist);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 440, 111, 141));
        label_9->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/33.png);"));
        label_8 = new QLabel(regist);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(320, 100, 301, 471));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\206Big.png);"));
        label_10 = new QLabel(regist);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(430, 120, 71, 51));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_8->raise();
        key_edit->raise();
        label_2->raise();
        label_6->raise();
        admin_edit->raise();
        label->raise();
        email_edit->raise();
        id_edit->raise();
        name_edit->raise();
        label_3->raise();
        phone_edit->raise();
        label_5->raise();
        label_4->raise();
        confirm_edit->raise();
        label_7->raise();
        submit_but->raise();
        label_9->raise();
        label_10->raise();
        exit_but->raise();

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QDialog *regist)
    {
        regist->setWindowTitle(QApplication::translate("regist", "Dialog", 0));
        label_2->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\345\257\206\347\240\201</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\351\202\200\350\257\267\347\240\201</span></p></body></html>", 0));
        label->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\345\270\220\345\217\267</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\346\211\213\346\234\272</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\351\202\256\347\256\261</span></p></body></html>", 0));
        exit_but->setText(QApplication::translate("regist", "\345\205\263\351\227\255", 0));
        submit_but->setText(QApplication::translate("regist", "\346\217\220\344\272\244", 0));
        label_7->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\347\241\256\350\256\244\345\257\206\347\240\201</span></p></body></html>", 0));
        label_9->setText(QString());
        label_8->setText(QString());
        label_10->setText(QApplication::translate("regist", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
