#include <string>

class ScalarConverter
{
	
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();

		ScalarConverter &operator=(const ScalarConverter &copy);

		void convert(const std::string &str);

	private:
		std::string _str;

		void convert_char();
		void convert_int();
		void convert_float();
		void convert_double();

};
