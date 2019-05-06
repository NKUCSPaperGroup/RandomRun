#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RandomRunApp.h"
#include "Logger.h"

class RandomRunApp : public QMainWindow
{
Q_OBJECT
public:
	RandomRunApp(QWidget* parent = Q_NULLPTR);
	~RandomRunApp() = default;
private:
	Ui::RandomRunAppClass ui;
public slots:

signals:

};
