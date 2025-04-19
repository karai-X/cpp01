#include "Zombie.h"

int	main(void)
{
	int num = 5;
	Zombie* zombie_horde = zombieHorde(num, "horde");
	for (int i = 0; i < num; i++)
	{
		std::cout << i << ": ptr " << &(zombie_horde[i]) << ": ";
		zombie_horde[i].announce();
	}
	delete[] zombie_horde;
}
