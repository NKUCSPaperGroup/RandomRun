#pragma once
#include "stdafx.h"

class Logger : public std::ostringstream
{
public:
	Logger() = default;
	explicit Logger(QTextEdit* const target);
	void setTarget(QTextEdit* const target);
	void writeLog() const;
private:
	QTextEdit* target_;
};
