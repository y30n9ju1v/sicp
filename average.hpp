template <typename T, typename U>
auto _average(T x, U guess) -> decltype((x + guess) / 2.0)
{
	return (x + guess) / 2.0;
}
