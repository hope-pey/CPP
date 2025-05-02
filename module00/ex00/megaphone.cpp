#include <string>
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
    std::string::size_type j;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc)
    {
        j = 0;
        std::string arg = argv[i];
        while (j < arg.length())
        {
            std::cout << (char) std::toupper(arg[j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
