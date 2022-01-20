#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"

class Phonebook
{
    public:
        Phonebook(int nb_users);
        ~Phonebook(void);
        int get_usernb();
        int add_contact(void);
        int search_contact(void);
        int exit_phonebook(void);
    private:
        Contact contacts[8];
        int nb_user;
};

#endif
