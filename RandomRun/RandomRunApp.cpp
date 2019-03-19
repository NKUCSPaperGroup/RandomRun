#include "stdafx.h"
#include "RandomRunApp.h"

RandomRunApp::RandomRunApp(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(&logger_, SIGNAL(need_write(QString)), this, SLOT(print(QString)));
}