#include <iostream>
#include "Car.h"
//#include "Rectangle.h"
#include "Calculator.h"
#include "Distance.h"
#include "Counter.h"
//#include "Student.h"
//#include "PostGraduatedStudent.h"
#include <string>
#include "Person.h"

class Employee
{
protected:
	string name;
	int emp_ID;
	float salary;
public:
	//	default constructor
	Employee():name("Unknown"), emp_ID(0), salary(0.0)
	{}
	Employee(string n, int id, float s)
	{
		name = n;
		emp_ID = id;
		salary = s;
	}
	virtual float get_Total_salary() = 0;
	virtual void print()
	{
		cout << "Name = " << name << " Emp_Id =" << emp_ID << " Basic salary = " << salary << endl;
	}
};

class Sales :public Employee
{
private:
	float gross_sales;
	float commission_rate;
public:
	Sales(string n, int id, float s, float gs, float cr) :Employee(n, id, s)
	{
		gross_sales = gs;
		commission_rate = cr;
	}

	float get_Total_salary()
	{
		return salary + (gross_sales * commission_rate);
	}

	void print()
	{
		Employee::print();
		cout << "Gross Sales = " << gross_sales << " Commission =" << commission_rate << endl;
	}
};

class Engineer :public Employee
{
private:
	string speciality;
	int experience;
	int overtime_hours;
	float overtime_hour_rate;

public:
	Engineer(string n, int id, float s, string sp, int e, int oh, float or ) :Employee(n, id, s)
	{
		speciality = sp;
		experience = e;
		overtime_hours = oh;
		overtime_hour_rate = or;
	}
	float get_Total_salary()
	{
		return salary + (overtime_hours * overtime_hour_rate);
	}

	void print()
	{
		Employee::print();
		cout << "Speciality = " << speciality << " Experience =" << experience << " Overtime hours =" << overtime_hours << " Overtime hour rate =" << overtime_hour_rate << endl;
	}

};

class Student 
{
private:
	string name;
	string department;
	string research_interest;

public:
	Student(string d, string ra):department(d), research_interest(ra)
	{}

	void set_name(string n)
	{
		name = n;
	}

	void set_department(string d)
	{
		department = d;
	}

	void set_research_interest(string ra)
	{
		research_interest = ra;
	}

};

/*class TeachingAssistant : public Student, public Employee
{
public:
	// default constructor
	TeachingAssistant(string n, string j, float s, string d, string ra):Employee(n, j, s), Student(d, ra)
	{
	}
};*/

class Shape {
private:
	string color;
public:
	Shape(string c)
	{
		color = c;
	}
	// pure virtual function
	virtual int area() = 0;
	// pure virtual function
	virtual void draw() = 0;
	// pure virtual function
	virtual void erase() = 0;

	virtual void display() final
	{
		cout << "This is shape" << endl;
	}
};

class Rectangle : public Shape {
private:
	int length;
	int width;
public:
	Rectangle(int l, int w, string c) :Shape(c)
	{
		length = l;
		width = w;
	}

	int area()
	{
		cout << "Rectangle class area : " << (width * length)<< endl;
		return (width * length);
	}
	void draw()
	{
		cout << "Draw Rectangle  " << endl;
	}
	void erase()
	{
		cout << "The Rectangle Erased " << endl;
	}

};

class Circle : public Shape {
private:
	int radius;
public:
	Circle(int r, string c) :Shape(c) {	radius = r; }

	int area() {
		cout << "Circle area : " << 3.14 * (radius * radius) << endl;
		return (3.14 * radius * radius);
	}
	void draw()
	{
		cout << "Draw Circle  " << endl;
	}
	void erase()
	{
		cout << "The Circle Erased " << endl;
	}
};

class printclass
{
public:
	void print(Person p)
	{
		cout << "The Basic Data of person" << endl;
		cout << "Name = " << p.name << ", Age = " << p.age << ", gender = " << p.gender << endl;
	}
};

// Main function for the program

int main()
{
	Employee* emp_ptr;
	Sales s1("Ahmed", 120, 5000, 50000, 0.10);
	Engineer e1("Hassan", 150, 7000, "SW Engineer", 5, 10, 50);
	emp_ptr = &s1;
	emp_ptr->get_Total_salary();
	emp_ptr->print();

	emp_ptr = &e1;
	emp_ptr->get_Total_salary();
	emp_ptr->print();
	return 0;
}








































