#pragma once

#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);

	if (it != container.end())
		return it;
	else
		throw std::out_of_range("easyfind: the value couldn't be found");
}

template<typename T>
typename T::const_iterator easyfind(const T& container, int toFind)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);

	if (it != container.end())
		return it;
	else
		throw std::out_of_range("easyfind: the value couldn't be found");
}