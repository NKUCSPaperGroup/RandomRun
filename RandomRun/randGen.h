#pragma once
class RandGenInterface
{
public:
	virtual ~RandGenInterface() = default;

	/**
	 * \brief get a rand number
	 * \return a number in [from,to)
	 */
	virtual double getDRand(double from, double to) = 0;
	/**
	 * \brief get a rand number
	 * \return a number in [from,to]
	 */
	virtual int getIRand(int from, int to) = 0;
};
