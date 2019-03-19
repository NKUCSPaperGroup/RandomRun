#pragma once
#include <vector>
#include "stdafx.h"
#include "position.h"
#include "runner.h"

using std::vector;

class path2i : public QObject
{
	Q_OBJECT

public:
	explicit path2i(QObject* const parent)
		: QObject(parent)
	{
	}

	explicit path2i(runner2i* parent)
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

class path2d : public QObject
{
	Q_OBJECT

public:
	explicit path2d(QObject* const parent)
		: QObject(parent)
	{
	}

	explicit path2d(runner2d* parent)
		: QObject(parent)
	{
		connect(parent, SIGNAL(positionChanged(pos2d, pos2d)), this, SLOT(push_history(pos2d, pos2d)));
	}

	vector<pos2d>& history()
	{
		return history_;
	}

private:
	vector<pos2d> history_;
public slots:
	void push_history(pos2d pre, pos2d now);
};