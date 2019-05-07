#include "stdafx.h"
#include "RandomRunApp.h"
#include "uniformGen.h"
#ifdef _DEBUG
#define LOUT (*logger_)
#endif
RandomRunApp::RandomRunApp(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	auto layout_view = new QHBoxLayout(ui.drawView);
	this->chart_view = new QChartView(this);
	layout_view->addWidget(chart_view);

	chartXY = new QChart();
	chartTX = new QChart();
	chartTY = new QChart();

	figure_name_map[tr("y-x")] = chartXY;
	figure_name_map[tr("x-t")] = chartTX;
	figure_name_map[tr("y-t")] = chartTY;

	serTX = new QLineSeries();
	serTY = new QLineSeries();
	serXY = new QLineSeries();

	serTX->show();
	serTY->show();
	serXY->show();

	chartXY->addSeries(serXY);
	chartTX->addSeries(serTX);
	chartTY->addSeries(serTY);

	axsTX = {new QValueAxis{this}, new QValueAxis{this}};
	axsTY = {new QValueAxis{this}, new QValueAxis{this}};
	axsXY = {new QValueAxis{this}, new QValueAxis{this}};

	chartXY->setAxisX(axsXY.first);
	chartXY->setAxisY(axsXY.second);
	chartTX->setAxisX(axsTX.first);
	chartTX->setAxisY(axsTX.second);
	chartTY->setAxisX(axsTY.first);
	chartTY->setAxisY(axsTY.second);

	figure_data_map[chartXY] = serXY;
	figure_data_map[chartTY] = serTY;
	figure_data_map[chartTX] = serTX;

	gen_name_map["uniform"] = std::make_shared<uniformGen>();


	for (auto& e : figure_name_map.keys())
		ui.figureCombBox->addItem(e);
	for (auto& e : gen_name_map.keys())
	{
		ui.xRandCombBox->addItem(e);
		ui.yRandCombBox->addItem(e);
	}
	this->chart_view->setChart(chartXY);
	connect(ui.nextButton, SIGNAL(clicked()), this, SLOT(next()));
	connect(ui.preButton, SIGNAL(clicked()), this, SLOT(pre()));
	connect(ui.clearButton, SIGNAL(clicked()), this, SLOT(clear()));
	connect(ui.allGetsButton, SIGNAL(clicked()), this, SLOT(showAll()));
	connect(ui.sureButton, SIGNAL(clicked()), this, SLOT(sure()));
	connect(ui.refreshButton, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.integerCheckBox, SIGNAL(stateChanged(int)), this, SLOT(changeIntegerState(int)));
	connect(ui.figureCombBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(changeFigure(QString)));
	connect(ui.xRandCombBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(changeXGAN(QString)));
	connect(ui.yRandCombBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(changeYGAN(QString)));
}

RandomRunApp::~RandomRunApp()
{
#ifdef _DEBUG
	LOUT << "destroy maindow";
#endif
	for (auto f : this->figure_data_map)
	{
		f->deleteLater();
		f = nullptr;
	}

	for (auto g : this->figure_name_map)
	{
		g->deleteLater();
		g = nullptr;
	}
}

double edit2num(QTextEdit* edit)
{
	return edit->document()->toPlainText().toDouble();
}

void RandomRunApp::update_runner()
{
#ifdef _DEBUG
	LOUT << "update runner\n";
#endif
	update_setting();
	if (this->runneri_ == nullptr && integer_flag)
	{
		pos2i pos = {
			static_cast<int>(edit2num(ui.xiEdit)), static_cast<int>(edit2num(ui.yiEdit))
		};
		this->runneri_ = new runner2i(pos, *settingi_, this->gen_name_map.first(), this->gen_name_map.first());
		delete this->settingi_;
		this->settingi_ = &this->runneri_->setting;
		pathi_ = std::make_shared<path2i>(runneri_);
	}
	if (this->runnerd_ == nullptr && !integer_flag)
	{
		pos2d pos = {
			edit2num(ui.xiEdit), edit2num(ui.yiEdit)
		};
		this->runnerd_ = new runner2d(pos, *settingd_, this->gen_name_map.first(), this->gen_name_map.first());
		delete this->settingd_;
		this->settingd_ = &this->runnerd_->setting;
		pathd_ = std::make_shared<path2d>(runnerd_);
	}
}

