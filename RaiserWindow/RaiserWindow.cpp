#include "RaiserWindow.h"

RaiserWindow::RaiserWindow(QWindow *parent)
	:QWindow(parent),
	m_backingStore(new QBackingStore(this))
{
	setGeometry(100, 100, 300, 200);
}
void RaiserWindow::render(QPainter * painter)
{
	painter->drawText(QRectF(0, 0, width(), height()), Qt::AlignCenter, QStringLiteral("QWindow"));
}

void RaiserWindow::renderLater()
{
	requestUpdate();
}

void RaiserWindow::renderNow()
{
	if (!isExposed())
		return;
	QRect rect(0, 0, width(), height());
	m_backingStore->beginPaint(rect);
	QPaintDevice *device = m_backingStore->paintDevice();
	QPainter painter(device);

	painter.fillRect(0, 0, width(), height(), Qt::white);
	render(&painter);
	m_backingStore->endPaint();
	m_backingStore->flush(rect);
}

bool RaiserWindow::event(QEvent * event)
{
	if (event->type() == QEvent::UpdateRequest)
	{
		renderNow();
		return true;
	}
	return QWindow::event(event);
}

void RaiserWindow::resizeEvent(QResizeEvent * resizeEvent)
{
	m_backingStore->resize(resizeEvent->size());
	if (isExposed())
		renderNow();
}

void RaiserWindow::exposeEvent(QExposeEvent * event)
{
	if (isExposed())
		renderNow();
}
