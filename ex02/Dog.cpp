#include "Dog.hpp"

Dog::Dog(void){
    this->Fratm = new Brain();
    this->type = "Dog";
    std::cout << "Constructor " << this->type << "         called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other) {
    this->Fratm = new Brain();
    this->type = other.type;
    std::cout << "Copy constructor " << this->type << "called" << std::endl;
}

Dog::~Dog(void){
    std::cout << "Destructor " << this->type << "         called" << std::endl;
    delete this->Fratm;
}

void Dog::makeSound() const {
    std::cout << "Bau" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Copy Dog assignment operator called." << std::endl;
    this->type = src.type;
    return *this;
}