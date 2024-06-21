#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
    this->type = "WrongAnimal";
    std::cout << "Constructor " << this->type << " called" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "Destructor " << this->type;
    if (type == "WrongCat")
        std::cout << "    called" << std::endl;
    else
        std::cout << " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

WrongAnimal::WrongAnimal(std::string type){
    this->type = type;
    std::cout << "Constructor " << this->type << " called" << std::endl;
}


std::string WrongAnimal::getType() const {
    return(this->type);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal: ..................." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    std::cout << "Copy assignment operator called." << std::endl;
    this->type = src.type;
    return *this;
}