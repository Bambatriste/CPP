#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("Roger");
	FragTrap b("Martin");

	std::cout << "Martin has " << b.getHitpoints() << " hitpoints" << std::endl;
	a.attack("Martin");
	b.takeDamage(a.getDamage());
	std::cout << "Martin has " << b.getHitpoints() << " hitpoints left" << std::endl;
	b.beRepaired(10);
	std::cout << "Martin has " << b.getHitpoints() << " hitpoints" << std::endl;
	a.attack("Martin");
	b.takeDamage(a.getDamage());
	a.attack("Martin");
	b.takeDamage(a.getDamage());
	a.highFivesGuys();
	b.highFivesGuys();
	std::cout << "Martin has " << b.getHitpoints() << " hitpoints left" << std::endl;
	std::cout << "Roger has " << a.getEnergy() << " energy points left" << std::endl;
	std::cout << "Martin has " << b.getEnergy() << " energy points left" << std::endl;

	/*std::cout << std::endl << std::endl << std::endl;

	ClapTrap c("Joe");
	ClapTrap d("Donald");

	std::cout << "Donald has " << d.getHitpoints() << " hitpoints" << std::endl;
	c.attack("Donald");
	d.takeDamage(c.getDamage());
	std::cout << "Donald has " << d.getHitpoints() << " hitpoints left" << std::endl;
	d.beRepaired(10);
	std::cout << "Donald has " << d.getHitpoints() << " hitpoints" << std::endl;
	c.attack("Donald");
	d.takeDamage(c.getDamage());
	c.attack("Donald");
	d.takeDamage(c.getDamage());
	//c.guardGate();
	//d.guardGate();
	std::cout << "Donald has " << d.getHitpoints() << " hitpoints left" << std::endl;
	std::cout << "Joe has " << c.getEnergy() << " energy points left" << std::endl;
	std::cout << "Donald has " << d.getEnergy() << " energy points left" << std::endl;
	*/

	return (0);
}