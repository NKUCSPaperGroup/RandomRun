#include "stdafx.h"
#include "QtLoggerFrame.h"

QtLoggerFrame::QtLoggerFrame(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(&logger_, SIGNAL(need_write(QString)), this, SLOT(print(QString)));
}