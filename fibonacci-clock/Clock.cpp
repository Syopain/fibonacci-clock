#include "Clock.h"
#include <QTime>

const QString RED("background-color: rgba(255, 0, 0, 200); border:none;");
const QString GREEN("background-color: rgba(0, 255, 0, 200); border:none;");
const QString BLUE("background-color: rgba(0, 0, 255, 200); border:none;");

Clock::Clock(QWidget *parent)
	: QMainWindow(parent), timer(new QTimer(this))
{
	ui.setupUi(this);
	next();
	ui.bar_5->setStyleSheet(RED);
	connect(timer, SIGNAL(timeout()), this, SLOT(next()));
	connect(ui.bar_1_1, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_1_2, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_2, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_3, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.bar_5, SIGNAL(clicked()), this, SLOT(refresh()));
}

Clock::~Clock()
{
	delete timer;
}

void Clock::refresh()
{
//	ui.bar_5->setStyleSheet(BLUE);
}

void Clock::next()
{
	refresh();
	QTime cur = QTime::currentTime();
	timer->start(300000 - ((cur.minute() % 5) * 60000 + cur.second() * 1000 + cur.msec()));
}