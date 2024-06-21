#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal*       f = new Animal(); // per verificare se é astratto
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
    std::cout << std::endl;
    std::cout << x->getType() << ": ";
    x->makeSound();
    std::cout << std::endl;
    beta->makeSound();
    std::cout << std::endl;

    std::cout << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << std::endl;

    delete i;
    delete j;
    delete x;
    delete beta;

    return 0;
}