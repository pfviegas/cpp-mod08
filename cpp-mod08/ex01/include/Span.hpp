// incluir header 42

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <climits>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <unistd.h>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &other);
		~Span();

		Span &	operator=(Span const &rSym);

		void	addNumber(int n);
		void	addBulk(int n);
		int		shortestSpan();
		int		longestSpan() const;

		class BulkMaxNumbersException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class MaxNumbersException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class NoNumberException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class OneNumberException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};
	private:
		std::vector<int>	_array;
		
		unsigned int		_maxSize;
		unsigned int		_size;

		std::vector<int>	_sort() const;
};

std::ostream& operator<<( std::ostream&, const Span& );

#endif