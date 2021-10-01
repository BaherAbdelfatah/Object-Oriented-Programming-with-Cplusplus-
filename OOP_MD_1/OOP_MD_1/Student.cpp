#include "Student.h"

Student::Student(string n, string g, float a, int l, float gp, string d):Person(n, g, a)
{
	level = l;
	GPA = gp;
	depart = d;
}

void Student::set_level(int l)
{
	level = l;
}

void Student::set_GPA(float g)
{
	GPA = g;
}

void Student::set_depart(string d)
{
	depart = d;
}

int Student::get_level()
{
	return level;
}

float Student::get_GPA()
{
	return GPA;
}

string Student::get_depart()
{
	return depart;
}

void Student::display()
{
	Person::display();
	cout << "Depart= " << depart << " ,Level= " << level << " ,GPA= "<< GPA << endl;
}
