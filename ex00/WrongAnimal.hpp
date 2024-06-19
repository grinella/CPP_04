#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
    protected: 
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();

        std::string getType() const;
        virtual void makeSound() const;
        WrongAnimal &operator=(const WrongAnimal &src);
};