#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
	private :

		// Member variables
		double length;			// Length of a rectangle
		double width;			// Width of a rectangle
	
public:
		// Default Constructor
		Rectangle();
		// Constructor
		Rectangle(double len, double wid);
		// Destructor
		~Rectangle(void);

		// Member functions declaration
		void setLength (double length);
		void setWidth (double Width);
		double getLength (void);
		double getWidth (void);
		double getArea (void);
		Rectangle merge(Rectangle r2);
};


