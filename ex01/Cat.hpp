#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain* Gigi; 

    public:
        Cat();
        Cat(const Cat& other);
        ~Cat();

        void makeSound() const;
        Cat &operator=(const Cat &src);
};