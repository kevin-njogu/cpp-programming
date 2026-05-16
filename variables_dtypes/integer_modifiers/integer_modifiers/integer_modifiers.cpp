// integer_modifiers.cpp : Defines the entry point for the application.
//

#include "integer_modifiers.h"

using namespace std;

int main()
{
	//store positive or negative
	int value1{10};
	int value2{ -300 };

	//store positive or negative
	signed int value3{10};
	signed int value4{-300};

	//store only positive values
	unsigned int value5{400};

	short num1{ 1345 };
	long num2{ 267 };

	cout << "value one: " << value1 << endl;
	cout << "value two: " << value2 << endl;
	cout << "value three: " << value3 << endl;
	cout << "value four: " << value4 << endl;
	cout << "value five: " << value5 << endl;
	cout << "The size of num1: " << sizeof(num1) << endl;
	cout << "Thw size of num2: " << sizeof(num2) << endl;


	return 0;
}
