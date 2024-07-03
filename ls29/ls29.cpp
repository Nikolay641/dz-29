#include <iostream>
#include "Plant.h"
#include "Tree.h"
#include "Flower.h"
#include "Rose.h"

int main()
{
    Plant a("Some plant", "Some type");

    Tree b(50, a);
    Flower c(13.5, a);
    Rose d("Red", c);
    d.showInfo();
}
