#include <iostream>
using namespace std;

int main()
{
	// if statement
	// statement0;
	int a = 5;

	// if (cond) {
	if (a > 0) {
		// statement1;
		cout << "a is positive" << endl;
	}

	// statement2;
	cout << "This is statement2" << endl;

	// if-else statement
	if (cond) {

	} else {

	}

	// if-else-if statement
	if (cond1) {

	} else if (cond2) {
		
	} else if (cond3) {

	} else {

	}

	// (rem_4 == 0 && rem_100 != 0) || rem_400 == 0
	// (rem_400 == 0 && rem_4 != 0) || rem_100 == 0

	// switch
	int day = 5;

	if (day == 1) {
		cout << "Sunday";
	} else if (day == 2) {
		cout << "Monday";
	} else if (day == 3) {
		cout << "Tuesday";
	} else if (day == 4) {
		cout << "Wednesday";
	} else if (day == 5) {
		cout << "Thursday";
	} else if (day == 6) {
		cout << "Friday";
	} else if (day == 7) {
		cout << "Saturday";
	} else {
		cout << "Invalid day";
	}

	switch (day) {
		case 1: 
			cout << "Sunday" << endl;
			break;
		case 2: 
			cout << "Monday" << endl;
			break;
		case 3:
			cout << "Tuesday" << endl;
			break;
		case 4:
			cout << "Wednesday" << endl;
			break;
		case 5:
			cout << "Thursday" << endl;
			break;
		case 6:
			cout << "Friday" << endl;
			break;
		case 7:
			cout << "Saturday" << endl;
			break;
		default:
			cout << "Invalid day" << endl;
			break;
	}

	// ternary operator

	int a = 5;
	if ( a > 0 ) {
		cout << "a is positive";
	} else {
		cout << "a is negative";
	}

	cout << (a > 0) ? "a is positive" : "a is negative";
	int b = (a > 0) ? 5 : -5;
	
	// cond ? true : false;

    return 0;
}