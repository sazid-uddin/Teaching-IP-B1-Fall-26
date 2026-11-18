#include <iostream>
using namespace std;

int main()
{
	int hour, minute, duration;
	cin >> hour >> minute >> duration;

	int minute_passed = duration % 60;
	int hours_passed = duration / 60;
	if ((minute_passed + minute) / 60 == 1)
	{
		hours_passed++;
	}

	int clock_minute = (minute_passed + minute) % 60;
	int days_later = (hours_passed + hour) / 24;
	int clock_hour = (hours_passed + hour) % 24;

	cout << clock_hour << ":" << clock_minute << endl;
	cout << "Days later: " << days_later;

	return 0;
}