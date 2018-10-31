#ifndef CLOCK_H
#define CLOCK_H

#include <QtWidgets/QMainWindow>
#include <QString>
#include <QTimer>
#include <vector>
#include <random>
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
	static const int fbnc[5];
	std::default_random_engine random;

	int hour_hand;
	int minute_hand;
	std::vector<int> time_table[12][12];

private slots:
	void refresh();
	void next_five_minutes();
};

#endif // CLOCK_H