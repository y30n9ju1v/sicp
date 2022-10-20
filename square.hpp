template <typename T>
auto _square(T x) -> decltype(x * x) 
{
	return x * x;
}
