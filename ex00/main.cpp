#include <string>
#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "2 args please" << std::endl;
		return 1;
	}
	std::string test = av[1];

	ScalarConverter::convert(test);
}
