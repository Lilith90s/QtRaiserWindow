#include "RaiserWindow.h"
#include <QtWidgets/QApplication>
#include "AnalogClockWindow.h"
int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);
	AnalogClockWindow w;
	w.show();
	return app.exec();
}
