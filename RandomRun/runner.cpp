#include "stdafx.h"
#include "runner.h"

runner2i::runner2i(const pos2i pos, RunnerSetting2i setting, const gen rand_gen_interface, const gen rand_gen_interface1) :
	QObject(nullptr),
	setting(setting),
	pos_(pos),
	x_gen_(rand_gen_interface),
	y_gen_(rand_gen_interface1)
{
}

void runner2i::nextStep()
{
	if (setting.maxTime < setting.thisTime)return;
	const int dx = x_gen_->getIRand(setting.minLength.x(), setting.maxLength.x());
	const int dy = y_gen_->getIRand(setting.minLength.y(), setting.maxLength.y());
	this->setPos(pos_ + pos2i{ dx, dy });
	setting.thisTime++;
}

void runner2i::set_setting(const RunnerSetting2i& setting)
{
	this->setting = setting;
}

pos2i runner2i::pos() const
{
	return pos_;
}

runner2i::gen runner2i::x_gen() const
{
	return x_gen_;
}

void runner2i::set_x_gen(const gen& rand_gen_interface)
{
	x_gen_ = rand_gen_interface;
}

runner2i::gen runner2i::y_gen() const
{
	return y_gen_;
}

void runner2i::set_y_gen(const gen& rand_gen_interface)
{
	y_gen_ = rand_gen_interface;
}

void runner2i::setPos(const int x, const int y)
{
	emit positionChanged(pos_.copy(), { x, y });
	this->pos_.set(x, y);
}

void runner2i::setPos(const pos2i& i)
{
	emit positionChanged(pos_.copy(), i);
	this->pos_ = i;
}


runner2d::runner2d(const pos2d pos, RunnerSetting2d setting, const gen rand_gen_interface, const gen rand_gen_interface1) :
	QObject(nullptr),
	setting(setting),
	pos_(pos),
	x_gen_(rand_gen_interface),
	y_gen_(rand_gen_interface1)
{
}

void runner2d::nextStep()
{
	if (setting.maxTime < setting.thisTime)return;
	const double dx = x_gen_->getDRand(setting.minLength.x(), setting.maxLength.x());
	const double dy = y_gen_->getDRand(setting.minLength.y(), setting.maxLength.y());
	this->setPos(pos_ + pos2d{ dx, dy });
	setting.thisTime++;
}

void runner2d::set_setting(const RunnerSetting2d& setting)
{
	this->setting = setting;
}

pos2d runner2d::pos() const
{
	return pos_;
}

runner2d::gen runner2d::x_gen() const
{
	return x_gen_;
}

void runner2d::set_x_gen(const gen& rand_gen_interface)
{
	x_gen_ = rand_gen_interface;
}

runner2d::gen runner2d::y_gen() const
{
	return y_gen_;
}

void runner2d::set_y_gen(const gen& rand_gen_interface)
{
	y_gen_ = rand_gen_interface;
}

void runner2d::setPos(const double x, const double y)
{
	emit positionChanged(pos_.copy(), { x, y });
	this->pos_.set(x, y);
}

void runner2d::setPos(const pos2d& i)
{
	emit positionChanged(pos_.copy(), i);
	this->pos_ = i;
}