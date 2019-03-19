#include "stdafx.h"
#include "runner.h"

runner::runner(const pos2i pos, runnerSetting2i setting, const gen rand_gen_interface, const gen rand_gen_interface1):
	QObject(nullptr),
	setting(setting),
	pos_(pos),
	x_gen_(rand_gen_interface),
	y_gen_(rand_gen_interface1)
{
}

void runner::nextStep()
{
	if (setting.maxTime < setting.thisTime)return;
	const int dx = x_gen_->getIRand(setting.minLength.x(), setting.maxLength.x());
	const int dy = y_gen_->getIRand(setting.minLength.y(), setting.maxLength.y());
	this->setPos(pos_ + pos2i{dx, dy});
	setting.thisTime++;
}

void runner::set_setting(const runnerSetting2i& setting)
{
	this->setting = setting;
}

pos2i runner::pos() const
{
	return pos_;
}

runner::gen runner::x_gen() const
{
	return x_gen_;
}

void runner::set_x_gen(const gen& rand_gen_interface)
{
	x_gen_ = rand_gen_interface;
}

runner::gen runner::y_gen() const
{
	return y_gen_;
}

void runner::set_y_gen(const gen& rand_gen_interface)
{
	y_gen_ = rand_gen_interface;
}

void runner::setPos(const int x, const int y)
{
	emit positionChanged(pos_.copy(), {x, y});
	this->pos_.set(x, y);
}

void runner::setPos(const pos2i& i)
{
	emit positionChanged(pos_.copy(), i);
	this->pos_ = i;
}
