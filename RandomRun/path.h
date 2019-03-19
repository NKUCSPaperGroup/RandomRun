#pragma once
#include <vector>
#include "stdafx.h"
#include "position.h"
#include "runner.h"

using std::vector;

class path : public QObject
{
	Q_OBJECT

public:
	explicit path(QObject* const parent)
		: QObject(parent)
	{
	}

	explicit path(runner* parent)
		: QObject(parent)
	{
		connect(parent, SIGNAL(positionChanged(pos2i, pos2i)), this, SLOT(push_history(pos2i, pos2i)));
	}

	vector<pos2i>& history()
	{
		return history_;
	}

private:
	vector<pos2i> history_;
public slots:
	void push_history(pos2i pre, pos2i now);
};

inline void path::push_history(pos2i pre, pos2i now)
{
	if (history_.size() == 0)history_.push_back(pre);
	history_.push_back(now);
}
