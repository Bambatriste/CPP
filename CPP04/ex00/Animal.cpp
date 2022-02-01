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
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "A random animal sound " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string  Animal::getType() const
{
	return (this->type);

}


/* ************************************************************************** */