#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Dog: public Brain {
    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();

        void makeSound() const;
        Dog &operator=(const Dog &src);
};