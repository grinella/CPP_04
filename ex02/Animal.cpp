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
    if (type == "Cat" || type == "Dog")
        std::cout << "Destructor Animal\"" << this->type << "\" called" << std::endl;
    else
        std::cout << "Destructor Animal      called" << std::endl;
}

std::string Animal::getType() const {
    return(this->type);
}

// void Animal::makeSound() const {
//     std::cout << "Animal: ..................." << std::endl;
// } // levato

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Copy assignment operator called.animal" << std::endl;
    this->type = src.type;
    return *this;
}