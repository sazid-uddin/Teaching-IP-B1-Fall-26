#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a < b && a < c) {
		cout << a << " ";
		if (b < c) {
			cout << b << " " << c;
		} else { // c < b and c == b both
			cout << c << " " << b;
		} 
	} else if (b < a && b < c) {
		cout << b << " ";
		if (a < c) {
			cout << a << " " << c;
		} else {
			cout << c << " " << a;
		}
	} else if (c < a && c < b) {
		cout << c << " ";
		if (a < b) {
			cout << a << " " << b;
		} else {
			cout << b << " " << a;
		}
	}

	cout << endl;

	if (a == b && b == c) {
		cout << "Disctinct: 1";
	} else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
		cout << "Disctinct: 2";
	} else if (a != b && b != c) {
		cout << "Distinct: 3";
	}

	return 0;
}