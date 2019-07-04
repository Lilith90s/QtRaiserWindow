#pragma once

#include <QtWidgets/QWidget>
#include "ui_RaiserWindow.h"

class RaiserWindow : public QWidget
{
	Q_OBJECT

public:
	RaiserWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::RaiserWindowClass ui;
};