void RandomRunApp::update_setting()
{
#ifdef _DEBUG
	LOUT << "update setting\n";
#endif
	if (integer_flag)
	{
		settingi_->minLength.set(
			static_cast<int>(edit2num(ui.xMinStepEdit)),
			static_cast<int>(edit2num(ui.yMinStepEdit)));
		settingi_->maxLength.set(
			static_cast<int>(edit2num(ui.xMaxStepEdit)),
			static_cast<int>(edit2num(ui.yMaxStepEdit)));
		settingi_->maxTime = static_cast<size_t>(edit2num(ui.maxTimesEdit));
	}
	else
	{
		settingd_->minLength.set(
			edit2num(ui.xMinStepEdit),
			edit2num(ui.yMinStepEdit));
		settingd_->maxLength.set(
			edit2num(ui.xMaxStepEdit),
			edit2num(ui.yMaxStepEdit));
		settingd_->maxTime = static_cast<size_t>(edit2num(ui.maxTimesEdit));
	}
}

void RandomRunApp::clearSerData()
{
	this->serTX->clear();
	this->serTY->clear();
	this->serXY->clear();
}

void RandomRunApp::clear()
{
#ifdef _DEBUG
	LOUT << "clear\n";
#endif
	clearSerData();
	if (integer_flag)
	{
		if (runneri_ != nullptr)
		{
			delete this->runneri_;
			runneri_ = nullptr;
		}
		this->settingi_ = new RunnerSetting2i;
		settingi_->thisTime = 0;
	}
	else
	{
		if (runneri_ != nullptr)
		{
			delete this->runneri_;
			runneri_ = nullptr;
		}
		this->settingd_ = new RunnerSetting2d;
		settingd_->thisTime = 0;
	}
	refresh();
}

void RandomRunApp::changeIntegerState(int mode)
{
#ifdef _DEBUG
	LOUT << "changeIntegerState:"<<"Integer"<<mode<<'\n';
#endif
	this->integer_flag = mode;
	refresh();
}

void RandomRunApp::sure()
{
#ifdef _DEBUG
	LOUT << "sure\n";
#endif
	if (fixed_flag)
	{
		ui.sureButton->setText(QApplication::translate("RandomRunApp", "\347\241\256\345\256\232", nullptr));
		fixed_flag = false;
		ui.xMinStepEdit->setReadOnly(false);
		ui.yMinStepEdit->setReadOnly(false);
		ui.xMaxStepEdit->setReadOnly(false);
		ui.yMaxStepEdit->setReadOnly(false);
		ui.maxTimesEdit->setReadOnly(false);
		ui.xiEdit->setReadOnly(false);
		ui.yiEdit->setReadOnly(false);
	}
	else
	{	
		ui.sureButton->setText(QApplication::translate("RandomRunAppClass", "\345\217\226\346\266\210", nullptr));
		ui.xMinStepEdit->setReadOnly(true);
		ui.yMinStepEdit->setReadOnly(true);
		ui.xMaxStepEdit->setReadOnly(true);
		ui.yMaxStepEdit->setReadOnly(true);
		ui.maxTimesEdit->setReadOnly(true);
		ui.xiEdit->setReadOnly(true);
		ui.yiEdit->setReadOnly(true);
		clear();
		update_runner();
		fixed_flag = true;
		if (integer_flag)
		{
			serTX->append(0, runneri_->pos().x());
			serTY->append(0, runneri_->pos().y());
			serXY->append(runneri_->pos().x(), runneri_->pos().y());
#ifdef _DEBUG
			LOUT << "size:pathi:" << pathi_->history().size()<< "\n";
#endif
		}
		else
		{
			serTX->append(0, runnerd_->pos().x());
			serTY->append(0, runnerd_->pos().y());
			serXY->append(runnerd_->pos().x(), runnerd_->pos().y());
#ifdef _DEBUG
			LOUT << "size:pathd:" << pathd_->history().size() << "\n";
#endif
		}
	}
#ifdef _DEBUG
	LOUT << "size:serXY:"<<serXY->children().size()<< "\n";
#endif
}

void RandomRunApp::warning_sure()
{
#ifdef _DEBUG
	LOUT << "pump message box \n";
#endif
	QMessageBox::StandardButton reply;
	reply = QMessageBox::information(this, QStringLiteral("注意"), QStringLiteral("请先确认！"));
}

