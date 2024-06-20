#include "WrongCat.hpp"

WrongCat::WrongCat(void){
    this->type = "WrongCat";
    std::cout << "Constructor " << this->type << "    called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

WrongCat::~WrongCat(void){
    std::cout << "Destructor " << this->type << "    called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "Bro non sono un gatto..." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "Copy WrongCat assignment operator called." << std::endl;
    return *this = src;
}