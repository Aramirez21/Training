/*
Anna Ramirez					PIC 10A Intro. to Programming
ID: 604256452					Spring 2015
Email: Battlebear21@gmail.com	Assignment #1
Section: 2B
Honesty Pledge:

	I, Anna Ramirez, pledge that this is my own independent
	work. which conforms to the guidelines of academic honesty as
	described in the course syllabus.
	
*/

#include<iostream> 
using namespace std;

int main(void) {

	cout << "Welcome to My Frozen Yogurt!" << endl;

	int sorder;
	double small = 2.19;
	cout << "Enter total number of small <$2.19>: "; cin >> sorder; 

	int morder;
	double medium = 3.49;
	cout << "Enter total number of medium <$3.49>: "; cin >> morder; 

	int lorder;
	double large = 4.49;
	cout << "Enter total number of large <$4.49>: "; cin >> lorder;

	cout << "" << endl;

	// The above establishes the variables of the different sized orders and it allows the user to put in their order

	double tax = .0875; // establishes the tax
	cout << "Subtotal: $" << small* sorder + medium* morder + large* lorder << endl; // Adds the total order together before tax
	double subtotal = small* sorder + medium* morder + large* lorder; // makes the order into a variable
	cout << "Tax <8.75%>: $" << tax* subtotal << endl; // Computes the tax alone
	double total = tax* subtotal + subtotal; // Computes the total cost to the user of the order plus the tax
	cout << "Total: $" << total << endl; // shows the user the final total

	cout << "" << endl;

	return 0;

}