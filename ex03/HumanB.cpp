#include "HumanB.hpp"

// HumanB::HumanB()
// {
// }

HumanB::HumanB(std::string name_input)
{
	name = name_input;
}

HumanB::~HumanB(void)
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon_input)
{
	weapon = &weapon_input;
}
