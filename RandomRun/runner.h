#pragma once
#include "position.h"
#include "randGen.h"
#include "stdafx.h"

struct RunnerSetting2i
{
	pos2i maxLength;
	pos2i minLength;
	size_t maxTime = UINT_MAX;
	size_t thisTime = 0;
};

class runner2i : public QObject
{
	Q_OBJECT
		using gen = std::shared_ptr<RandGenInterface>;
public:
	RunnerSetting2i setting;

	runner2i(const pos2i pos, RunnerSetting2i setting, const gen rand_gen_interface, const gen rand_gen_interface1);

	void nextStep();

	void set_setting(const RunnerSetting2i& setting);

	pos2i pos() const;

	gen x_gen() const;

	void set_x_gen(const gen& rand_gen_interface);

	gen y_gen() const;

	void set_y_gen(const gen& rand_gen_interface);

private:
	pos2i pos_;
	gen x_gen_;
	gen y_gen_;

	void setPos(int x, int y);

	void setPos(const pos2i& i);

signals:
	void positionChanged(pos2i pre, pos2i now);
};

struct RunnerSetting2d
{
	pos2d maxLength;
	pos2d minLength;
	size_t maxTime = UINT_MAX;
	size_t thisTime = 0;
};

class runner2d : public QObject
{
	Q_OBJECT
		using gen = std::shared_ptr<RandGenInterface>;
public:
	RunnerSetting2d setting;

	runner2d(const pos2d pos, RunnerSetting2d setting, const gen rand_gen_interface, const gen rand_gen_interface1);

	void nextStep();

	void set_setting(const RunnerSetting2d& setting);

	pos2d pos() const;

	gen x_gen() const;

	void set_x_gen(const gen& rand_gen_interface);

	gen y_gen() const;

	void set_y_gen(const gen& rand_gen_interface);

private:
	pos2d pos_;
	gen x_gen_;
	gen y_gen_;

	void setPos(double x, double y);

	void setPos(const pos2d& i);

signals:
	void positionChanged(pos2d pre, pos2d now);
};