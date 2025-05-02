#include "phonebook.hpp"

void    save_array(const std::string enter, int index, std::string *array)
{
    if (index < 5)
        array[index] = enter;
    else
        std::cout << "Error in saving, the array is full" << std::endl;
}

void    phonebook::add_contact()
{
    Contact new_contact;

    new_contact = set_contact();
    int i = 0;
    if (count >= 8)
    {
        std::cout << "Phonebook is full, old contact will be deleted\n" << std::endl;
        while (i < 7)
        {
            contacts[i] = contacts[i + 1];
            i++;
        }
        count = 7;
    }
    if (new_contact.is_valid())
    {
        contacts[count] = new_contact;
        count++;
        std::cout << "Contact added successfully!" << std::endl;
    }
    else
    {
        std::cout << "Failed to add contact: incomplete information." << std::endl;
    }
}

void phonebook::dispaly_phonebook()
{
    int i = 0;

    std::cout << std::setw(10) << std::right << "Index" 
              << " | " 
              << std::setw(10) << std::right << "First Name"
              << " | "
              << std::setw(10) << std::right << "Last Name"
              << " | "
              << std::setw(10) << std::right << "Nickname"
              << std::endl;

    for (int i = 0; i < 50; ++i) {
                std::cout << "-";
            }
    std::cout << std::endl;

    while (i < count)
    {
        std::cout << std::setw(10) << std::right << i
                  << " | "
                  << std::setw(10) << std::right << truncate(contacts[i].get_first_name())
                  << " | "
                  << std::setw(10) << std::right << truncate(contacts[i].get_last_name())
                  << " | "
                  << std::setw(10) << std::right << truncate(contacts[i].get_nickname())
                  << std::endl;
        i++;
    }
}

std::string phonebook::truncate(const std::string& str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + '.';
    }
    return str;
}

bool is_number(const std::string &str)
{
    std::size_t i;

    i = 0;
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}

void    phonebook::search_contact()
{
    std::string command;
    int i;

    if (!contacts[0].is_valid())
    {
        std::cout << "The phonebook is empty!" << std::endl;
        return;
    }
    dispaly_phonebook();
    std::cout << "Enter index" << std::endl;
    std::getline(std::cin, command);
    if (std::cin.eof())
    {
        std::cout << "\n🌸🌸🌸 Exiting program. 🌸🌸🌸" << std::endl;
        exit(0);
    }
    while (1)
    {
        if (!command.empty())
        {
            if (!is_number(command))
            {
                std::cout << "Invalid index! Index must be a number" << std::endl;
                return ;
            }
            i = std::atoi(command.c_str());
            if (i >= 0 && i < count)
            {
                contacts[i].display_contact();
                return;
            }
            else
            {
                std::cout << "Invalid index! Index must be in the table" << std::endl;
                return ;
            }
        }
        else
        {
            std::cout << "Empty command!" << std::endl;
            return;
        }
    }
}

void print_msg()
{
    std::cout << "Enter :" << std::endl;
    std::cout << "        ADD to add a contact" << std::endl;
    std::cout << "        SEARCH to look for a contact" << std::endl;
    std::cout << "        EXIT to exit the program" << std::endl;
}


int main (int argc, char **argv)
{
    std::string command;
    (void)argc;
    (void)argv;
    phonebook book;
    while (1)
    {
        print_msg();
        std::getline(std::cin, command);
        if (std::cin.eof())
            break;
        if (command == "ADD")
            book.add_contact();
        else if (command == "SEARCH")
            book.search_contact();
        else if (command == "EXIT")
        {
            std::cout << "\n🌸🌸🌸 Exiting program. 🌸🌸🌸" << std::endl;
            exit(0);
        }
    }    
    return (0);
}
