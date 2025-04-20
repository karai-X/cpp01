#include "HumanA.hpp"

// HumanA::HumanA()
// {
// }

HumanA::HumanA(std::string name_input, Weapon &weapon_input) : name(name_input), weapon(weapon_input)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
