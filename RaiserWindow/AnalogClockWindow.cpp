#include "AnalogClockWindow.h"



AnalogClockWindow::AnalogClockWindow()
{
	setTitle("模拟时钟");
	resize(200, 200);
	// 计秒
	m_timerId = startTimer(1000);
}

void AnalogClockWindow::timerEvent(QTimerEvent *event)
{
	if (event->timerId() == m_timerId)
		renderLater();
}

void AnalogClockWindow::render(QPainter * painter)
{
	static const QPoint hourHand[3] = {
		QPoint(7,8),
		QPoint(-7,8),
		QPoint(0,-40)
	};
	static const QPoint minuteHand[3] = {
		QPoint(7,8),
		QPoint(-7,8),
		QPoint(0,-70)
	};
	QColor hourColor(127, 0, 127);
	QColor minuteColor(0, 127, 127, 191);
	// 设置抗锯齿
	painter->setRenderHint(QPainter::Antialiasing);
	// 获取大小
	painter->translate(width() / 2, height() / 2);
	int side = qMin(width(), height());
	painter->scale(side / 200.0, side / 200.0);
	// 绘制时针
	painter->setPen(Qt::NoPen);
	painter->setBrush(hourColor);
	QTime time = QTime::currentTime();
	painter->save();
	painter->rotate(30.0*((time.hour() + time.minute() / 60.0)));
	painter->drawConvexPolygon(hourHand, 3);
	painter->restore();
	// 绘制时针刻度
	painter->setPen(hourColor);
	for (size_t i = 0; i < 12; i++)
	{
		painter->drawLine(88, 0, 96, 0);
		painter->rotate(30.0);
	}

	// 绘制分针
	painter->setPen(Qt::NoPen);
	painter->setBrush(minuteColor);
	painter->save();
	painter->rotate(6.0*(time.minute() + time.second() / 60.0));
	painter->drawConvexPolygon(minuteHand, 3);
	painter->restore();
	// 绘制分针刻度
	painter->setPen(minuteColor);
	for (size_t i = 0; i < 60; i++)
	{
		if ((i % 5) != 0)
			painter->drawLine(92, 0, 96, 0);
		painter->rotate(6.0);
	}
}

