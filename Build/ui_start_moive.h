/********************************************************************************
** Form generated from reading UI file 'start_moive.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_MOIVE_H
#define UI_START_MOIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_start_moive
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *start_moive)
    {
        if (start_moive->objectName().isEmpty())
            start_moive->setObjectName(QStringLiteral("start_moive"));
        start_moive->resize(625, 480);
        centralwidget = new QWidget(start_moive);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 451, 291));
        start_moive->setCentralWidget(centralwidget);
        menubar = new QMenuBar(start_moive);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 625, 23));
        start_moive->setMenuBar(menubar);
        statusbar = new QStatusBar(start_moive);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        start_moive->setStatusBar(statusbar);

        retranslateUi(start_moive);

        QMetaObject::connectSlotsByName(start_moive);
    } // setupUi

    void retranslateUi(QMainWindow *start_moive)
    {
        start_moive->setWindowTitle(QApplication::translate("start_moive", "MainWindow", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class start_moive: public Ui_start_moive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_MOIVE_H
