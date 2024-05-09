// incluir header 42

#include "../include/Span.hpp"

int	main()
{
	try
	{
		Span array(1000000);
//		array.addNumber(1);
//		array.addNumber(2);
//		array.addNumber(3);
//		array.addNumber(4);
//		array.addNumber(5);

//		array.addBulk(1000000);

		std::cout << "Longest Span: " << array.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << array.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}