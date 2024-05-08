// incluir header 42

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "../include/easyfind.hpp"

template<typename T>
int easyfind(const T& data, int val)
{
	for (typename T::const_iterator it = data.begin(); it != data.end(); ++it)
	{
		if (*it == val)
			return (*it);
	}
	throw NoValueException();
}

const char* NoValueException::what() const throw()
{
	return "No occurrence found...";
}

#endif