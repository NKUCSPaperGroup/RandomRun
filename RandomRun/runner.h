#pragma once
#include "position.h"
#include "randGen.h"
#include "stdafx.h"

struct runnerSetting2i
{
	pos2i maxLength;
	pos2i minLength;
	size_t maxTime = UINT_MAX;
	size_t thisTime = 0;
};

class runner : public QObject
{
	Q_OBJECT
		using gen = std::shared_ptr<RandGenInterface>;
public:
	runnerSetting2i setting;

	runner(const pos2i pos, runnerSetting2i setting, const gen rand_gen_interface, const gen rand_gen_interface1);

	void nextStep();

	void set_setting(const runnerSetting2i& setting);

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
