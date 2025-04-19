#include "Zombie.h"

int	main(void)
{
	int num = 5;
	Zombie* zombie_horde = zombieHorde(num, "horde");
	for (int i = 0; i < num; i++)
	{
		std::cout << i << ": ptr " << zombie_horde << ": ";
		zombie_horde->announce();
		zombie_horde += 1;
	}
}
