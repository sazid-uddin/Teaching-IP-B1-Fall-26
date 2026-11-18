#include <iostream>
using namespace std;

int main () {
	// input
	// floating point number
	float cgpa;
	cout << "Please enter the CGPA: ";
	cin >> cgpa;

	// variable - > vary
	int credit;
	cout << "Please enter the credit: ";
	cin >> credit;

	// boolean value -> (0,1) or (true, false) or (yes,no) or (on, off)
	bool failed;
	cout << "Please enter 1 if the student failed in any course (otherwise enter 0): ";
	cin >> failed;

	// "failed" is equivalent to "failed == 1"
	if (credit < 12 || failed)
	{
		cout << "No waiver";
	}
	else {
		if (cgpa >= 3.90 && cgpa <= 4.00) {
			cout << "100%";
		} else if (cgpa >= 3.75 && cgpa < 3.9) {
			cout << "50%";
		} else if (cgpa >= 3.5 && cgpa < 3.75) {
			cout << "25%";
		} else if (cgpa >= 0.0 && cgpa < 3.5) {
			cout << "No waiver";
		} else {
			cout << "Invalid input";
		}
	}


	return 0;
}