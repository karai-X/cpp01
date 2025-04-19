#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "void" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Zombie " << _name << " constructed" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " destructed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
