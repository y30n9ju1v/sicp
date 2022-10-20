#include <iostream>
#include "square.hpp"
#include "average.hpp"

template <typename T>
auto average_damp(T f)
{
	return [f](auto x) { return _average(x, f(x)); };
}

int main()
{
	std::cout << average_damp(_square<int>)(10) << std::endl;
	return 0;
}
