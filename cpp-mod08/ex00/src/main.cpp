// incluir header 42

#include "easyfind.tpp"

int	main()
{
	{
		std::list<int> lst;
		int result;

		lst.push_back(5);
		lst.push_back(3);
		lst.push_back(9);
		lst.push_back(15);
		lst.push_front(1);

		try
		{
			result = easyfind(lst, 3);
			std::cout << "Value found : " << result << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::list<int> lst;
		int result;

		lst.push_back(5);
		lst.push_back(3);
		lst.push_back(9);
		lst.push_back(15);
		lst.push_front(1);

		try
		{
			result = easyfind(lst, 99);
			std::cout << "Value found : " << result << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}