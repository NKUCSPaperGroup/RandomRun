#include "stdafx.h"
#include "RandomRunApp.h"
#include <QtWidgets/QApplication>
#include "uniformGen.h"
#include "runner.h"
#include "path.h"
#include "QtLoggerFrame.h"
using std::string;

#ifdef _DEBUG
void test1(QtLoggerFrame&);
#endif

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
#ifdef  _DEBUG
	QtLoggerFrame logger;
	logger.show();
	test1(logger);
#endif
	RandomRunApp w;
	w.show();
	return QApplication::exec();
}
#ifdef _DEBUG
void test1(QtLoggerFrame& logger)
{
	std::shared_ptr<RandGenInterface> p = std::make_shared<uniformGen>();
	//for integer
	RunnerSetting2i setting;
	setting.minLength = {-1, 0};
	setting.maxLength = {1, 0};
	setting.maxTime = 100;

	runner2i runner1({0, 0}, setting, p, p);
	path2i path1{&runner1};

	for (int i = 0; i < 10; ++i)
		runner1.nextStep();
	auto& his = path1.history();

	for (auto& e : his)
		logger << e << "\n";
	//for double
	RunnerSetting2d dsetting;
	dsetting.minLength = {-1, 0};
	dsetting.maxLength = {1, 0};
	dsetting.maxTime = 100;

	runner2d runner2({0, 0}, dsetting, p, p);
	path2d path2{&runner2};

	for (int i = 0; i < 10; ++i)
		runner2.nextStep();
	auto& his2 = path2.history();

	for (auto& e : his2)
		logger << e << "\n";
}
#endif
