#include "stdafx.h"
#include "position.h"

int pos2i::x() const
{
	return pos_[0];
}

int pos2i::y() const
{
	return pos_[1];
}

void pos2i::set(int x, int y)
{
	pos_[0] = x;
	pos_[1] = y;
}

pos2i::pos2i() : pos2i(0, 0)
{
}

pos2i::pos2i(const int x, const int y)
{
	set(x, y);
}

pos2i::pos2i(const pos2i& other) : pos_(other.pos_)
{
}

pos2i::pos2i(pos2i&& other) noexcept : pos_(other.pos_)
{
}

pos2i& pos2i::operator=(const pos2i& other)
{
	set(other.x(), other.y());
	return *this;
}

pos2i pos2i::copy() const
{
	return pos2i{ *this };
}

pos2i operator+(const pos2i& a, const pos2i& b)
{
	return { a.x() + b.x(), a.y() + b.y() };
}

std::ostream& operator<<(std::ostream& os, const pos2i& obj)
{
	return os << "(" << obj.x() << "," << obj.y() << ")";
}

double pos2d::x() const
{
	return pos_[0];
}

double pos2d::y() const
{
	return pos_[1];
}

void pos2d::set(const double x, const double y)
{
	pos_[0] = x;
	pos_[1] = y;
}

pos2d::pos2d() : pos2d(0, 0)
{
}

pos2d::pos2d(const double x, const double y)
{
	set(x, y);
}

pos2d::pos2d(const pos2d& other) : pos_(other.pos_)
{
}

pos2d::pos2d(pos2d&& other) noexcept : pos_(other.pos_)
{
}

pos2d& pos2d::operator=(const pos2d& other)
{
	set(other.x(), other.y());
	return *this;
}

pos2d pos2d::copy() const
{
	return pos2d{ *this };
}

pos2d operator+(const pos2d& a, const pos2d& b)
{
	return { a.x() + b.x(), a.y() + b.y() };
}

std::ostream& operator<<(std::ostream& os, const pos2d& obj)
{
	return os << "(" << obj.x() << "," << obj.y() << ")";
}