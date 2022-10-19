#include <iostream>

template<typename T>
T cube(T x)
{
	return x * x * x;
}

template<typename T>
T sum_cubes(T a, T b)
{
	T ret = 0;
	if (a > b) {
		ret = 0;
	} else {
		ret += (cube(a) + sum_cubes((a + 1), b));
	}

	return ret;
}

int main()
{
	std::cout << sum_cubes(1, 10) << std::endl;
	return 0;
}
