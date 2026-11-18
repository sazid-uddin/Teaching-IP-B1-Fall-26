#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	int numbers[n]; // int array of size 10
	int sum = 0;
	// for (int i = 0; i < n; i++) {
	// 	cout << "Enter number " << i+1 << ": ";
	// 	cin >> numbers[i];
	// 	sum = sum + numbers[i];
	// }

	int i = 0;
	while (i < n)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
		sum = sum + numbers[i];

		i++;
	}

	cout << sum << endl;
	return 0;
}