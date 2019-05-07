#pragma once
#include "stdafx.h"
#include <QtWidgets/QMainWindow>
#include "ui_RandomRunApp.h"
#include "runner.h"
#include "path.h"
#ifdef _DEBUG
#include "QtLoggerFrame.h"
#endif
using namespace QtCharts;

class RandomRunApp : public QMainWindow
{
Q_OBJECT
public:
	RandomRunApp(QWidget* parent = Q_NULLPTR);
#ifdef _DEBUG
	void setLogger(QtLoggerFrame* logger)
	{
		logger_ = logger;
	}
#endif
	~RandomRunApp();
private:
	Ui::RandomRunAppClass ui;

	bool integer_flag = false;
	bool fixed_flag = false;

#ifdef _DEBUG
	QtLoggerFrame* logger_;
#endif

	QMap<QString, std::shared_ptr<RandGenInterface>> gen_name_map;
	QMap<QString, QChart*> figure_name_map;
	QMap<QChart*, QLineSeries*> figure_data_map;

	QChartView* chart_view = nullptr;
	QChart* chartXY = nullptr;
	QChart* chartTX = nullptr;
	QChart* chartTY = nullptr;

	QLineSeries* serXY = nullptr;
	QLineSeries* serTX = nullptr;
	QLineSeries* serTY = nullptr;

	std::pair<QValueAxis*, QValueAxis*> axsXY = {nullptr, nullptr};
	std::pair<QValueAxis*, QValueAxis*> axsTY = {nullptr, nullptr};
	std::pair<QValueAxis*, QValueAxis*> axsTX = {nullptr, nullptr};

	runner2i* runneri_ = nullptr;
	runner2d* runnerd_ = nullptr;
	RunnerSetting2d* settingd_ = new RunnerSetting2d;
	RunnerSetting2i* settingi_ = new RunnerSetting2i;
	std::shared_ptr<path2i> pathi_ = nullptr;
	std::shared_ptr<path2d> pathd_ = nullptr;

	void update_runner();
	void update_setting();
	void clearSerData();
	void warning_sure();
public slots:
	void clear();
	void changeIntegerState(int);
	void sure();
	void next();
	void pre();
	void showAll();
	void refresh();
	void changeFigure(QString);
	void changeXGAN(QString);
	void changeYGAN(QString);
};
