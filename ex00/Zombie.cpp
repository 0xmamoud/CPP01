#include "Zombie.hpp"

Zombie::Zombie(std::string _name) {
	this->name = _name;	
}

Zombie::~Zombie() {
	std::cout << this->name << ": destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}