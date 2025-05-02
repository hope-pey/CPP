#include "contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void    print_enter(int index)
{
    if (index == 0)
        std::cout << "Enter first name: ";
    else if (index == 1)
        std::cout << "Enter last name: ";
    else if (index == 2)
        std::cout << "Enter nickname: ";
    else if (index == 3)
        std::cout << "Enter phone_number: ";
    else if (index == 4)
        std::cout << "Enter darkest secret: ";
}

Contact   set_contact()
{
    Contact my_contact;
    std::string array[5];
    std::string enter;
    int index;
    index = 0;
    while (index < 5)
    {
        print_enter(index);
        std::getline(std::cin, array[index]);
        if (array[index].empty())
                    return Contact();
        index++;
    }
    my_contact.get_contact(array);
    return (my_contact);
}

void Contact::get_contact(std::string *array)
{
    first_name = array[0];
    last_name = array[1];
    nickname = array[2];
    phone = array[3];
    secret = array[4];
}

void Contact::display_contact(void) const
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone << std::endl;
    std::cout << "Dark secret: " << secret << std::endl;
}

bool Contact::is_valid() const
{
    return !first_name.empty() && !last_name.empty() && !nickname.empty() &&
            !phone.empty() && !secret.empty();
}

std::string Contact::get_first_name() const { return first_name; }
std::string Contact::get_last_name() const { return last_name; }
std::string Contact::get_nickname() const { return nickname; }
std::string Contact::get_phone() const { return phone; }
std::string Contact::get_secret() const { return secret; }