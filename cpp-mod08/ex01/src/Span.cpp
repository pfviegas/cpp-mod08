// incluir header 42

#include "../include/Span.hpp"

// Default Constructor
Span::Span() : _maxSize(0), _size(0) {}

// Parameterized Constructor
Span::Span(unsigned int N) : _maxSize(N), _size(0) {}

// Copy Constructor
Span::Span(Span const &other)
{
	*this = other;
}

// Destructor
Span::~Span() {}

// Copy assignment operator
Span &	Span::operator=(Span const &other)
{
	if (this != &other) {
		this->_array = other._array;
		this->_maxSize = other._maxSize;
		this->_size = other._size;
	}
	return (*this);
}

// Member functions

