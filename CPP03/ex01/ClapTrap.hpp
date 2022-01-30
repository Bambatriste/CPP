#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const &src);
		~ClapTrap();
		ClapTrap &operator=( ClapTrap const &rhs);
		void 			attack(const std::string &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		void 			setDamage(unsigned int damage_value);
		unsigned int  	getDamage();
		void 			setHitpoints(unsigned int hitpoints_value);
		unsigned int	getHitpoints();
		void 			setEnergy(unsigned int energy_value);
		unsigned int	getEnergy();
		void 			setName(std::string name);
		std::string		getName();
	private:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _attack_damage;
		unsigned int _energy_points;
};

std::ostream &operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */