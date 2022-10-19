#include <iostream>

template<int N>
struct _fib
{
	static constexpr int value = _fib<N-1>::value + _fib<N-2>::value;
};

template<>
struct _fib<0>
{
	static constexpr int value = 0;
};

template<>
struct _fib<1>
{
	static constexpr int value = 1;
};

int main()
{
	std::cout << _fib<5>::value << std::endl;
    return 0;
}
