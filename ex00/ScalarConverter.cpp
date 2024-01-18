#include "ScalarConverter.hpp"
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <string>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (&copy == this)
		return *this;
	return *this;
}

void ScalarConverter::convert(const std::string &str)
{
	char *end;
	double n;
	bool isPossible = true;

	n = std::strtod(str.c_str(), &end);

	if (str.length() == 1 && !isdigit(str[0]))
	{
		n = str[0];
	}
	else if (n == 0 && !isdigit(str[0]))
	{
		isPossible = false;
	}

	_printConvertChar(n, isPossible);
	_printConvertInt(n, isPossible);
	_printConvertFloat(n, isPossible);
	_printConvertDouble(n, isPossible);
}

void ScalarConverter::_printConvertInt(double n, bool isPossible)
{
	if (isPossible)
	{
		std::cout << "int: " << static_cast<int>(n) << std::endl;
	}
	else
	{
		std::cout << "int: impossible" << std::endl;
	}
}

void ScalarConverter::_printConvertFloat(double n, bool isPossible)
{
	if (isPossible)
	{
		std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
	}
}

void ScalarConverter::_printConvertDouble(double n, bool isPossible)
{
	if (isPossible)
	{
		std::cout << "double: " << n << std::endl;
	}
	else
	{
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::_printConvertChar(double n, bool isPossible)
{
	char c = static_cast<char>(n);

	std::cout << "char: ";

	if (!isPossible)
	{
		std::cout << "impossible";
	}
	else if (isprint(c))
	{
		std::cout << "'" << c << "'";
	}
	else
	{
		std::cout << "Non displayable";
	}

	std::cout << std::endl;
}
