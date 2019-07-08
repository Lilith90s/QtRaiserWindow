#pragma once
#include "RaiserWindow.h"
#include <synchapi.h>
#include <qlist.h>
#include <qpainter.h>
#include <QHBoxLayout>
#include "ui_RaiserWindow.h"
#include <qpushbutton.h>
#include <QTimer>
class TurnTable :
	public RaiserWindow
{
	
public:
	TurnTable();
	~TurnTable();
	void paintEvent(QPaintEvent* event) override;
public slots:
	void startRand();
protected:
	void render(QPainter *painter) override;
	//void paintEvent(QPaintEvent*);
	void renderNow();

private:
	int m_timerId;
	QList<QRgb> m_color_list;
	QList<QString> m_word_list;
	Ui::RaiserWindowClass ui;
	QPainter* pointer;
	
	const QPoint hourHand[3] = {
		QPoint(7,8),
		QPoint(-7,8),
		QPoint(0,-40)
	};
	// 指针颜色
	QColor pointer_color;
	QTimer *m_pTimer;
};

