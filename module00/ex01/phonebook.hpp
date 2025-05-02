#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "contact.hpp"

class   phonebook
{
    private:
        Contact contacts[8];
        int     count;
    public:
        phonebook() : count(0) {}
        void    add_contact();
        std::string truncate(const std::string& str);
        void    search_contact();
        void    dispaly_phonebook();
};

#endif