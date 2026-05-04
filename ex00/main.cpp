
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
	std::vector<int> vector_array;
	std::list<int> lst;

	for (int i = 0; i < 10; i++)
	{
		vector_array.push_back(i * 2);
	}

	for (int i = 0; i < 10; i++)
	{
		lst.push_back(i * 2);
	}

	try
	{

		int b = 4;
		std::vector<int>::iterator vit = easyfind(vector_array, b);
		std::cout << b << " has been found at index " << std::distance(vector_array.begin(), vit) << '\n';

		// Constant vector
		b = 8;
		const std::vector<int> const_arr = vector_array;
		vit = easyfind(vector_array, b);
		std::cout << b << " has been found at index " << std::distance(vector_array.begin(), vit) << '\n';

		// list
		b = 16;
		std::list<int>::iterator it = easyfind(lst, b);
		std::cout << b << " has been found at index " << std::distance(lst.begin(), it) << '\n';

	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}

	try {
		// value not in the array
		easyfind(vector_array, 42);
	}
	catch(const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}
	return 0;
}