
#include "Span.hpp"

#include <cstdlib>
#include <stdexcept>
#include <algorithm>
#include <iostream>

Span::Span(unsigned int size) : _v_numbers(), _size(size)
{
}

Span::Span(const Span &copy) : _v_numbers(copy._v_numbers), _size(copy._size)
{
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_size = other._size;
		_v_numbers = other._v_numbers;
	}

	return *this;
}

Span::~Span() {}

void Span::addNumber(int nb)
{
	if (_v_numbers.size() < _size)
		_v_numbers.push_back(nb);
	else
		throw std::out_of_range("Span: the container is already full");
}

#include <numeric>
int Span::shortestSpan() const // we are looking for the shortest range between two element
{
	std::vector< int> ordered;
	std::vector< int> tmp;

	if (_v_numbers.size() < 2)
		throw std::logic_error("Span: not enough elements to find a span");

	ordered = _v_numbers;
	std::sort(ordered.begin(), ordered.end());
	tmp = ordered;
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());

	return *std::min_element(tmp.begin() + 1, tmp.end());
}

int Span::longestSpan() const
{
	if (_v_numbers.size() < 2)
		throw std::logic_error("Span: not enough elements to find a span");

	 int min = *std::min_element(_v_numbers.begin(), _v_numbers.end());
	 int max = *std::max_element(_v_numbers.begin(), _v_numbers.end());

	return (max - min);
}

const std::vector<int> &Span::getVector() const { return _v_numbers; };

std::ostream &operator<<(std::ostream &os, const Span &span)
{
	const std::vector<int> &vec = span.getVector();
	for (size_t i = 0; i < vec.size(); i++)
		os << vec[i] << ' ';
	return os;
}
