#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "Animals make sounds";
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Meow!";
    }
};

int main()
{
    Animal *animal = new Animal();
    animal->makeSound();

    Cat *kitten = new Cat();
    kitten->makeSound();

    return 0;
}