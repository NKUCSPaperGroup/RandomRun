#pragma once
#include "stdafx.h"

class Logger :public QObject, public std::ostringstream
{
	Q_OBJECT
public:
	Logger() = default;
	void writeLog();
signals:
	void need_write(QString);
};
