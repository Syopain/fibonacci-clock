#include "Clock.h"
#include <QTime>
#include <ctime>

const int Clock::fbnc[5] = { 1, 1, 2, 3, 5 };
const QString TO_RED("background-color: rgba(255, 0, 0, 200); border:none;");
const QString TO_GREEN("background-color: rgba(0, 255, 0, 200); border:none;");
const QString TO_BLUE("background-color: rgba(0, 0, 255, 200); border:none;");
const QString TO_WHITE("background-color: rgba(255, 255, 255, 200); border:none;");

enum color {WHITE = 0, RED, GREEN, BLUE};

Clock::Clock(QWidget *parent)
	: QMainWindow(parent), timer(new QTimer(this)), random(time(0))
{
	ui.setupUi(this);

	connect(timer, SIGNAL(timeout()), this, SLOT(next_five_minutes()));
	connect(ui.bar_1, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_2, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_3, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_4, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_5, SIGNAL(clicked()), this, SLOT(refresh()));

	for (int i = 0; i < 1024; ++i) {
		int hour = 0, minute = 0;
		for (int j = i, k = 0; j > 0 && k < 5; j /= 4, ++k) {
			switch (j % 4) {
			case RED: 
				hour += fbnc[k];
				break;
			case GREEN: 
				minute += fbnc[k];
				break;
			case BLUE:
				hour += fbnc[k];
				minute += fbnc[k];
				break;
			}
		}
		if (hour < 12 && minute < 12)
			time_table[hour][minute].push_back(i);
	}
	next_five_minutes();
}

Clock::~Clock()
{
	delete timer;
}

void Clock::refresh()
{
	size_t sz = time_table[hour_hand][minute_hand].size();
	int cur = time_table[hour_hand][minute_hand][random() % sz];
	QPushButton *bar[] = { ui.bar_1, ui.bar_2, ui.bar_3, ui.bar_4, ui.bar_5 };
	for (int i = 0; i < 5; ++i,cur /= 4) {
		switch (cur % 4) {
		case RED: bar[i]->setStyleSheet(TO_RED);
			break;
		case GREEN: bar[i]->setStyleSheet(TO_GREEN);
			break;
		case BLUE: bar[i]->setStyleSheet(TO_BLUE);
			break;
		case WHITE: bar[i]->setStyleSheet(TO_WHITE);
			break;
		}
	}
}

void Clock::next_five_minutes()
{
	QTime cur = QTime::currentTime();
	hour_hand = cur.hour() % 12;
	minute_hand = cur.minute() / 5;
	//Set it to the next five minutes
	timer->start(300000 - ((cur.minute() % 5) * 60000 + cur.second() * 1000 + cur.msec()));
	
	refresh();
}