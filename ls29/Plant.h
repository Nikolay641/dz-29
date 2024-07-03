#pragma once
#include <string>
#include <iostream>
using namespace std;


class Plant
{
protected:
	string title;
	string type;
public:
	Plant();
	Plant(string title, string type);

	void setTitle(string title);
	void setType(string type);

	string getTitle()const;
	string getType()const;

	void showInfo()const;
};

