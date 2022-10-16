#include <iostream>

template<int a, int b, int count>
struct _fibIter
{
	static constexpr int value = _fibIter<a + b, a, count - 1>::value;
};

template<int a, int b>
struct _fibIter<a, b, 0>
{
	static constexpr int value = b;
};

template<int N>
struct _fib
{
	static constexpr int value = _fibIter<1, 0, N>::value;
};

int main()
{
	std::cout << _fib<5>::value << std::endl;
	return 0;
}
