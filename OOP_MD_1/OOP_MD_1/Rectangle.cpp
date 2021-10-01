//#include "Rectangle.h"
//// Constructor
//Rectangle::Rectangle(): length(0), width(0)
//{
//	cout<<"The Rectangle length and width are initialized."<<endl;
//}
//
//Rectangle::Rectangle(double len, double wid): length(len), width(wid)
//{
//
//}
//
//// Destructor
//Rectangle::~Rectangle(void)
//{
//	cout<<"The object life time is ended"<<endl;
//}
//
//// Member functions definition
//void Rectangle::setLength(double len)
//{
//	if(len >= 0)
//		length = len;
//	else
//		cout<<"Error, Please enter only positive value";
//};
//
//void Rectangle::setWidth(double wid)
//{
//	if(wid >= 0)
//		width = wid;
//	else
//		cout<<"Error, Please Enter positive value";
//};
//
//double Rectangle::getLength(void)
//{
//	return length;
//};
//
//double Rectangle::getWidth(void)
//{
//	return width;
//};
//
//double Rectangle::getArea(void)
//{
//	return length * width;
//}
//Rectangle Rectangle::merge(Rectangle r2)
//{
//	Rectangle r3;
//	r3.length = length + r2.length;
//	r3.width = width + r2.width;
//	return r3;
//}