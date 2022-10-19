#include <iostream>

template<typename T>
auto f(T g)
{
	return g(2);
}

int main()
{
	std::cout << f([](auto z){ return z * (z + 1); }) << std::endl;
	return 0;
}
