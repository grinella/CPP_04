#pragma once

#include <iostream>
#include <string>

class Brain {
    private: 
        std::string ideas[100];

    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& other);
        virtual ~Brain();

        std::string getType() const;
        virtual void makeSound() const;
        Brain &operator=(const Brain &src);
};