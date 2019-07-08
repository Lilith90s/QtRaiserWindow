#pragma once

#include <QWidget>
#include "ui_RaiserWindow.h"
#include "TurnTable.h"
#include <qlabel.h>
#include <qpushbutton.h>
class UiCtrl : public QWidget
{
	Q_OBJECT

public:
	UiCtrl(QWidget *parent = Q_NULLPTR);
	~UiCtrl();
private:
	Ui::RaiserWindowClass ui;
	TurnTable* table;
	QPushButton* start_button;
	QLabel* result_label;

};
