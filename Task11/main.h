#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>

using namespace std;

class Animals
{
private:
	string age;
	string who;
	
public:
	Animals(string = "", string = "");

	virtual void print() = 0;

	~Animals();
	const string& getAge()
	{
		return age;
	}
	const string& getWho()
	{
		return who;
	}

};


class Cat : public Animals
{
private:
	string type;
	int price;
public:
	Cat(string = "", string = "", string = "", int = 0);
	void print();
	~Cat();

};

class Dog : public Animals
{
private:
	string type;
	int price;
public:
	Dog(string = "", string = "", string = "", int = 0);
	void print();
	~Dog();

};

class Parrot : public Animals
{
private:
	string type;
	int price;
public:
	Parrot(string = "", string = "", string = "", int = 0);
	void print();
	~Parrot();

};
#endif