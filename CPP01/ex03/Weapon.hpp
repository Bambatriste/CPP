#ifndef WEAPON_HPP
 #define WEAPON_HPP
 
 #include <string>

 class Weapon
 {
 	private:
 		std::string _name;
		 int weapon_type;
 	public:
 		Weapon(std::string name);
		~Weapon();
		int getType() const;
		void	setType(int);
 };

#endif

 
