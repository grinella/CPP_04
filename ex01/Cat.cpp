#include "Cat.hpp"

Cat::Cat(void){
    this->Gigi = new Brain();
    this->type = "Cat";
    std::cout << "Constructor " << this->type << "         called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    }

Cat::~Cat(void){
    std::cout << "Destructor Cat         called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Lecandeleeeee!" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Copy Cat assignment operator called." << std::endl;
    return *this = src;
}