#pragma once
#include "stdafx.h"
#include <ostream>
using std::array;

class pos2i
{
public:
	int x() const;

	int y() const;

	void set(int x, int y);

	pos2i();

	pos2i(int x, int y);

	pos2i(const pos2i& other);

	pos2i(pos2i&& other) noexcept;

	pos2i& operator=(const pos2i& other);

	pos2i copy() const;

	friend pos2i operator+(const pos2i& a, const pos2i& b);

	friend std::ostream& operator<<(std::ostream& os, const pos2i& obj);

private:
	array<int, 2> pos_{ 0, 0 };
};

class pos2d
{
public:
	double x() const;

	double y() const;

	void set(double x, double y);

	pos2d();

	pos2d(double x, double y);

	pos2d(const pos2d& other);

	pos2d(pos2d&& other) noexcept;

	pos2d& operator=(const pos2d& other);

	pos2d copy() const;

	friend pos2d operator+(const pos2d& a, const pos2d& b);

	friend std::ostream& operator<<(std::ostream& os, const pos2d& obj);

private:
	array<double, 2> pos_{ 0, 0 };
};
