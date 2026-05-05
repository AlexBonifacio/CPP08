
#pragma once

#include <vector>
#include <stdexcept>
#include <iostream>
#include <iterator>

class Span
{
public:
	Span(unsigned int size);
	Span(const Span &copy);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int nb);
	int shortestSpan() const;
	long longestSpan() const;

	const std::vector<int> &getVector() const;

	template <typename Iterator>
	void rangeNumbers(Iterator begin, Iterator end)
	{
		size_t dist = std::distance(begin, end);

		if (dist > _size - _v_numbers.size())
			throw std::out_of_range("Range: too big");

		while (begin != end)
		{
			_v_numbers.push_back(*begin);
			++begin;
		}
	}

private:
	std::vector<int> _v_numbers;
	Span();
	unsigned int _size;
};

std::ostream &operator<<(std::ostream &os, const Span &span);
