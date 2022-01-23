#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name):_name(name)
{
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

 void	HumanB::attack()
 {
	 if (this->_weapon)
	 {
		std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() 
	 	<< std::endl;
	 }
	 else
	 {
		 std::cout << this->_name << " attacks with his fists because he has no weapon" << std::endl;
	 }

 }

 
