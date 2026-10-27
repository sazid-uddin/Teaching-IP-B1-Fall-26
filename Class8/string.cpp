#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	// char arr[5];
	// char arr[6] = {'H', 'e', 'l', 'l', 'o', '!'};
	// char arr[] = {'H', 'e', 'l', 'l', 'o', '!'};

	char arr[10] = {'H', 'e', 'l', 'l', 'o', '!'}; 
	// rest 4 are initialized to 0
	// char arr[10] = { }; 
	// all are initialized to 0

	for (int i = 0; i < 6; i++) {
		cout << arr[i];
	}

	cout << endl;

	string str;
	str = "ABC";

	cout << "ABC" << endl;
	cout << str << endl;

	// null character: marks the termination of the string
	// char s1[] = {'a', 'b', 'c', '\0'}; 
	// char s2[] = "abc";
	// equivalent

	// cout << s1;
	// cout << s2;

	// Consider the following two declarations. Which best represents their array contents? 

	// 1) char x[] = "";    and   2) char x[] = "x";

	// a) [ ] and ['x'] // misdirection

	// b) ['\0'] and ['x'] // misdirection

	// c) ['\0'] and ['x', '\0'] // correction

	// d) ['0'] and ['x', 'x', '\0'] // incorrect

	//strcat(s1, s2) -> string concatenation
	char str1[] = "abc";
	char str2[] = "xyz";

	// {a, b, c, x, y, z, \0}
	// abcxyz

	cout << strcat(str1, str2) << endl;

	// strcmp(s1, s2) -> string comparison

	cout << strcmp(str1, str2) << endl;
	// returns negative number if the first string is smaller
	cout << strcmp(str2, str1) << endl;
	// returns positive number if the first string is greater
	cout << strcmp(str1, str1) << endl;
	// returns 0 when both strings are equal

	// a = 97
	// x = 120
	// a < x

	// "abc" "xyz"
	// "abc" => 97+98+99 = 294
	// "xyz" => 120+121+122 = 363

	// strcpy(s1, s2) -> string copy

	strcpy(str1, str2);
	cout << str1 << endl;

	char str_to_copy[] = "hello abc";
	char target[100];

	strcpy(target, str_to_copy);

	cout << target << endl;

	// strlen(s) -> string length

	cout << strlen(target) << endl; 
	// count the characters
	cout << sizeof(str_to_copy)  << " bytes" << endl; 
	// measure the memory space taken by the variable/array

	int a;
	cout << sizeof(a) << '\n';

	// escape characters
	// \0
	// \n -> new line
	// \t -> tab character
	// \b -> backspace
	// cout << "abcd";
	// cout << "\b\b\b";

	char s1[] = "abc";
	char s2[] = "xyzabc";

	cout << endl << strncat(s1, s2, 10);
	cout << endl << strncmp(s1, s2, 10);

	return 0;
}