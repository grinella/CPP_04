#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal*       meta = new Animal();
    const Animal*       i = new Cat();
    const Animal*       j = new Dog();

    const WrongAnimal*  beta = new WrongAnimal();
    const WrongAnimal*  x = new WrongCat();

    std::cout << std::endl;
    std::cout << i->getType() << ": ";
    i->makeSound();
    std::cout << j->getType() << ": ";
    j->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;
    std::cout << x->getType() << ": ";
    x->makeSound();
    std::cout << std::endl;
    beta->makeSound();
    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;
    delete x;
    delete beta;

    return 0;
}