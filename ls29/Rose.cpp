#include "Rose.h"

Rose::Rose()
{
    color = "Empty";
}

Rose::Rose(string color, Flower flower) : Flower(flower)
{
    this->color = color;
}

void Rose::setColor(string color)
{
    this->color = color;
}

string Rose::getColor() const
{
    return color;
}

void Rose::showInfo() const
{
    Flower::showInfo();
    cout << "Color: " << color << endl;
}
