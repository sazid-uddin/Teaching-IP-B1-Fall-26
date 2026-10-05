#include <iostream>
using namespace std;

int main () 
{
	int n;
	cin >> n;

	int m;
	m = n % 2; // assignment operator

	if (m == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}

	return 0;
}

// 4==4 // equality operator
// keyword
// ungabunga