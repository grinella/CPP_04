#include "Brain.hpp"

Brain::Brain(void){
    this->type = "Brain";
    std::cout << "Constructor " << this->type << "      called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

Brain::Brain(std::string type){
    this->type = type;
    std::cout << "Constructor " << this->type << " called" << std::endl;
}

Brain::~Brain(void){
    std::cout << "Destructor " << this->type;
    if (type == "Cat" || type == "Dog")
        std::cout << "         called" << std::endl;
    else
        std::cout << "      called" << std::endl;
}

std::string Brain::getType() const {
    return(this->type);
}

void Brain::makeSound() const {
    std::cout << "Brain: ..................." << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
    std::cout << "Copy assignment operator called." << std::endl;
    return *this = src;
}