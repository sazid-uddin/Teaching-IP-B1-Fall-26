#include <iostream>
using namespace std;

int main()
{
	// how to find the address of a variable
	int a = 5;
	cout << "Value of a: " << a << endl;
	cout << "Address of a: " << &a << endl; // ampersand symbol | address operator

	// how to declare a pointer
	int* addr; // int *addr // int * addr
	addr = &a;

	// pointer that points to a char
	char c = '0';
	char* p = &c;

	// accessing the value pointed by a pointer
	cout << "Value pointed by addr: " << *addr << endl; // indirection operator
	cout << "Value pointed by p: " << *p << endl;

	*addr = 10;
	// pointer should be the same type that it points to
	// char* p1 = &a; // wrong

	void* p2 = &c; // declaring a generic pointer
	cout << *(char*)p2;
	(int*)p2; // casting generic to int pointer


	// indirection/dereferencing operator
	// can be used in two ways
	// 1. pointer declaration
	// int* p3;
	// 2. to access the value pointed by the pointer
	// *p3;

	return 0;
}