#include "stdafx.h"
#include "RandomRunApp.h"
#include <QtWidgets/QApplication>
#include "uniformGen.h"
#include "runner.h"
#include "path.h"
using std::string;

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	RandomRunApp w;
	std::shared_ptr<RandGenInterface> p = std::make_shared<uniformGen>();
	auto& logger = w.logger();

	runnerSetting2i setting;
	setting.minLength = { -1,0 };
	setting.maxLength = { 1,0 };
	setting.maxTime = 100;
	
	runner runner1({ 0,0 },setting, p, p);
	path path1{ &runner1 };
	
	for (int i = 0; i < 10; ++i)
	{
		runner1.nextStep();
	}
	auto& his = path1.history();
	
	for(auto& e:his)
	{
		logger << e<<"\n";
	}
	
	logger.writeLog();
	w.show();
	return QApplication::exec();
}