#include <iostream>
using namespace std;

int main()
{
	int a = 5;

	int b = 5;
	b += 2; // b += 2 -> b = b + 2
	cout << b << endl; 

	b -= 2; // b -= 2 -> b = b - 2
	cout << b << endl;

	b *= 2; // b *= 2 -> b = b * 2
	cout << b << endl;

	b /= 2; // b /= 2 -> b = b / 2
	cout << b << endl;

	b %= 2; // b %= 2 -> b = b % 2
	cout << b << endl;

    return 0;
}