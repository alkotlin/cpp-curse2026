#include <iostream>
#include <vector>
#include <memory>

#include "zoo.h"

int main()
{
    // Демонстрация работы базового класса
    Animal base_animal;
    base_animal.MakeSound();
    base_animal.AskForFood();
    base_animal.Move();
    std::cout << "================================" << std::endl;

    // Демонстрация полиморфизма через указатели
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());
    animals.push_back(std::make_unique<Cow>());
    animals.push_back(std::make_unique<Duck>());
    animals.push_back(std::make_unique<Fox>());

    for (const auto& animal : animals)
    {
        animal->MakeSound();
        animal->AskForFood();
        animal->Move();
        std::cout << "--------------------------------" << std::endl;
    }

    // Демонстрация правила пяти
    Dog dog1;
    Dog dog2 = dog1;            // копирование
    Dog dog3 = std::move(dog1); // перемещение

    dog2.MakeSound();
    dog3.MakeSound();

    return 0;
}