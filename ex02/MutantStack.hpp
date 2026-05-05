#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator; // je cree un alias iterator pour le type iterator du contenu interne de std::stack<T>
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};
	~MutantStack() {};

	MutantStack &operator=(const MutantStack &other)
	{
		if (this != &other)
			std::stack<T>::operator=(other);
		return (*this);
	}

	iterator begin() { return (this->c.begin()); };
	iterator end() { return (this->c.end()); };
	const_iterator begin() const { return (this->c.begin()); };
	const_iterator end() const { return (this->c.end()); };
};
