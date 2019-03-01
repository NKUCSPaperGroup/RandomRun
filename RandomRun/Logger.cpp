#include "stdafx.h"
#include "Logger.h"

Logger::Logger(QTextEdit* const target) : target_(target)
{
}

void Logger::setTarget(QTextEdit* const target)
{
	this->target_ = target;
}

void Logger::writeLog() const
{
	target_->setText(QString::fromStdString(str()));
}
