#ifndef HUMAN_A_HPP
 #define HUMAN_A_HPP

 #include "Weapon.hpp";

 class HumanA
 {
 private:
	 std::string name;
	 int weapon_type;
 public:
	 HumanA(Weapon *weapon);
	 ~HumanA();
	 void	attack();
 };

 #endif
