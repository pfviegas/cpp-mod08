// incluir header 42

#include "../include/MutantStack.hpp"

// Default Constructor
template<typename T>
MutantStack<T>::MutantStack() {}

// Copy Constructor
template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &other) : std::stack<T>(other) {}

// Destructor
template<typename T>
MutantStack<T>::~MutantStack() {}

// Copy assignment operator
template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const &other)
{
	return (*this);
}

// Member functions
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return (std::stack<T>::c.end());
}
