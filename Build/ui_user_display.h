/********************************************************************************
** Form generated from reading UI file 'user_display.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_DISPLAY_H
#define UI_USER_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_display
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *phone_edit;
    QLineEdit *name_edit;
    QSpacerItem *verticalSpacer;
    QLineEdit *email_edit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *id_edit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exit_but;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_display)
    {
        if (user_display->objectName().isEmpty())
            user_display->setObjectName(QStringLiteral("user_display"));
        user_display->resize(508, 481);
        centralwidget = new QWidget(user_display);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(160, 130, 201, 137));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        phone_edit = new QLineEdit(gridLayoutWidget);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));

        gridLayout_2->addWidget(phone_edit, 4, 1, 1, 1);

        name_edit = new QLineEdit(gridLayoutWidget);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        gridLayout_2->addWidget(name_edit, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        email_edit = new QLineEdit(gridLayoutWidget);
        email_edit->setObjectName(QStringLiteral("email_edit"));

        gridLayout_2->addWidget(email_edit, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        id_edit = new QLineEdit(gridLayoutWidget);
        id_edit->setObjectName(QStringLiteral("id_edit"));

        gridLayout_2->addWidget(id_edit, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        exit_but = new QPushButton(gridLayoutWidget);
        exit_but->setObjectName(QStringLiteral("exit_but"));

        horizontalLayout_5->addWidget(exit_but);


        gridLayout_2->addLayout(horizontalLayout_5, 6, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 300, 54, 12));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 80, 301, 261));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\2062.png);"));
        user_display->setCentralWidget(centralwidget);
        label_3->raise();
        gridLayoutWidget->raise();
        label_2->raise();
        menubar = new QMenuBar(user_display);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 508, 23));
        user_display->setMenuBar(menubar);
        statusbar = new QStatusBar(user_display);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        user_display->setStatusBar(statusbar);

        retranslateUi(user_display);

        QMetaObject::connectSlotsByName(user_display);
    } // setupUi

    void retranslateUi(QMainWindow *user_display)
    {
        user_display->setWindowTitle(QApplication::translate("user_display", "MainWindow", 0));
        label_6->setText(QApplication::translate("user_display", "\347\224\250\346\210\267\345\220\215", 0));
        label_7->setText(QApplication::translate("user_display", "\351\202\256\347\256\261", 0));
        label_8->setText(QApplication::translate("user_display", "\346\211\213\346\234\272", 0));
        exit_but->setText(QApplication::translate("user_display", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("user_display", "\345\270\220\345\217\267", 0));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_display: public Ui_user_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DISPLAY_H
