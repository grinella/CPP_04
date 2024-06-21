#pragma once

#include <iostream>
#include <string>

class Brain {
    protected: 
        std::string ideas[100];

    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& other);
        ~Brain();

        Brain &operator=(const Brain &src);
};