void RandomRunApp::next()
{
#ifdef _DEBUG
	LOUT << "next\n";
#endif
	if (!fixed_flag)
	{
		warning_sure();
		return;
	}
	if (integer_flag)
	{
		if (!runneri_)update_runner();
		runneri_->nextStep();
		auto e = pathi_->history().back();
		serTX->append(pathi_->history().size() - 1, e.x());
		serTX->append(pathi_->history().size() - 1, e.y());
		serXY->append(e.x(), e.y());
#ifdef _DEBUG
		LOUT << "size:pathi:" << pathi_->history().size() << "\n";
		LOUT << "where runner:" <<runneri_->pos()<< "\n";
		LOUT << "current index:" << settingi_->thisTime<<'\n';
#endif
	}
	else
	{
		if (!runnerd_)update_runner();
		runnerd_->nextStep();
		auto e = pathd_->history().back();
		serTX->append(pathd_->history().size() - 1, e.x());
		serTX->append(pathd_->history().size() - 1, e.y());
		serXY->append(e.x(), e.y());
#ifdef _DEBUG
		LOUT << "size:pathd:" << pathd_->history().size() << "\n";
		LOUT << "where runner:" << runnerd_->pos() << "\n";
		LOUT << "current index:" << settingd_->thisTime<<"\n";
#endif
	}
#ifdef _DEBUG
	LOUT << "size:serXY:" << serXY->count() << "\n";
#endif
}

void RandomRunApp::pre()
{
#ifdef _DEBUG
	LOUT << "pre" << '\n';
#endif
	if (!fixed_flag)
	{
		warning_sure();
		return;
	}

	if (integer_flag)
	{
		pathi_->history().pop_back();
		runneri_->setPos(pathi_->history().back());
		pathi_->history().pop_back();
	}
	else
	{
		pathd_->history().pop_back();
		runnerd_->setPos(pathd_->history().back());
		pathd_->history().pop_back();
	}
	refresh();
}

void RandomRunApp::showAll()
{
#ifdef _DEBUG
	LOUT << "showall:count=";
#endif
	if (!fixed_flag)
	{
		warning_sure();
		return;
	}
	if (integer_flag)
	{
#ifdef _DEBUG
		LOUT << "showall:count="<<(settingi_->maxTime- settingi_->thisTime)<<'\n';
#endif
		while (settingi_->thisTime < settingi_->maxTime)
			next();
	}
	else
	{
#ifdef _DEBUG
		LOUT << "showall:count="<< (settingd_->maxTime - settingd_->thisTime) << '\n';
#endif
		while (settingd_->thisTime < settingd_->maxTime)
			next();
	}
}

void RandomRunApp::refresh()
{
#ifdef _DEBUG
	LOUT << "refresh\n";
#endif
	clearSerData();
	if (integer_flag)
	{
		if (pathi_ == nullptr)return;
		int i = 0;
		for (auto b = pathi_->history().begin(); b != pathi_->history().end(); ++b)
		{
			auto& e = *b;
			serTX->append(i, e.x());
			serTY->append(i, e.y());
			serTY->append(e.x(), e.y());
#ifdef _DEBUG
			LOUT <<"\t i="<<i <<"\t pos:" << e << '\n';
#endif
			++i;
		}
	}
	else
	{
		if (pathd_ == nullptr)return;
		int i = 0;
		for (auto b = pathd_->history().begin(); b != pathd_->history().end(); ++b)
		{
			auto& e = *b;
			serTX->append(i, e.x());
			serTY->append(i, e.y());
			serTY->append(e.x(), e.y());
#ifdef _DEBUG
			LOUT << "\t i=" << i << "\t pos:" << e << '\n';
#endif
			++i;
		}
	}
}

void RandomRunApp::changeFigure(QString s)
{
#ifdef _DEBUG
	LOUT << "current chart:" << s.toStdString() << '\n';
#endif
	chart_view->setChart(figure_name_map[s]);
}

void RandomRunApp::changeXGAN(QString s)
{
#ifdef _DEBUG
	LOUT << "current xgan:" << s.toStdString() << '\n';
#endif
	if (integer_flag)
	{
		runneri_->set_x_gen(gen_name_map[s]);
	}
	else
	{
		runnerd_->set_x_gen(gen_name_map[s]);
	}
}

void RandomRunApp::changeYGAN(QString s)
{
#ifdef _DEBUG
	LOUT << "current ygan:" << s.toStdString() << '\n';
#endif
	if (integer_flag)
	{
		runneri_->set_y_gen(gen_name_map[s]);
	}
	else
	{
		runnerd_->set_y_gen(gen_name_map[s]);
	}
}
