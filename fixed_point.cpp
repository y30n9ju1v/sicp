#include <iostream>
#include <functional>
#include <cmath>

constexpr auto tolerance{0.00001};

template <typename T, typename U>
auto fixed_point(T f, U first_guess)
{
	auto close_enough = [](auto v1, auto v2) { return std::abs(v1 - v2) < tolerance; };

	std::function<double(double)> _try;
	_try = [f, close_enough, &_try](double guess) {
		auto next = f(guess);
		if (close_enough(guess, next)) {
			return next;
		} else {
			return _try(next);
		}
	};

	return _try(first_guess);
}

int main()
{
	auto _cos = [](auto v) { return std::cos(v); };

	std::cout << fixed_point(_cos, 1.0) << std::endl;
	std::cout << fixed_point([](auto y) { return std::sin(y) + std::cos(y); }, 1.0) << std::endl;
	return 0;
}
