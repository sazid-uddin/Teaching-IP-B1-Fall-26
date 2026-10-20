#include <iostream>
using namespace std;

int main()
{
	// for (int i = 0; i < 10; i++) { // counting loop

	// }

	// while (i < 10) {                 // indefinite loop
	// 	// statements of the body
	// }

	// Problem:
	// Ask the user to input a negative number
	// if the user inputs a positive number,
	// tell him to try again

	int n;
	cout << "Please enter a negative number: ";
	cin >> n;

	// while (n >= 0) { // 0 is a non-negative number
	// 	cout << "Invalid input. please try again: ";
	// 	cin >> n;
	// }

	for (; n >= 0;)
	{
		cout << "Invalid input. please try again: ";
		cin >> n;
	}

	cout << "Congrats. you have entered a negative number;";

	return 0;
}