#pragma once
#pragma execution_character_set("utf-8") 
#include <QtWidgets/QWidget>
#include <QtGui>

class RaiserWindow : public QWindow
{
	Q_OBJECT

public:
	explicit RaiserWindow(QWindow *parent = 0);
	virtual void render(QPainter *painter);
public slots:
	void renderLater();
	void renderNow();

protected:
	bool event(QEvent *event) override;
	void resizeEvent(QResizeEvent *event) override;
	void exposeEvent(QExposeEvent *event) override;
private:
	QBackingStore *m_backingStore;
};
