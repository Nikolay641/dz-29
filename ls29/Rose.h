#pragma once
#include "Flower.h"
class Rose : public Flower
{
	string color;
public:
	Rose();
	Rose(string color, Flower flower);

	void setColor(string color);
	string getColor()const;

	void showInfo()const;
};

