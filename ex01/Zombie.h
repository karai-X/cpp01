#ifndef ZOMBIE_H
# define ZOMBIE_H

# include "Zombie.hpp"
# include <new>

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif
