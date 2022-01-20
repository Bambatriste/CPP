#include "contact.class.hpp"

    Contact::Contact(void)
    {
        return;
    }

    Contact::~Contact(void)
    {
        return;
    }

    void    Contact::setinfos(void)
    {
        std::cout << "please enter contact first name" << std::endl;
        std::getline(std::cin, this->contact_data[FIRST_NAME]);
        std::cout << "please enter contact last name" << std::endl;
        std::getline(std::cin, this->contact_data[LAST_NAME]);
        std::cout << "please enter contact nickname" << std::endl;
        std::getline(std::cin, this->contact_data[NICKNAME]);
        std::cout << "please enter contact phone number" << std::endl;
        std::getline(std::cin, this->contact_data[PHONE_NBR]);
        std::cout << "please enter contact darkest secret" << std::endl;
        std::getline(std::cin, this->contact_data[SECRET]);
    }

    void    Contact::print_contact(void)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << "|";
            std::cout << std::setw(10);
            std::cout << this->contact_data[i];
        }
        std::cout << "|";
        std::cout << std::endl;
    }
