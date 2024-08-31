#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	randomChump("Foo");
	Zombie *zombie = newZombie("Bar");
	zombie->announce();
	delete zombie;
	return 0;
}
