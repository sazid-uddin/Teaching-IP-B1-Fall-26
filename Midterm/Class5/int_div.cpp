#include <iostream>
using namespace std;

int main()
{
	// int division : int / int -> int
	int a = 5, b = 2;
	cout << a / b << endl;
	// cout << 5 / 2 << endl;
	cout << (float) a / b << endl;

	// floating point division: float / int -> float | int / float - > float | float / float -> float
	float c = 5.0;
	cout << c / b << endl;

    return 0;
}