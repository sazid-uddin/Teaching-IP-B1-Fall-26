// boilerplate
#include <iostream>
using namespace std;

int main()
{

    // while (cond) {
	// 	// body
	// }
	// cond -> body -> cond .....
	// do-while
	// body -> cond -> body -> cond .....

	// do {
	// 	// body
	// } while (cond)

	int n;
	// cout << "Please enter a negative number: ";
	// cin >> n;

	// while (n >= 0) { // 0 is a non-negative number
	// 	cout << "Invalid input. please try again: ";
	// 	cin >> n;
	// }

	// cout << "Congrats. you have entered a negative number;";

	do {
		cout << "Please enter a negative number: ";
		cin >> n;
	} while (n >= 0);


    return 0;
}