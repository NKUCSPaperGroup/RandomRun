#include "stdafx.h"
#include "RandomRunApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RandomRunApp w;
	w.show();
	return a.exec();
}
