// incluir header 42

#include <set>
#include "../include/MutantStack.hpp"

int main()
{
	std::cout << "MutantStack<int>" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << "std::list" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << std::endl << "std::set" << std::endl;
	{
		std::set<int> mstack;
		mstack.insert(17);
		mstack.insert(5);
/*
		std::cout << *mstack.begin() << std::endl;

		mstack.erase(mstack.begin());

		std::cout << mstack.size() << std::endl;
*/

		mstack.insert(3);
		mstack.insert(5);
		mstack.insert(737);
		//[...]
		mstack.insert(0);

		for (std::set<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
			std::cout << *it << std::endl;
	
		std::set<int> s(mstack);
	}
	return (0);
}

