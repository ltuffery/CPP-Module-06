#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

Base * generate(void)
{
	int random = rand() % 3 + 1;

	if (random == 1)
	{
		std::cout << "generate A" << std::endl;
		return new A();
	}
	else if (random == 2)
	{
		std::cout << "generate B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "generate C" << std::endl;
		return new C();
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "p pointer A" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "p pointer B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "p pointer C" << std::endl;
	}
	else
	{
		std::cout << "p pointer unknown" << std::endl;
	}
}

void identify(Base& p)
{
	try {
		
		(void)dynamic_cast<A&>(p);
		
		std::cout << "p referance A" << std::endl;
	
	} catch(std::exception e) {
		
		try {

			(void)dynamic_cast<B&>(p);

			std::cout << "p referance B" << std::endl;

		} catch(std::exception e) {
		
			try {

				(void)dynamic_cast<C&>(p);

				std::cout << "p referance C" << std::endl;

			} catch(std::exception e) {
				std::cout << "p referance unknown" << std::endl;
			}
		}
	}
}

int main()
{
	srand(time(NULL));

	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
}
