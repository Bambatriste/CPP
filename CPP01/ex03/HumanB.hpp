#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	int weapon_type;
public:
	HumanB(void);
	~HumanB();
	void	attack();
};

#endif
