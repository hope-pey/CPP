#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain (const Brain &other);
        virtual ~Brain();
        Brain &operator=(const Brain &other);

        std::string getIdea(int i) const;
        void setIdea(int i, const std::string &idea);
};

#endif