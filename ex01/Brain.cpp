#include "Brain.hpp"

Brain::Brain(void){
    for (int i = 0; i <= 100; i++)
    {
        this->ideas[i] = "non penso bro";
    }
    std::cout << "Constructor Brain       called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

Brain::~Brain(void){
    std::cout << "Destructor Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
    std::cout << "Copy assignment operator called." << std::endl;
    return *this = src;
}