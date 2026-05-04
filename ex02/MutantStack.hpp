#pragma once

#include <stack>

// template <class T, class Container = std::deque<T> > // si on ne precise pas de valeur alors on utilise deque par defaut
// class stack
// {
// 	protected:
// 		Container c;
// };

// std::stack<int> s == std::stack<int, std::deque<int>> s
// std::stack<int, std::vector<int>> s
// stack est un adapateur de conteneur, ce n'est pas un conteneur
// il impose un comportement LIFO avec push, pop, top
// mais laisse le choix du stockage, deque, vector, list

// public:     typedef	       _Sequence			container_type;
// permet de rendre public le type de container
// on utlise typedef typename pour preciser que ce qui suit est un type et lorsque le type est dependant d'un template
// typedef my_int int; -> ok
// typedef T::value_type int -> pas ok
// typedef typename T::value_type int -> ok

// chaque container STL a un type iterator

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
