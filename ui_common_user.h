/********************************************************************************
** Form generated from reading UI file 'common_user.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMON_USER_H
#define UI_COMMON_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_common_user
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *common_user)
    {
        if (common_user->objectName().isEmpty())
            common_user->setObjectName(QStringLiteral("common_user"));
        common_user->resize(800, 600);
        menubar = new QMenuBar(common_user);
        menubar->setObjectName(QStringLiteral("menubar"));
        common_user->setMenuBar(menubar);
        centralwidget = new QWidget(common_user);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        common_user->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(common_user);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        common_user->setStatusBar(statusbar);

        retranslateUi(common_user);

        QMetaObject::connectSlotsByName(common_user);
    } // setupUi

    void retranslateUi(QMainWindow *common_user)
    {
        common_user->setWindowTitle(QApplication::translate("common_user", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class common_user: public Ui_common_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMON_USER_H
