#include "Animal.hpp"

Animal::Animal(void){
    this->type = "Animal";
    std::cout << "Constructor " << this->type << "      called" << std::endl;
}

Animal::Animal(const Animal& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

Animal::Animal(std::string type){
    this->type = type;
    std::cout << "Constructor " << this->type << " called" << std::endl;
}

Animal::~Animal(void){
    std::cout << "Destructor " << this->type;
    if (type == "Cat" || type == "Dog")
        std::cout << "         called" << std::endl;
    else
        std::cout << "      called" << std::endl;
}

std::string Animal::getType() const {
    return(this->type);
}

void Animal::makeSound() const {
    std::cout << "Animal: ..................." << std::endl;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Copy assignment operator called." << std::endl;
    return *this = src;
}