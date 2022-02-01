#ifndef WRONG_WrongAnimal_HPP
# define WRONG_WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const&src);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const & hs);
		std::string getType() const;
		void makeSound() const;
	protected:
		std::string type;
		

};

std::ostream &operator<<( std::ostream &o, WrongAnimal const &i);

#endif /* ********************************************************** WRONG_WrongAnimal_H */