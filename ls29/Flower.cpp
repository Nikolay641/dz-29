#include "Flower.h"

Flower::Flower()
{
    stemLenght = 0;
}

Flower::Flower(float stemLenght, Plant plant) : Plant(plant)
{
    this->stemLenght = stemLenght;
}

void Flower::setStemLenght(float stemLenght)
{
    this->stemLenght = stemLenght;
}

float Flower::getStemLenght() const
{
    return stemLenght;
}

void Flower::showInfo() const
{
    Plant::showInfo();
    cout << "Stem lenght: " << stemLenght << endl;
}
