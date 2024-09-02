#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "[USAGE]: ./harlFilter level" << std::endl;
		exit(EXIT_FAILURE);
	}

	Harl harl;

	harl.complain(av[1]);

	return 0;
}
