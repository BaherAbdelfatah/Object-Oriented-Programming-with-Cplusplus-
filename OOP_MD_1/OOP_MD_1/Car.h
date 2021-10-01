#pragma once
#include <string>
#include <iostream>
using namespace std;

class Car
{
private:

	// Member variables
	string maker;		// Car Maker
	string color;		// Car Color
	int yearModel;		// Car Year Model
	static int count;			// Cars Count
public:

	// Member functions declaration(Prototype)

	// Setters
	void setMaker(string make);
	void setColor(string color);
	void setYearModel(int yearModel);

	// Getters
	string getMaker(void);
	string getColor(void);
	int getyearModel(void);
	int GetCarsCount();

	// Default Constructor
	Car();
	// Constructor
	Car(string m, int y, string c);
	// Destructor
	~Car(void);
};