#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	setHitpoints(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src):ClapTrap(src)
{
	std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " has been destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//};
	ClapTrap::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void FragTrap::attack(const std::string &target)
{
	if (getEnergy() > 0)
	{
		unsigned int energy = getEnergy();
		std::cout << getName() << " the FragTrap deals " << getDamage() << " to " << target << std::endl;
		setEnergy(--energy);
	}
	else
	{
		std::cout << getName() << " The FragTrap could not attack because it had no more energy !" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " raises his hand and yells: 'HIGH FIVE GUYS !!'" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */