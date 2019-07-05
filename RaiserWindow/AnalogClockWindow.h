#pragma once
#include "RaiserWindow.h"
#include <qpoint.h>
class AnalogClockWindow :
	public RaiserWindow
{
public:
	AnalogClockWindow();
protected:
	void timerEvent(QTimerEvent *event) override;
	void render(QPainter *painter) override;
private:
	int m_timerId;
};

