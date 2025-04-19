#include "Zombie.h"

int	main(void)
{
	Zombie* zombie = newZombie("heap_zombie");
	zombie->announce();
	randomChump("stack_zombie");
	delete zombie;
}

