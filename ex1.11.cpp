#include <iostream>

template<int N>
struct f
{
	static constexpr size_t value = f<N - 1>::value + (2 * f<N - 2>::value) + (3 * f<N - 3>::value);
};

template<>
struct f<2>
{
	static constexpr size_t value = 2;
};

template<>
struct f<1>
{
	static constexpr size_t value = 1;
};

template<>
struct f<0>
{
	static constexpr size_t value = 0;
};

int main()
{
	std::cout << f<0>::value << std::endl;
	std::cout << f<1>::value << std::endl;
	std::cout << f<2>::value << std::endl;
	std::cout << f<3>::value << std::endl;
	std::cout << f<4>::value << std::endl;
	std::cout << f<5>::value << std::endl;
	std::cout << f<6>::value << std::endl;
	std::cout << f<7>::value << std::endl;

	return 0;
}
