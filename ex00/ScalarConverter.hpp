#include <string>

class ScalarConverter
{
	
	public:
		static void convert(const std::string &str);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();

		ScalarConverter &operator=(const ScalarConverter &copy);
	
		static void _printConvertChar(double n, bool isPossible);
		static void _printConvertInt(double n, bool isPossible);
		static void _printConvertFloat(double n, bool isPossible);
		static void _printConvertDouble(double n, bool isPossible);

};
