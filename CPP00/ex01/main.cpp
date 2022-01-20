#include "phonebook.class.hpp"
#include <iostream>

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    Phonebook Phonebook(0);

    std::cout << Phonebook.get_usernb() << std::endl;

    Phonebook.add_contact();

    std::cout << std::endl;
    //Phonebook.add_contact();
    //Phonebook.add_contact();
    Phonebook.search_contact();
    //Phonebook.

}
