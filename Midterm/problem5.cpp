#include <iostream>
using namespace std;

int main()
{
    int distance, hour;
	cin >> distance >> hour;

	int fare;

	if (distance <= 2000) {
		fare = 50;
	} else if (distance > 2000 && distance <= 10000) {
		float km_float = (float) distance / (float) 1000; // 2.5
		int km_int = distance / 1000; // 2
		if (km_float > km_int) {
			km_int++;
		}

		fare = km_int * 15;
		fare += 50;
	} else if (distance > 10000) {
		float km_float = (float) distance / (float) 1000; // 2.5
		int km_int = distance / 1000; // 2
		if (km_float > km_int) {
			km_int++;
		}

		fare = km_int * 12;
		fare += 50;
	}
	
	if (hour >= 22 || hour < 5) {
		float surcharge = fare * 0.2;
		fare += surcharge;
	}

	cout << "Fare: " << fare << " taka";

    return 0;
}