#include "RaiserWindow.h"
#include <QtWidgets/QApplication>
#include "AnalogClockWindow.h"
#include "TurnTable.h"
#include "UiCtrl.h"
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	UiCtrl w;
	w.show();
	return app.exec();
}
