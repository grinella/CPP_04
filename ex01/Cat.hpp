#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Cat: public Brain {
    public:
        Cat();
        Cat(const Cat& other);
        ~Cat();

        void makeSound() const;
        Cat &operator=(const Cat &src);
};