#include "Span.hpp"

template <typename Iterator>
void Span::rangeNumbers(Iterator begin, Iterator end)
{
	size_t dist = std::distance(begin, end);

	if (dist > _size -  _v_numbers.size())
		throw std::out_of_range("Range: too big");

	while (begin != end)
	{
		_v_numbers.push_back(*begin);
		++begin;
	}
}