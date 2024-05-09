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
Span &Span::operator=(Span const &other)
{
	if (this != &other) {
		this->_array = other._array;
		this->_maxSize = other._maxSize;
		this->_size = other._size;
	}
	return (*this);
}

// Member functions
void Span::addNumber(int n)
{
	if (this->_size == this->_maxSize)
		throw Span::MaxNumbersException();
	this->_array.push_back(n);
	this->_size++;
}

void Span::addBulk(int num)
{
	if (this->_size + num > this->_maxSize)
		throw Span::BulkMaxNumbersException();
	
	int seed;
	int random_value;

	// use a more precise time seed to avoid duplicate values
	seed = static_cast<int>(std::time(0));
	// increment the seed to ensure randomness.
	std::srand(seed++);

	for (int i = 0; i < num; i++)
	{
		// generates a random number between 1 and 1000.
		random_value = std::rand() % 1000 + 1;
		this->addNumber(random_value);
		std::cout << this->_size << " / " << this->_maxSize << " : " << random_value << " added"<< std::endl;
	}
}

int Span::shortestSpan()
{
	if (_array.size() < 2)
	{
		if (_array.empty())	
			throw Span::NoNumberException();
		else
			throw Span::OneNumberException();
	}

	// Copy and sort original array 
	std::vector<int> sortedArray(_array);
	std::sort(sortedArray.begin(), sortedArray.end());

	int shortest = INT_MAX;
	
	for (size_t i = 1; i < sortedArray.size(); ++i)
	{
		int span = sortedArray[i] - sortedArray[i - 1];
		if (span < shortest)
			shortest = span;
		}

	return (shortest);
}

int Span::longestSpan() const
{
	if (!this->_array.size())
		throw Span::NoNumberException();
	if (this->_array.size() == 1)
		throw Span::OneNumberException();
		
	int	max = *std::max_element(this->_array.begin(), this->_array.end());
	int	min = *std::min_element(this->_array.begin(), this->_array.end());

	return (max - min);
}

const char* Span::BulkMaxNumbersException::what() const throw()
{
	return ("Maximum size will be reached, can't add...");
}

const char* Span::MaxNumbersException::what() const throw()
{
	return ("Impossible to add a new number: Maximum size reached...");
}

const char* Span::NoNumberException::what() const throw()
{
	return ("No numbers stored...");
}

const char* Span::OneNumberException::what() const throw()
{
	return ("Only one number stored...");
}
