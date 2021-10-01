#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
class Student : public Person
{
private:
	int level;
	float GPA;
	string depart;

public:
	Student(string n, string g, float a, int l, float gp
		, string d);
	void set_level(int l);
	void set_GPA(float g);
	void set_depart(string d);
	
	int get_level();
	float get_GPA();
	string get_depart();
	void display();  
};

