#include <iostream>
using namespace std;

int main()
{
	// v1: find the 200th triangualr number
	// v2: take input of N, then find the Nth triangual number
	// v3: take input of N, then print all triangular numbers upto the Nth triangular number
    int n;
	cin >> n;

	// 1 + 2 + ..... + 200;

	int tri_num = 0;
	for (int i = 1; i <= n; i++) {
		tri_num += i;
		cout << i << " no tri num is: " << tri_num << endl;
	}

	// cout << n << "th triangualr number: " << tri_num;

    return 0;
}