// Funtion declarations

#include<iostream>
using namespace std;

#ifndef DISCOUNT_H
#define DISCOUNT_H

class Discount {
public:
	//Default Constructor
	Discount();
	//overload constructor
	Discount(double, int);
	//Destructor
	~Discount();
	//Accessor functions
	double getBill()const; // returns Bil
	int getBill_type()const; // returns Bill type

	double non_Pdiscount(); //function to calculate non percentage based discount
	double emp_Ldiscount(); // function to calculate employee discount
	double affI_discount();// function to calculate affiliate discount
	double cusT_discount(); // funciton to calculate customer discount

private:
	// Member variables
	int newbill_type;
	double newdiscount;
	double newbill;

};



#endif
