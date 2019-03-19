#include "stdafx.h"
#include "path.h"

void path2i::push_history(pos2i pre, pos2i now)
{
	if (history_.size() == 0)history_.push_back(pre);
	history_.push_back(now);
}

void path2d::push_history(pos2d pre, pos2d now)
{
	if (history_.size() == 0)history_.push_back(pre);
	history_.push_back(now);
}