#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
  private:
	std::string name;
	Weapon &weapon;

  public:
	// HumanA();
	HumanA(std::string name_input, Weapon &weapon_input);
	~HumanA();
	void attack();
};

#endif
