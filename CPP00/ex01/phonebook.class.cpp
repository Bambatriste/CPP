#include <iostream>
#include "phonebook.class.hpp"

Phonebook::Phonebook(int nb_user) : nb_user(nb_user)
{
    std::cout << "constructor call" <<std::endl;
    return;
}

Phonebook::~Phonebook(void)
{
    std::cout << "destructor call" << std::endl;
    return;
}

int Phonebook::get_usernb()
{
    return (this->nb_user);
}

int Phonebook::add_contact()
{
    int usr_nb = get_usernb();
    if (usr_nb < 8)
    {
        this->contacts[usr_nb].setinfos();
        this->nb_user++;
        return (0);
    }
    return (1);
}

int Phonebook::search_contact()
{
    for (int i = 0; i < get_usernb(); i++)
    {
        contacts[i].print_contact();
    }
    return (0);
}
