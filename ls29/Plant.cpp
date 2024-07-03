#include "Plant.h"

Plant::Plant()
{
    title = "Empty";
    type = "Empty";
}

Plant::Plant(string title, string type)
{
    this->title = title;
    this->type = type;
}

void Plant::setTitle(string title)
{
    this->title = title;
}

void Plant::setType(string type)
{
    this->type = type;
}

string Plant::getTitle() const
{
    return title;
}

string Plant::getType() const
{
    return type;
}

void Plant::showInfo() const
{
    cout << "Title: " << title << endl;
    cout << "Type: " << type << endl;
}
