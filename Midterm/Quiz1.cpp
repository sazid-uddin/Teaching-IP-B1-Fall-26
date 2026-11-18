#include <iostream>
using namespace std;

int main()
{
	// a = 3, b = 4, c = 5
	int N = 33;
	int L1 = 9;
	int L2 = 14;
	int R1 = 25;
	int R2 = 35;
	int R3 = 45;
	int D = 7;

	int sum = 0;
	int count = 0;

	for (int i = 1; i <= 33; i++) {
		// int w = 15;
		int charge;

		if (i >= 1 && i <= L1) {
			charge = i * R1;
		}
		else if (i > L1 && i <= L2) {
			charge = i * R2;
		}
		else if (i > L2 && i <= N) {
			charge = i * R3;
		}

		if (i % D == 0) {
			// charge -= 20;
			charge = charge - 20;
			count = count + 1;
			// count++;
		}

		sum = sum + charge;
	}

	cout << "Total charge: " << sum << endl;
	cout << "Discounted parcels: " << count << endl;

	return 0;
}