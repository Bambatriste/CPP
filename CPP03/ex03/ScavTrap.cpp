#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	setHitpoints(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "ScavTrap " << getName() << " has been created" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src): ClapTrap(src)
{
	std::cout << "ScavTrap " << getName() << " has been created" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " has been destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const std::string &target)
{
	if (getEnergy() > 0)
	{
		unsigned int energy = getEnergy();
		std::cout << getName() << " the ScavTrap deals " << getDamage() << " to " << target << std::endl;
		setEnergy(--energy);
	}
	else
	{
		std::cout << getName() << " The ScavTrap could not attack because it had no more energy !" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << getName() << " The Scavtrap has entered guard mode" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */