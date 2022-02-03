#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "an Animal was created by default constructor" << std::endl; 
}

Animal::Animal(const Animal &src)
{
	type = src.type;
	*this = src;
	std::cout << "an Animal was created by copy constructor" << std::endl; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "an Animal was destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=(Animal const &rhs)
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	std::cout << "copie par assigment  ANIMAL !!!!!!!!!!!!!!!!!!!!!!" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string  Animal::getType() const
{
	return (this->type);

}


/* ************************************************************************** */