#include "main.h"

int main()
{
	Cat Cat("1 month", "W", "Main coon", 50000);
	Dog Dog("2 month", "M", "German sheepdog", 40000);
	Parrot Parrot("1 year", "M", "Kakadu", 20000);
	Cat.print();
	Dog.print();
	Parrot.print();
}