#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "DEBUG printed" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO printed" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING printed" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR printed" << std::endl;
}

void Harl::complain(std::string level)
{
	int N = 4;
	std::string find[N] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < N; i++)
	{
		if (level == find[i])
		{
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "Invalid Level" << std::endl;
}
