#pragma once
#include "stdafx.h"
#include "positionChangedEvent.h"
#include <ostream>
/**
 * \brief describe the position
 * \tparam T a type of number.
 * \tparam n the size of position
 */
template <typename T, size_t n>
class Position;

/**
 * \brief 2D double
 */
using pos2d = Position<double, 2>;
/**
 * \brief 2D integer
 */
using pos2i = Position<int, 2>;

template <typename T, size_t n>
class Position : public positionChangedEvent
{
	friend class positionChangedEvent;
public:
	Position();

	Position(std::initializer_list<T> data);

	~Position();

	/**
	 * \brief get the position, get(1) is x, get(2) is y...
	 * \param i the index of the position ,i in [1,n]
	 * \return return the position,return 0 if out of bound.
	 */
	T get(size_t i);

	/**
	 * \brief set the position
	 * \param i the index of the position ,i in [1,n]
	 * \param v the value
	 */
	void set(size_t i, T v);

	T posX();

	T posY();

	T posZ();

	void posX(T v);

	void posY(T v);

	void posZ(T v);

	friend std::ostream& operator<<(std::ostream& os, const Position<T, n>& obj)
	{
		os << "(";
		for (int i = 0; i < n - 1; ++i)
		{
			os << obj.nums_[i] << ',';
		}
		os << obj.nums_[n - 1];
		os << ")";
		return os;
	}

private:
	T* nums_;
};

#pragma region Imp

template <typename T, size_t n>
Position<T, n>::Position()
{
	nums_ = new T[n];
}

template <typename T, size_t n>
Position<T, n>::Position(std::initializer_list<T> data) : Position()
{
	const size_t min = std::min(data.size(), n);
	auto p = data.begin();
	for (size_t i = 0; i < min; ++i)
	{
		nums_[i] = *p++;
	}
}

template <typename T, size_t n>
Position<T, n>::~Position()
{
	delete[] nums_;
}

template <typename T, size_t n>
T Position<T, n>::get(size_t i)
{
	if (i <= n)
		return nums_[i - 1];
	return 0;
}

template <typename T, size_t n>
void Position<T, n>::set(size_t i, T v)
{
	if (i <= n)
	{
		nums_[i - 1] = v;
		emit positionChanged();
	}
}

template <typename T, size_t n>
T Position<T, n>::posX()
{
	return get(1);
}

template <typename T, size_t n>
T Position<T, n>::posY()
{
	return get(2);
}

template <typename T, size_t n>
T Position<T, n>::posZ()
{
	return get(3);
}

template <typename T, size_t n>
void Position<T, n>::posX(T v)
{
	set(1, v);
}

template <typename T, size_t n>
void Position<T, n>::posY(T v)
{
	set(2, v);
}

template <typename T, size_t n>
void Position<T, n>::posZ(T v)
{
	set(3, v);
}

#pragma endregion
