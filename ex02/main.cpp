
#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "const MutantStack:\n";
	const MutantStack<int> c_stack = mstack;
	MutantStack<int>::const_iterator cit = c_stack.begin();
	MutantStack<int>::const_iterator cite = c_stack.end();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	return 0;
}

// #include <list>
// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	std::cout << "std::list\n";
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::cout << "const std::list:\n";
// 	const std::list<int> c_stack = mstack;
// 	std::list<int>::const_iterator cit = c_stack.begin();
// 	std::list<int>::const_iterator cite = c_stack.end();
// 	while (cit != cite)
// 	{
// 		std::cout << *cit << std::endl;
// 		++cit;
// 	}

// 	return 0;
// }