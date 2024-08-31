#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string _type): type(_type) {};

Weapon::~Weapon(){};

void Weapon::setType(std::string _type) {
	this->type = _type;
}

std::string Weapon::getType( void ) {
	return this->type;
}


