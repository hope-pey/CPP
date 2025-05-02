#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string secret;
    public:
        Contact();
        ~Contact( void );
  
        void get_contact(std::string *array);
        
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nickname() const;
        std::string get_phone() const;
        std::string get_secret() const;

        void display_contact(void) const;
        bool is_valid() const;
};

Contact   set_contact();

#endif