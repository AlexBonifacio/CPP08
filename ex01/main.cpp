
#include "Span.hpp"
#include <iostream>
#include <cstdlib>	 // rand
#include <algorithm> // min_element, max_element

int main(void)
{
	std::srand(time(NULL));

	std::vector<unsigned int> random;
	for (size_t i = 0; i < 10; i++)
		random.push_back(std::rand() % 1000);

	std::vector<unsigned int> empty;
	std::vector<unsigned int> ascendant;
	for (int i = 0; i < 5; i++)
	{
		ascendant.push_back(i);
	}

	std::vector<unsigned int> descendant;
	for (int i = 5; i > 0; i--)
	{
		descendant.push_back(i);
	}

	std::vector<unsigned int> twin;
	for (int i = 0; i < 3; i++)
	{
		twin.push_back(5);
	}

	try
	{

		Span sp1(5);
		// Span sp1(4); // this will throw in rangeNumbers because the range is too big
		sp1.rangeNumbers(ascendant.begin(), ascendant.end());
		std::cout << "Ascendant tests:\n";
		std::cout << sp1 << "\n";
		std::cout << "Shortest span: " << sp1.shortestSpan() << "\n";
		std::cout << "Longest span: " << sp1.longestSpan() << "\n\n";

		Span sp2(5);
		sp2.rangeNumbers(descendant.begin(), descendant.end());
		std::cout << "Descendant tests:\n";
		std::cout << sp2 << "\n";
		std::cout << "Shortest span: " << sp2.shortestSpan() << "\n";
		std::cout << "Longest span: " << sp2.longestSpan() << "\n\n";

		Span sp3(5);
		sp3.rangeNumbers(twin.begin(), twin.end());
		std::cout << "Twin tests:\n";
		std::cout << sp3 << "\n";
		std::cout << "Shortest span: " << sp3.shortestSpan() << "\n";
		std::cout << "Longest span: " << sp3.longestSpan() << "\n\n";

		Span sp4 = Span(5);
		std::cout << "Custom tests:\n";
		sp4.addNumber(1);
		sp4.addNumber(100);
		sp4.addNumber(200);
		sp4.addNumber(400);
		sp4.addNumber(300);
		std::cout << sp4 << "\n";
		std::cout << sp4.shortestSpan() << "\n";
		std::cout << sp4.longestSpan() << "\n";
		std::cout << "\n";

		Span sp5(10000);
		sp5.rangeNumbers(random.begin(), random.end());
		std::cout << "Random tests:\n";
		std::cout << sp5 << "\n";
		std::cout << "Shortest span: " << sp5.shortestSpan() << "\n";
		std::cout << "Longest span: " << sp5.longestSpan() << "\n\n";
		std::cout << "vect min size value: " << *std::min_element(random.begin(), random.end()) << "\n";
		std::cout << "vect max size value: " << *std::max_element(random.begin(), random.end()) << "\n\n";

		Span span(5);

		span.addNumber(10);
		span.addNumber(20);
		span.addNumber(30);
		span.addNumber(25);
		span.addNumber(15);
		// span.addNumber(6);
		std::cout << span << "\n";
		std::cout << "Shortest span: " << span.shortestSpan() << "\n";
		std::cout << "Longest span: " << span.longestSpan() << "\n";

		std::vector<int> test;
		test.push_back(4);
		test.push_back(2);
		test.push_back(3);
		test.push_back(4);

		Span span_empty(5);
		std::cout << "Shortest span: " << span_empty.shortestSpan() << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
