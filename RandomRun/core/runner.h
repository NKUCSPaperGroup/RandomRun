#pragma once
#include "position.h"

template <typename T, size_t n>
class RunnerInterface : public positionChangedEvent
{
public:
	virtual ~RunnerInterface() = default;
private:
	/**
	 * \brief do next step
	 */
	virtual void nextStep() = 0;
	/**
	 * \brief get the position
	 * \return position
	 */
	virtual Position<T, n> getPosition() = 0;
};
