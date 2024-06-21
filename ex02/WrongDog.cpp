#include "WrongDog.hpp"

WrongDog::WrongDog(void){
    this->type = "WrongDog";
    std::cout << "Constructor " << this->type << "    called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other): WrongAnimal(other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

WrongDog::~WrongDog(void){
    std::cout << "Destructor " << this->type << "    called" << std::endl;
}

void WrongDog::makeSound() const{
    std::cout << "Bro non sono un gatto..." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &src) {
    std::cout << "Copy WrongDog assignment operator called." << std::endl;
    this->type = src.type;
    return *this;
}