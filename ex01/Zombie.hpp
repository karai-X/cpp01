#include <iostream>
#include <string>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie(std::string);
	Zombie();
	~Zombie();
	void announce(void);
};
