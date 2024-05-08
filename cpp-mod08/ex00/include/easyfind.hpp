// incluir header 42

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stdexcept>

typedef std::string str;

class NoValueException : public std::exception
{
	public:
		virtual const char *	what() const throw();
};

template<typename T>
int	easyfind(T const & array, int val);

#endif