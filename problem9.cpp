#include <iostream>
using namespace std;

int main()
{
	int day, month, year;
	// cin >> day >> month >> year;
	day = 1; month = 1; year = 2000;

	int day_count = 0;

	day_count += (day - 1);

	switch(month) {
		case 1:
			day_count += 31;
			break;
		case 2:
			day_count += 28;
			break;
		case 3:
			day_count += 31;
			break;
		case 4:
			day_count += 30;
			break;
		case 5:
			day_count += 31;
			break;
		case 6:
			day_count += 30;
			break;
		case 7:
			day_count += 31;
			break;
		case 8:
			day_count += 31;
			break;
		case 9:
			day_count += 30;
			break;
		case 10:
			day_count += 31;
			break;
		case 11:
			day_count += 30;
			break;
		case 12:
			day_count += 31;
			break;
		default:
			cout << "Invalid month" << endl;
			break;
	}

	int years_passed = year - 2000;
	int leap_years_passed = (years_passed / 4) + 1;

	day_count += years_passed * 365;
	day_count += leap_years_passed;

	switch (day_count % 7) {
		case 0: 
			cout << "Saturday";
			break;
		case 1:
			cout << "Sunday";
			break;
		case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tuesday";
			break;
		case 4:
			cout << "Wednesday";
			break;
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
			break;
	}

	return 0;
}