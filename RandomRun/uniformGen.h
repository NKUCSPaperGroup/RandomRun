#pragma once
#include "stdafx.h"
#include "randGen.h"
class uniformGen : public RandGenInterface
{
public:
	uniformGen() = default;
	~uniformGen() = default;
private:
	std::shuffle_order_engine<std::default_random_engine, 256> engine_{};
public:
	double getDRand(double from, double to) override
	{
		const std::uniform_real_distribution<double> di(from, to);
		return di(engine_);
	}
	int getIRand(int from, int to) override
	{
		const std::uniform_int_distribution<int> di(from, to);
		return di(engine_);
	}
};