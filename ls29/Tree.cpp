#include "Tree.h"

Tree::Tree()
{
    age = 0;
}

Tree::Tree(int age, Plant plant) : Plant(plant)
{
    this->age = age;
}

void Tree::setAge(int age)
{
    this->age = age;
}

int Tree::getAge() const
{
    return age;
}

void Tree::showInfo() const
{
    Plant::showInfo();
    cout << "Age: " << age << endl;
}
