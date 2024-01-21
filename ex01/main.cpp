#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data data;

	data.str = "Hey !";

	std::cout << data.str << std::endl;
	
	uintptr_t uintptr = Serializer::serialize(&data);

	std::cout << uintptr << std::endl;

	std::cout << Serializer::deserialize(uintptr)->str << std::endl;
}
