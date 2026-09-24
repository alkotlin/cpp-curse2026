#include "zoo.h"
#include <iostream>

Animal::Animal() : name_("Animal") {}
Animal::~Animal() = default;
Animal::Animal(const Animal& other) = default;
Animal::Animal(Animal&& other) noexcept = default;
Animal& Animal::operator=(const Animal& other) = default;
Animal& Animal::operator=(Animal&& other) noexcept = default;
void Animal::MakeSound()
{
    std::cout << "Silence" << std::endl;
}
void Animal::AskForFood()
{
    std::cout << "I want to eat" << std::endl;
}
void Animal::Move()
{
    std::cout << "I move like an animal" << std::endl;
}

Dog::Dog() : Animal() { name_ = "Dog"; }
Dog::~Dog() = default;
Dog::Dog(const Dog& dog) = default;
Dog::Dog(Dog&& dog) noexcept = default;
Dog& Dog::operator=(const Dog& dog) = default;
Dog& Dog::operator=(Dog&& dog) noexcept = default;
void Dog::MakeSound()
{
    std::cout << "Woof-woof" << std::endl;
}
void Dog::AskForFood()
{
    std::cout << "Give me some meat" << std::endl;
}
void Dog::Move()
{
    std::cout << "I run on four legs and wag my tail" << std::endl;
}

Cat::Cat() : Animal() { name_ = "Cat"; }
Cat::~Cat() = default;
Cat::Cat(const Cat& cat) = default;
Cat::Cat(Cat&& cat) noexcept = default;
Cat& Cat::operator=(const Cat& cat) = default;
Cat& Cat::operator=(Cat&& cat) noexcept = default;
void Cat::MakeSound()
{
    std::cout << "Meow" << std::endl;
}
void Cat::AskForFood()
{
    std::cout << "Give me some milk" << std::endl;
}
void Cat::Move()
{
    std::cout << "I walk gracefully and purr" << std::endl;
}

Cow::Cow() : Animal() { name_ = "Cow"; }
Cow::~Cow() = default;
Cow::Cow(const Cow& cow) = default;
Cow::Cow(Cow&& cow) noexcept = default;
Cow& Cow::operator=(const Cow& cow) = default;
Cow& Cow::operator=(Cow&& cow) noexcept = default;
void Cow::MakeSound()
{
    std::cout << "Moo-moo" << std::endl;
}
void Cow::AskForFood()
{
    std::cout << "Give me some grass" << std::endl;
}
void Cow::Move()
{
    std::cout << "I walk slowly and chew cud" << std::endl;
}

Duck::Duck() : Animal() { name_ = "Duck"; }
Duck::~Duck() = default;
Duck::Duck(const Duck& duck) = default;
Duck::Duck(Duck&& duck) noexcept = default;
Duck& Duck::operator=(const Duck& duck) = default;
Duck& Duck::operator=(Duck&& duck) noexcept = default;
void Duck::MakeSound()
{
    std::cout << "Quack-quack" << std::endl;
}
void Duck::AskForFood()
{
    std::cout << "Give me some bread crumbs" << std::endl;
}
void Duck::Move()
{
    std::cout << "I waddle and swim" << std::endl;
}

Fox::Fox() : Animal() { name_ = "Fox"; }
Fox::~Fox() = default;
Fox::Fox(const Fox& fox) = default;
Fox::Fox(Fox&& fox) noexcept = default;
Fox& Fox::operator=(const Fox& fox) = default;
Fox& Fox::operator=(Fox&& fox) noexcept = default;
void Fox::MakeSound()
{
    std::cout << "Ring-ding-ding-ding-dingeringeding!" << std::endl;
}
void Fox::AskForFood()
{
    std::cout << "Give me some chicken" << std::endl;
}
void Fox::Move()
{
    std::cout << "I sneak silently through the forest" << std::endl;
}