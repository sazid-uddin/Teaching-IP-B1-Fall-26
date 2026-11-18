#include <iostream>
#define N 10 // constant -> doesn't change
using namespace std;

int main()
{
	// N = 10; // doesn't work
    int arr[N] = {1,2,3,4,5,6,7,8,9,0};
	int arr2[10] = {1,2,3,4}; // rest are initialized to 0
	int a = 5;
	a = 10; // variable -> varies

	arr[0] = 5;
	arr[1] = 5;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	cout << arr[10];

	bool b_arr[2] = {1,1};

    return 0;
}