#include "RaiserWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RaiserWindow w;
	w.show();
	return a.exec();
}
