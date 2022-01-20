#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

#define FIRST_NAME 0
#define LAST_NAME 1
#define NICKNAME 2
#define PHONE_NBR 3
#define SECRET 4

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void            setinfos();
        void            print_contact();
    private :
        std::string contact_data[5];
        //std::string firstname;
        //std::string last_name;
        //std::string nickname;
        //std::string phone_number;
        //std::string darkest_secret;
};
#endif

