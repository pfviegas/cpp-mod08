// incluir header 42

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <string>
#include <stack>
#include <list>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		~MutantStack();

		MutantStack<T>& operator=(MutantStack<T> const &other);

		typedef	typename std::stack<T>::container_type::iterator	iterator;
		iterator			begin();
		iterator			end();
};

#include "../src/MutantStack.tpp"

#endif