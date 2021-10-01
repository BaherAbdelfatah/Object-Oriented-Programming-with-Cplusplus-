#include "Car.h"

int Car::count = 0;

// Constructor
Car::Car(): maker("Honda"), yearModel(2019), color("White")
{
	count++;
}

Car::Car(string m, int y, string c): maker(m), yearModel(y), color(c)
{
	count++;
}

// Destructor
Car::~Car(void)
{
	count--;
}

// Member functions definition
void Car::setMaker(string make)
{
	maker = make;
}

void Car::setColor(string Color)
{
	color = Color;
}

void Car::setYearModel(int year)
{
	yearModel = year;
}

string Car::getMaker(void)
{
	return maker;
}

string Car::getColor(void)
{
	return color;
}

int Car::getyearModel(void)
{
	return yearModel;
}

int Car::GetCarsCount()
{
	return count;
}


