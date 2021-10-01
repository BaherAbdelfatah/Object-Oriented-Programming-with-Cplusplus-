#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
	name = "unknown";
	gender = "unknown";
	age = 0;
}

Person::Person(string n, string g, float a)
{
	name = n;
	gender = g;
	age = a;
}

void Person::set_age(float a)
{
	age = a;
}

float Person::get_age()
{
	return age;
	return 0.0f;
}

void Person::set_name(string n)
{
	name = n;
}

string Person::get_name()
{
	return name;
	return string();
}

void Person::set_gender(string g)
{
	gender = g;
}

string Person::get_gender()
{
	return gender;
}

void Person::display()
{
	cout << "The Person Basic data " << endl;
	cout << name << " " << gender << " " << age << endl;
}
