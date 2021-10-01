#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance() : feet(0), inches(0.0)
{}

Distance::Distance(int ft, double in):feet(ft), inches(in)
{}

void Distance::setDistance(int ft, double in)
{
	feet = ft;
	inches = in;
}

void Distance::Print()
{
	cout << "Feet = " << feet << endl;
	cout << "Inches = " << inches <<endl;
}

Distance Distance::Add_distance(Distance d2)
{
	Distance result;
	result.feet = feet + d2.feet;
	result.inches = inches + d2.inches;
	return result;
}

Distance::~Distance()
{
}
