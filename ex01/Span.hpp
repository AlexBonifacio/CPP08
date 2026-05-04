
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
	void rangeNumbers(Iterator begin, Iterator end);

private:
	std::vector<int> _v_numbers;
	Span();
	unsigned int _size;
};

std::ostream &operator<<(std::ostream &os, const Span &span);

#include "Span.tpp"