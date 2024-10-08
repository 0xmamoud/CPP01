#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put  enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl <<std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*functionPTR[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t statement = 0;
	for (; statement < 4; statement++)
	{
		if (levels[statement] == level) break;
	}
	switch (statement)
	{
	case 0:
	 	(this->*functionPTR[0])();
		(this->*functionPTR[1])();
		(this->*functionPTR[2])();
		(this->*functionPTR[3])();
		break;
	case 1:
		(this->*functionPTR[1])();
		(this->*functionPTR[2])();
		(this->*functionPTR[3])();
		break;
	case 2:
		(this->*functionPTR[2])();
		(this->*functionPTR[3])();
		break;	
	case 3:
		(this->*functionPTR[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}