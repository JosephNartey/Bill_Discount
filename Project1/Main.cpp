#include<iostream>
#include "Discount.h"
using namespace std;
int main() {
	double bill;
	int bill_type; // bill type is 1 for grocery and 2 for non grocery
	
	
	// printing options menu for user input
	cout << "Enter 1 for Grocery bill type " << endl;
	cout << "Enter 2 for Employee bill type" << endl;
	cout << "Enter 3 for Affiliate bill type" << endl;
	cout << "Enter 4 for customer bill type" << endl;
	cout << "Enter 5 for No Relation bill type" << endl;

	
	cin >> bill_type;
	cout << "Enter the amount on bill:" << endl;
	cin >> bill;
	Discount Bill1(bill, bill_type); // bill object using overload constructor
	
	//non grocery bill test case
	if (bill_type == 1) {
		cout << endl << "Bill type 1-Non grocery: " << Bill1.getBill_type() << endl << "bill amount: " <<
			Bill1.getBill() << endl << "Net Payable amount: " << (bill-Bill1.non_Pdiscount()) << endl;
	}
	
	//employee test case
	else if (bill_type == 2) {
		

		cout << endl << "Bill type 2-Employee: " << Bill1.getBill_type() << endl << "bill amount: " <<
		Bill1.getBill() << endl << "Net Payable amount: " <<( bill-((Bill1.emp_Ldiscount())+Bill1.non_Pdiscount()))<< endl;
	}
   // affiliate of the store test case
	else if (bill_type == 3) {
		cout << endl << "Bill type 3-Affiliate: " << Bill1.getBill_type() << endl << "bill amount: " <<
		Bill1.getBill() << endl << "Net Payable amount: " <<(bill-(Bill1.non_Pdiscount()+Bill1.affI_discount())) << endl;
	}
	// customer for over 2 years test case
	else if (bill_type == 4) {
		cout << endl << "Bill type 4-Customer: " << Bill1.getBill_type() << endl << "bill amount: " <<
		Bill1.getBill() << endl << "Net Payable amount: " <<(bill- (Bill1.non_Pdiscount()+Bill1.cusT_discount())) << endl;
	}

	// No relations test case
	else if (bill_type == 5) {
		cout << endl << "Bill type 5-No relation: " << Bill1.getBill_type() << endl << "bill amount: " <<
			Bill1.getBill() << endl << "Net Payable amount: " << Bill1.getBill() << endl;
	}
	else {
		cout << "Invalid input." << endl << "Please try again" << endl;
	}

	return 0;



}