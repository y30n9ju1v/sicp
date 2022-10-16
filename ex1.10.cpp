#include <iostream>

template <typename T, typename U>
inline auto _A(T x, U y)
{
	int ret = 0;
	if (y == 0) {
		ret = 0;
	} else if (x == 0) {
		ret = 2 * y;
	} else if (y == 1) {
		ret = 2;
	} else {
		ret = _A(x - 1, _A(x, y - 1));
	}
	return ret;
}

int main()
{
	std::cout << _A(1, 10) << std::endl;
	std::cout << _A(2, 4) << std::endl;
	std::cout << _A(3, 3) << std::endl;
	return 0;
}
