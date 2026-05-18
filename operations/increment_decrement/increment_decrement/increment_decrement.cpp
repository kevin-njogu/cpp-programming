// increment_decrement.cpp : Defines the entry point for the application.
//

#include "increment_decrement.h"

using namespace std;

int main()
{
	int value{ 5 };
	int value1{ 5 };
	int value2{ 6 };
	int value3{ 7 };

	//Increment with postfix
	cout << "the value is incrementing:" << value++ << endl; // this will print 5
	cout << "the value has incremented:" << value << endl; // this will print 6

	//Decrement postfix
	cout << "the value is decrementing:" << value1-- << endl; // this will print 5
	cout << "the value has decremented:" << value1 << endl; // this will print 4

	//Increment prefix
	cout << "the value is incrementing:" << ++value2 << endl; // this will print 7

	//Decrement prefix
	cout << "the value is decrementing:" << --value3 << endl; // this will print 6

	return 0;
}
