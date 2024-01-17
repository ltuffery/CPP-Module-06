#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(): _str("")
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy): _str("")
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (&copy == this)
		return *this;
	this->_str = copy._str;
	return *this;
}

void ScalarConverter::convert(const std::string &str)
{
	this->_str = str;

	this->convert_char();
	this->convert_int();
	this->convert_float();
	this->convert_double();
}

void ScalarConverter::convert_char()
{

}
