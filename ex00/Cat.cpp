#include "Cat.hpp"

Cat::Cat(void){
    this->type = "Cat";
    std::cout << "Constructor " << this->type << "         called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

Cat::~Cat(void){
    std::cout << "Destructor " << this->type << "         called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Lecandeleeeee!" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Copy Cat assignment operator called." << std::endl;
    return *this = src;
}