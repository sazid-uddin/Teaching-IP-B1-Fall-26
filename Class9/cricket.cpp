#include <iostream>
using namespace std;

int main()
{
	int scores[10];
	cout << "Enter the runs in the last 10 matches: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Match " << (i + 1) << ": ";
		cin >> scores[i];
	}

	int high = scores[0]; int high_match;
	int low = scores[0]; int low_match;
	int sum = 0;
	int half_century_count = 0;
	int century_count = 0;

	cout << "Runs of the last 10 matches: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Match " << (i + 1) << ": " << scores[i] << endl;

		// Find the highest and lowest scores and their match numbers
		if (scores[i] > high)
		{
			high = scores[i];
			high_match = i + 1;
		}
		if (scores[i] < low)
		{
			low = scores[i];
			low_match = i + 1;
		}

		// Calculate the total sum of scores
		sum += scores[i];

		// Find count of half-century scores (50 to 99 runs)
		if (scores[i] >= 50 && scores[i] < 100)
		{
			half_century_count++;
		} else if (scores[i] >= 100) // Find count of century scores (100 or more runs)
		{
			century_count++;
		}
	}

	float avg = float(sum) / 10;
	cout << "Highest score: " << high << " in match " << high_match << endl;
	cout << "Lowest score: " << low << " in match " << low_match << endl;
	cout << "Average score: " << avg << endl;
	cout << "Number of half-centuries: " << half_century_count << endl;
	cout << "Number of centuries: " << century_count << endl;

	if (avg >= 50)
	{
		cout << "Excellent Form" << endl;
	}
	else if (avg >= 30)
	{
		cout << "Good Form" << endl;
	}
	else
	{
		cout << "Poor Form" << endl;
	}
	
	return 0;
}