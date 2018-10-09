/********************************************************************************
** Form generated from reading UI file 'Clock.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClockClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClockClass)
    {
        if (ClockClass->objectName().isEmpty())
            ClockClass->setObjectName(QStringLiteral("ClockClass"));
        ClockClass->resize(600, 400);
        menuBar = new QMenuBar(ClockClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ClockClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClockClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ClockClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ClockClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ClockClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ClockClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClockClass->setStatusBar(statusBar);

        retranslateUi(ClockClass);

        QMetaObject::connectSlotsByName(ClockClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClockClass)
    {
        ClockClass->setWindowTitle(QApplication::translate("ClockClass", "Clock", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClockClass: public Ui_ClockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
