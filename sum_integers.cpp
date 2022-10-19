#include <iostream>

template<typename T>
T sum_integers(T a, T b)
{
	T ret = 0;
	if (a > b) {
		ret = 0;
	} else {
		ret += a + (sum_integers((a + 1), b));
	}

	return ret;
}

int main()
{
	std::cout << sum_integers(1, 10) << std::endl;
	return 0;
}
