#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RandomRunApp.h"

class RandomRunApp : public QMainWindow
{
	Q_OBJECT

public:
	RandomRunApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::RandomRunAppClass ui;
};
