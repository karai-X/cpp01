#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "address of str: " << &str << std::endl;
	std::cout << "address held by strPTR: " << stringPTR << std::endl;
	std::cout << "address held by strREF: " << &stringREF << std::endl;
	std::cout << "value of str: " << str << std::endl;
	std::cout << "value pointed to by strPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by strREF: " << stringREF << std::endl;
}
