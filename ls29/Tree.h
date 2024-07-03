#pragma once
#include "Plant.h"
class Tree : public Plant
{
	int age;
public:
	Tree();
	Tree(int age, Plant plant);

	void setAge(int age);
	int getAge()const;

	void showInfo()const;
};

