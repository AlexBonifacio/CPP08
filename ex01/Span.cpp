
#include <cstdlib>
#include "Span.hpp"

Span::Span(unsigned int size) : _size(size), _addeds(0)
{}

Span::Span(const Span& copy) : _size(copy._size)
{}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_size = other._size;	
	}

	return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int nb)
{
	if (_addeds > _size)
	_ptr.push_back(nb);
	_addeds++;
}