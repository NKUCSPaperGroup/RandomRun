#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RandomRunApp.h"
#include "Logger.h"

class RandomRunApp : public QMainWindow
{
	Q_OBJECT

public:
	RandomRunApp(QWidget* parent = Q_NULLPTR);
private:
	Ui::RandomRunAppClass ui;
	Logger logger_;
public:
	Logger& logger()
	{
		return logger_;
	}

public slots:
	void print(QString msg)
	{
		this->ui.textLogger->setText(msg);
	}
};
