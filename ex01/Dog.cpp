#include "Dog.hpp"

Dog::Dog(void){
    this->type = "Dog";
    std::cout << "Constructor " << this->type << "         called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

Dog::~Dog(void){
    std::cout << "Destructor " << this->type << "         called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bau" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Copy Dog assignment operator called." << std::endl;
    return *this = src;
}