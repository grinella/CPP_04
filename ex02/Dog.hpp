#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    private:
        Brain* Fratm;

    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();

        void makeSound() const;
        Dog &operator=(const Dog &src);
};