#ifndef CLOCK_H
#define CLOCK_H

#include <QtWidgets/QMainWindow>
#include <QString>
#include <QTimer>
#include "ui_Clock.h"

class Clock : public QMainWindow
{
	Q_OBJECT

public:
	Clock(QWidget *parent = 0);
	~Clock();

private:
	Ui::ClockClass ui;
	QTimer *timer;

private slots:
	void refresh();
	void next();
};

#endif // CLOCK_H