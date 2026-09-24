#pragma once
#include <string>

class Animal
{
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal(Animal&& other) noexcept;
    Animal& operator=(const Animal& other);
    Animal& operator=(Animal&& other) noexcept;

    virtual void MakeSound();
    virtual void AskForFood();
    virtual void Move();

protected:
    std::string name_;
};

class Dog : public Animal
{
public:
    Dog();
    ~Dog() override;
    Dog(const Dog& dog);
    Dog(Dog&& dog) noexcept;
    Dog& operator=(const Dog& dog);
    Dog& operator=(Dog&& dog) noexcept;

    void MakeSound() override;
    void AskForFood() override;
    void Move() override;
};

class Cat : public Animal
{
public:
    Cat();
    ~Cat() override;
    Cat(const Cat& cat);
    Cat(Cat&& cat) noexcept;
    Cat& operator=(const Cat& cat);
    Cat& operator=(Cat&& cat) noexcept;

    void MakeSound() override;
    void AskForFood() override;
    void Move() override;
};

class Cow : public Animal
{
public:
    Cow();
    ~Cow() override;
    Cow(const Cow& cow);
    Cow(Cow&& cow) noexcept;
    Cow& operator=(const Cow& cow);
    Cow& operator=(Cow&& cow) noexcept;

    void MakeSound() override;
    void AskForFood() override;
    void Move() override;
};

class Duck : public Animal
{
public:
    Duck();
    ~Duck() override;
    Duck(const Duck& duck);
    Duck(Duck&& duck) noexcept;
    Duck& operator=(const Duck& duck);
    Duck& operator=(Duck&& duck) noexcept;

    void MakeSound() override;
    void AskForFood() override;
    void Move() override;
};

class Fox : public Animal
{
public:
    Fox();
    ~Fox() override;
    Fox(const Fox& fox);
    Fox(Fox&& fox) noexcept;
    Fox& operator=(const Fox& fox);
    Fox& operator=(Fox&& fox) noexcept;

    void MakeSound() override;
    void AskForFood() override;
    void Move() override;
};