#include <iostream>
using namespace std;

int main()
{
	// Problem: Take input of 1000 numbers and calculate their sum
    // int n1, n2, n3 ... n10;
	int n = 5;
	int numbers[n]; // int array of size 10

	// numbers[0] = 5; // index number / serial number
	// numbers[1] = 10;
	// cin >> numbers[9];

	// cout << numbers[0];

	// cin >> n1;
	// cin >> n2;
	// ...
	// cin >> n10;

	// cin >> numbers[0];
	// cin >> numbers[1];
	// ...
	// cin >> numbers[9];

	// for loop needs three things
	// 1. loop control variable initialization: int i = 0
	// 2. loop exit condition: i < 10
	// 3. loop control variable update: i++ 

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cout << "Enter number " << i+1 << ": ";
		cin >> numbers[i];
		sum = sum + numbers[i];
	}

	// int sum = 0;
	// for (int i = 0; i < n; i++) {
	// 	sum = sum + numbers[2];
	// }

	cout << sum << endl;




	// int sum = n1 + n2 + n3 + .... + n10;


    return 0;
}