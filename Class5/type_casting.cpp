#include <iostream>
using namespace std;

int main()
{
	// type casting
	int a = 5;
	cout << a << endl; // 5
	cout << (float) a << endl;

	float b = 5.5;
	cout << b << endl;
	cout << (int) b << endl; // 5

	// int -> bool
	a = 1;
	cout << (bool) a << endl;
	a = 0;
	cout << (bool) a << endl;
	a = 5;
	cout << (bool) a << endl;
	a = -5;
	cout << (bool) a << endl;

	// int -> char
	a = 65;
	cout << (char) a << endl;

	// char -> int
	char letter = 'A';
	cout << (int) letter << endl;

    return 0;
}