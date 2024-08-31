#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "------------------------------" << std::endl;
	std::cout << "str memory address: " << &str << std::endl;
	std::cout << "address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "address help by stringREF: " << &stringREF << std::endl;

	std::cout << "------------------------------" << std::endl;
	std::cout << "str value: " << str << std::endl;
	std::cout << "stringPTR value pointed: " << *stringPTR << std::endl;
	std::cout << "stringREF value pointed: " << stringREF << std::endl;
	return 0;
}
