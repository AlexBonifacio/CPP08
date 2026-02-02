
#include "easyfind.hpp"
#include <vector>

int main(void)
{

try {

	std::vector<int> vector_array;

	for (int i = 0; i < 10; i++) {
		vector_array.push_back(i+2);
	}


		int b = 4;
		int c = 42;
		std::vector<int>::iterator vit = easyfind(vector_array, b);
		std::cout << b << " has been found at index " << std::distance(vector_array.begin(), vit) << '\n';
		easyfind(vector_array, c);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}
	return 0;
}