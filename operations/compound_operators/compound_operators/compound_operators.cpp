// compound_operators.cpp : Defines the entry point for the application.
//

#include "compound_operators.h"

using namespace std;

int main()
{
	int value{ 45 };

	cout << "The value is: " << value << endl; // == 45

	value += 5;
	cout << "The value (after +=5): " << value << endl; // ==50

	value -= 5;
	cout << "The value (after -=5): " << value << endl; // ==45

	value *= 2;
	cout << "The value (after *=5): " << value << endl; // ==90

	value /= 3;
	cout << "The value (after /=5): " << value << endl; // ==30

	value %= 11;
	cout << "The value (after %=5): " << value << endl; // ==8


	return 0;
}
