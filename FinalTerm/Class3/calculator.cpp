#include <iostream>
using namespace std;

// addition function
// function syntax
// return-type function-name (inputs/parameters/arguements) {
//    function body
// }
int addition (int a, int b) {
	int result = a + b;
	return result;
}

int subtraction (int a, int b) {
	return a - b;
}

int multiplication (int a, int b) {
	return a*b;
}

float division(int a, int b) {
	if(b == 0) {
		cout << "Invalid input";
		return 0;
	} else {
		return (float)a/b;
	}
}

int mod(int a, int b) {
	return a%b;
}

// int distributor(char op, int n1, int n2); // function prototype

int distributor (char operation, int n1, int n2) {
	int result;
	switch(operation) {
		case '+':
			result = addition(n1,n2);
			break;
		case '-':
			result = subtraction(n1,n2);
			break;
		case '*':
			result = multiplication(n1,n2);
			break;
		case '/':
			result = division(n1,n2);
			break;
		case '%':
			result = mod(n1,n2);
			break;
		default:
			cout << "Invalid input";
			result = 0;
	}
	return result;
}

int main()
{
	// Simple calculator in C++
	cout << "Enter the first number: ";
	int n1;
	cin >> n1;
	cout << "Enter the second number: ";
	int n2;
	cin >> n2;
	cout << "Enter the symbol for operation (+,-,*,/,%): ";
	char operation;
	cin >> operation;

	// cout << addition(n1,n2)
	cout << "Result: " << distributor(operation, n1, n2) << endl;

	return 0;
}