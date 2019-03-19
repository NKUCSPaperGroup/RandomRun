#include "stdafx.h"
#include "Logger.h"

void Logger::writeLog()
{
	emit need_write(QString::fromStdString(str()));
}