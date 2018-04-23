//function definitions
#include"Discount.h"
// function for class constructor
Discount::Discount() {
	newbill = 0.0;
	newbill_type = 0;
	newdiscount = 0.0;
}
// function for overloaded class constructor
Discount::Discount(double bill, int bill_type) {

	newbill = bill;
	newbill_type = bill_type;
}
// function for class destructor
Discount::~Discount() {

}
// Accessor Functions
double Discount::getBill()const {

	return newbill;
}
int Discount::getBill_type()const {
	return newbill_type;
}



// function to calculate non percentage based discount.
double Discount::non_Pdiscount() {
	return (floor((newbill / 100) )*5); 
}
//function to calculate employee discount
double Discount::emp_Ldiscount() {
	return((newbill*(0.3)));
}

//function to calculate affiliate discount
double Discount::affI_discount() {
	return ((newbill*(0.1)));
}

// function to calculate customer discount
double Discount::cusT_discount() {

	return ((newbill*(0.05)));
}
