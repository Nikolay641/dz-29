#pragma once
#include "Plant.h"
class Flower : public Plant
{
protected:
	float stemLenght;
public:
	Flower();
	Flower(float stemLenght, Plant plant);

	void setStemLenght(float stemLenght);
	float getStemLenght()const;

	void showInfo()const;
};

