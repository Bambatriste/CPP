#include <string>
#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int
	main(void)
{
	DiamondTrap	diamondtrap("Ditto");

	

	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();
	diamondtrap.attack("enemy");
	std::cout << "energy left : " << diamondtrap.getEnergy() << std::endl;
	diamondtrap.whoAmI();


	std::cout << std::endl << std::endl;
	
	return (0);
}

