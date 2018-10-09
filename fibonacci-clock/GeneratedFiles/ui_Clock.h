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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClockClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bar_2;
    QVBoxLayout *verticalLayout;
    QPushButton *bar_0;
    QPushButton *bar_1;
    QPushButton *bar_3;
    QPushButton *bar_5;

    void setupUi(QMainWindow *ClockClass)
    {
        if (ClockClass->objectName().isEmpty())
            ClockClass->setObjectName(QStringLiteral("ClockClass"));
        ClockClass->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClockClass->sizePolicy().hasHeightForWidth());
        ClockClass->setSizePolicy(sizePolicy);
        ClockClass->setMinimumSize(QSize(800, 500));
        ClockClass->setMaximumSize(QSize(800, 500));
        ClockClass->setCursor(QCursor(Qt::ArrowCursor));
        ClockClass->setMouseTracking(false);
        ClockClass->setFocusPolicy(Qt::TabFocus);
        ClockClass->setLayoutDirection(Qt::LeftToRight);
        ClockClass->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 120);"));
        centralWidget = new QWidget(ClockClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setFocusPolicy(Qt::StrongFocus);
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bar_2 = new QPushButton(centralWidget);
        bar_2->setObjectName(QStringLiteral("bar_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bar_2->sizePolicy().hasHeightForWidth());
        bar_2->setSizePolicy(sizePolicy1);
        bar_2->setStyleSheet(QLatin1String("background-color: rgba(0, 255, 0, 200);\n"
"border:none;"));

        horizontalLayout->addWidget(bar_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bar_0 = new QPushButton(centralWidget);
        bar_0->setObjectName(QStringLiteral("bar_0"));
        sizePolicy1.setHeightForWidth(bar_0->sizePolicy().hasHeightForWidth());
        bar_0->setSizePolicy(sizePolicy1);
        bar_0->setFocusPolicy(Qt::WheelFocus);
        bar_0->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 200);\n"
"border:none;"));

        verticalLayout->addWidget(bar_0);

        bar_1 = new QPushButton(centralWidget);
        bar_1->setObjectName(QStringLiteral("bar_1"));
        sizePolicy1.setHeightForWidth(bar_1->sizePolicy().hasHeightForWidth());
        bar_1->setSizePolicy(sizePolicy1);
        bar_1->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 255, 200);\n"
"border:none;"));

        verticalLayout->addWidget(bar_1);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        bar_3 = new QPushButton(centralWidget);
        bar_3->setObjectName(QStringLiteral("bar_3"));
        sizePolicy1.setHeightForWidth(bar_3->sizePolicy().hasHeightForWidth());
        bar_3->setSizePolicy(sizePolicy1);
        bar_3->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 255, 200);\n"
"border:none;"));

        verticalLayout_2->addWidget(bar_3);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 3);

        horizontalLayout_2->addLayout(verticalLayout_2);

        bar_5 = new QPushButton(centralWidget);
        bar_5->setObjectName(QStringLiteral("bar_5"));
        sizePolicy1.setHeightForWidth(bar_5->sizePolicy().hasHeightForWidth());
        bar_5->setSizePolicy(sizePolicy1);
        bar_5->setStyleSheet(QLatin1String("background-color: rgba(255, 0, 0, 200);\n"
"border:none;\n"
""));
        bar_5->setCheckable(false);

        horizontalLayout_2->addWidget(bar_5);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 5);
        ClockClass->setCentralWidget(centralWidget);

        retranslateUi(ClockClass);

        QMetaObject::connectSlotsByName(ClockClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClockClass)
    {
        ClockClass->setWindowTitle(QApplication::translate("ClockClass", "Clock", Q_NULLPTR));
        bar_2->setText(QString());
        bar_0->setText(QString());
        bar_1->setText(QString());
        bar_3->setText(QString());
        bar_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClockClass: public Ui_ClockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
