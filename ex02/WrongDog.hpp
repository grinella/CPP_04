#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal {
    public:
        WrongDog();
        WrongDog(const WrongDog& other);
        ~WrongDog();

        void makeSound() const;
        WrongDog &operator=(const WrongDog &src);
};