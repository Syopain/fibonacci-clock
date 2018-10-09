#ifndef CLOCK_H
#define CLOCK_H

#include <QtWidgets/QMainWindow>
#include "ui_Clock.h"

class Clock : public QMainWindow
{
	Q_OBJECT

public:
	Clock(QWidget *parent = 0);
	~Clock();

private:
	Ui::ClockClass ui;
};

#endif // CLOCK_H
