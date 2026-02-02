
#include "Span.hpp"
#include <iostream>

int main(void)
{
	Span span(5);

	span.addNumber(4);
	span.addNumber(5);
	span.addNumber(5);
	span.addNumber(5);
	span.addNumber(5);
	span.addNumber(9);

	for (int n : span._ptr)
		std::cout << n << ' ';
	return 0;
}