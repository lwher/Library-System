/********************************************************************************
** Form generated from reading UI file 'doge.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOGE_H
#define UI_DOGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doge
{
public:
    QLabel *doge_warning_label;
    QPushButton *pushButton;
    QLabel *doge_edit;
    QLabel *label_2;
    QLabel *doge_success_label;

    void setupUi(QWidget *Doge)
    {
        if (Doge->objectName().isEmpty())
            Doge->setObjectName(QStringLiteral("Doge"));
        Doge->resize(453, 497);
        doge_warning_label = new QLabel(Doge);
        doge_warning_label->setObjectName(QStringLiteral("doge_warning_label"));
        doge_warning_label->setGeometry(QRect(130, 30, 141, 141));
        doge_warning_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/doge.jpeg);"));
        pushButton = new QPushButton(Doge);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(244, 180, 61, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        doge_edit = new QLabel(Doge);
        doge_edit->setObjectName(QStringLiteral("doge_edit"));
        doge_edit->setGeometry(QRect(110, 180, 121, 20));
        doge_edit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Doge);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, -30, 241, 301));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\2062.png);"));
        doge_success_label = new QLabel(Doge);
        doge_success_label->setObjectName(QStringLiteral("doge_success_label"));
        doge_success_label->setGeometry(QRect(130, 30, 141, 141));
        doge_success_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/doge_success.png);"));
        label_2->raise();
        doge_warning_label->raise();
        pushButton->raise();
        doge_edit->raise();
        doge_success_label->raise();

        retranslateUi(Doge);

        QMetaObject::connectSlotsByName(Doge);
    } // setupUi

    void retranslateUi(QWidget *Doge)
    {
        Doge->setWindowTitle(QApplication::translate("Doge", "Form", 0));
        doge_warning_label->setText(QString());
        pushButton->setText(QApplication::translate("Doge", "\347\241\256\345\256\232!", 0));
        doge_edit->setText(QString());
        label_2->setText(QString());
        doge_success_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Doge: public Ui_Doge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGE_H
