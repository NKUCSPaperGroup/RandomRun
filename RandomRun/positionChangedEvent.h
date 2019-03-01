#pragma once
#include "stdafx.h"

class positionChangedEvent : public QObject
{
Q_OBJECT
signals:
	void positionChanged();
};
