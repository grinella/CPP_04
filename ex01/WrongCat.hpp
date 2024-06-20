#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& other);
        ~WrongCat();

        void makeSound() const;
        WrongCat &operator=(const WrongCat &src);
};