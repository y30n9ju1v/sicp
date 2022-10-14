#include <iostream>

template <typename T, typename U>
auto average(T x, U y)
{
	return (x + y) / 2.0;
}

template <typename T, typename U>
auto improve(T guess, U x)
{
	return average(guess, (x / guess));
}

template <typename T>
auto _square(T x)
{
	return x * x;
}

template <typename T>
auto _abs(T x)
{
	return (x < 0) ? -x : x;
}

template <typename T, typename U>
auto goodEnough(T guess, U x)
{
	return (_abs(_square(guess) - x) < 0.001) ? true : false;
}

template <typename T, typename U>
auto sqrtIter(T guess, U x)
{
	if (goodEnough(guess, x) == true)
	{
		return guess;
	}
	else
	{
		sqrtIter(improve(guess, x), x);
	}
}

template <typename T>
auto _sqrt(T x)
{
	return sqrtIter(1.0, x);
}

int main()
{
	std::cout << _sqrt(9) << std::endl;
	std::cout << _sqrt(100 + 37) << std::endl;
	std::cout << _sqrt(_sqrt(2) + _sqrt(3)) << std::endl;
	std::cout << _square(_sqrt(1000)) << std::endl;

	return 0;
}
