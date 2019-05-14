#pragma once
#include <QWidget>
#include "ui_QtLoggerFrame.h"
#include "Logger.h"

class QtLoggerFrame : public QWidget
{
Q_OBJECT

	Logger logger_;

public slots:
	void print(const QString msg) const
	{
		this->ui.textLogger->setText(msg);
	}

public:
	QtLoggerFrame(QWidget* parent = Q_NULLPTR);
	~QtLoggerFrame() = default;

	Logger& logger()
	{
		return logger_;
	}

	template <typename T>
	friend QtLoggerFrame& operator<<(QtLoggerFrame& w, const T& obj)
	{
		w.logger() << obj;
		w.logger().writeLog();
		return w;
	}

private:
	Ui::QtLoggerFrame ui{};
};
