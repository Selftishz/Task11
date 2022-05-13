#include "main.h"

Animals::Animals(string age, string who)
{
	this->age = age;
	this->who = who;
}

Animals::~Animals()
{

}


Cat::Cat(string age, string who, string type, int price):Animals(age, who)
{
	this->type = type;
	this->price = price;
}

void Cat::print()
{
	cout << type << " " << price << endl;
}

Cat::~Cat()
{

}

Dog::Dog(string age, string who, string type, int price):Animals(age, who)
{
	this->type = type;
	this->price = price;
}

void Dog::print()
{
	cout << type << " " << price << endl;
}

Dog::~Dog()
{

}

Parrot::Parrot(string age, string who, string type, int price):Animals(age, who)
{
	this->type = type;
	this->price = price;

}

void Parrot::print()
{
	cout << type << " " << price << endl;
}

Parrot::~Parrot()
{

}