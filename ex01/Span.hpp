
#pragma once

#include <vector>

class Span
{
	public:
		Span(unsigned int size);
		Span(const Span& copy);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(unsigned int nb);


		std::vector<unsigned int> _ptr;

	private:
		Span();
		unsigned int _size;
		unsigned int _addeds;
};