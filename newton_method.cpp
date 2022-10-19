#include <iostream>

template <typename T>
inline auto _square(T x)
{
	return x * x;
}

template <typename T>
inline auto _abs(T x)
{
	return (x < 0) ? -x : x;
}

template <typename T, typename U>
inline auto _average(T x, U y)
{
	return (x + y) / 2.0;
}

template <typename T, typename U>
inline auto _improve(T guess, U x)
{
	return _average(guess, (x / guess));
}

template <typename T, typename U>
inline bool _goodEnough(T guess, U x)
{
	return (_abs(_square(guess) - x) < 0.001) ? true : false;
}

template <typename T, typename U>
inline auto _sqrtIter(T guess, U x)
{
	if (_goodEnough(guess, x) == true)
	{
		return guess;
	}
	else
	{
		_sqrtIter(_improve(guess, x), x);
	}
}

template <typename T>
auto _sqrt(T x)
{
	return _sqrtIter(1.0, x);
}

int main()
{
	std::cout << _sqrt(9) << std::endl;
	std::cout << _sqrt(100 + 37) << std::endl;
	std::cout << _sqrt(_sqrt(2) + _sqrt(3)) << std::endl;
	std::cout << _square(_sqrt(1000)) << std::endl;

	return 0;
}
