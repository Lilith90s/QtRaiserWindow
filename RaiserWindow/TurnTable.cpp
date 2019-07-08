#include "TurnTable.h"



TurnTable::TurnTable()
{
	resize(800, 800);
	m_color_list = {
	qRgb(76,180,231),
	qRgb(255,192,159),
	qRgb(255,238,147),
	qRgb(226,219,190),
	qRgb(153,163,128),
	qRgb(76,180,231),
	qRgb(255,192,159),
	qRgb(255,238,147),
	qRgb(226,219,190),
	qRgb(153,163,128),
	};
	m_word_list = {
		QString("一等奖"),
		QString("二等奖"),
		QString("三等奖"),
		QString("四等奖"),
		QString("五等奖"),
		QString("一等奖"),
		QString("二等奖"),
		QString("三等奖"),
		QString("四等奖"),
		QString("五等奖"),
	};
	pointer_color = QColor(0, 127, 127, 191);

	m_pTimer = new QTimer(this);
	m_pTimer->setInterval(500);

	connect(m_pTimer, SIGNAL(timeout()), this, SLOT(update()));
}


TurnTable::~TurnTable()
{
}





void TurnTable::render(QPainter * painter)
{
	qDebug("start render");
	// 指针

	/***********画圆盘************/
	// 设置抗锯齿
	painter->setRenderHint(QPainter::Antialiasing);
	
	int d = qMin(width(), height());
	int x = (width() + height() - d * 2) / 2;
	int y = 0;
	if (d == width())
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}
	painter->save();
	// qDebug("x = %d,y = %d",x,y);
	// 绘制颜色圆盘
	for (size_t i = 0; i < m_color_list.size(); i++)
	{
		painter->setBrush(QBrush(QColor::fromRgb(m_color_list[i])));
		painter->drawPie(x, y, d, d, i * 36 * 16,36 * 16);
	}
	painter->restore();

	painter->save();
	// 绘制文字
	painter->translate(width() / 2, height() / 2);
	for (size_t i = 0; i < m_word_list.size(); i++)
	{
		//int i = m_word_list.size();
		painter->rotate(360.0/m_word_list.size()/2);
		painter->drawText(d/4, 0, m_word_list[i]);
		painter->rotate(360.0 / m_word_list.size() / 2);
	
	}

	painter->restore();
	
}

void TurnTable::paintEvent(QPaintEvent *event)
{
	qDebug("paintEvent running!");
	QPainter painter;
	painter.translate(width() / 2, height() / 2);
	int d = qMin(width(), height());
	painter.scale(d / 200.0, d / 200.0);
	painter.setPen(Qt::NoPen);
	painter.setBrush(pointer_color);
		   
	painter.rotate(30.0);
	painter.drawConvexPolygon(hourHand, 3);
}


void TurnTable::renderNow()
{
	qDebug("paintEvent running!");
	QPainter painter;
	painter.translate(width() / 2, height() / 2);
	int d = qMin(width(), height());
	painter.scale(d / 200.0, d / 200.0);
	painter.setPen(Qt::NoPen);
	painter.setBrush(pointer_color);

	painter.rotate(30.0);
	painter.drawConvexPolygon(hourHand, 3);
}

/*******************slots*************************/
void TurnTable::startRand()
{
	qDebug("start turn");
	renderLater();
}