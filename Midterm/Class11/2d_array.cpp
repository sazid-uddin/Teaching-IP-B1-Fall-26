#include <iostream>
using namespace std;

int main()
{
	// int marks[row][col]; // [row][col]

	// cin >> marks[0][0];

	// full initialization
	int table[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	// int table[2][3] = { {1,2,3}, {4,5,6} };

	// int table[2][3] = {{1,2},4,5,6};
	// // {{1,2,4},{5,6,0}}
	// // {{1,2,0}, {4,5,6}}

	// variable -> vary vs const -> doesn't change
	// int a = 5;
	// a = 10;

	// const int b = 5;
	// b = 10;

	// const char c = 'd';
	// c = 'X':

	// 2D array declaration
	int row = 2;
	int col = 2;
	int arr[row][col];
	// sizeof(arr) / 4 // 24 bytes / 4 = 6

	// 2D array input
	// nested loops
	for (int i = 0; i < row; i++) { 		// outer loop -> row iteration
		for (int j = 0; j < col; j++) { 	// inner loop -> col interation
			cin >> arr[i][j];
		}
	}

	// 2D array output
	// nested loops
	for (int i = 0; i < row; i++) { 		// outer loop -> row iteration
		for (int j = 0; j < col; j++) { 	// inner loop -> col interation
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int sum = 0;
	for (int i = 0; i < row; i++) { 		// outer loop -> row iteration
		for (int j = 0; j < col; j++) { 	// inner loop -> col interation
			sum += arr[i][j];
		}
	}

	cout << "Sum: " << sum << endl;


	// row-wise sum
	for (int i = 0; i < row; i++) { 		// outer loop -> row iteration
		int row_sum = 0;
		for (int j = 0; j < col; j++) { 	// inner loop -> col interation
			row_sum += arr[i][j];
		}
		cout << "Sum of row " << i << ": " << row_sum << endl;
	}


    return 0;
}