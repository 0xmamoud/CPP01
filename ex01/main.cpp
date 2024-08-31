#include "Zombie.hpp"

int main()
{
	{
		int size = 5;
		Zombie *zombies = zombieHorde(size, "Foo");
		for (size_t i = 0; i < size; i++)
		{
			zombies[i].announce();
		}
		delete [] zombies;
	}
	{
		int size = 10;
		Zombie *zombies = zombieHorde(size, "Bar");
		for (size_t i = 0; i < size; i++)
		{
			zombies[i].announce();
		}
		delete [] zombies;
	}
	return 0;
}
