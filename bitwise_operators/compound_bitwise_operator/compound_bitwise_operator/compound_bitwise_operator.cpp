// compound_bitwise_operator.cpp : Defines the entry point for the application.
//

#include "compound_bitwise_operator.h"
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
	const int COLUMN_WIDTH{ 20 };

	unsigned char value{ 0b00110100 };

	//INITIAL VALUE
	cout << endl;
	cout << "Initial Value..." << endl;
	cout << setw(COLUMN_WIDTH) << "Value: " << setw(COLUMN_WIDTH) << bitset<8>(value) << endl;
	cout << endl;

	//COMPOUND LEFT BIT SHIFT <<=
	cout << endl;
	cout << "Value after shifting 2 bit potions to the left..." << endl;
	value <<= 2;
	cout << setw(COLUMN_WIDTH) << "Value: " << setw(COLUMN_WIDTH) << bitset<8>(value) << endl;
	cout << endl;


	//COMPOUND RIGHT BIT SHIFT >>=
	cout << endl;
	cout << "Value after shifting 2 bit potions to the right..." << endl;
	value >>= 2;
	cout << setw(COLUMN_WIDTH) << "Value: " << setw(COLUMN_WIDTH) << bitset<8>(value) << endl;
	cout << endl;

	//COMPOUND OR |=
	cout << endl;
	cout << "Value after compound OR operator..." << endl;
	value |= 0b00000010;
	cout << setw(COLUMN_WIDTH) << "Value: " << setw(COLUMN_WIDTH) << bitset<8>(value) << endl;
	cout << endl;

	//COMPOUND AND &=
	cout << endl;
	cout << "Value after compound AND operator..." << endl;
	value &= 0b00000010;
	cout << setw(COLUMN_WIDTH) << "Value: " << setw(COLUMN_WIDTH) << bitset<8>(value) << endl;
	cout << endl;

	//COMPOUND AND ^=
	cout << endl;
	cout << "Value after compound XOR operator..." << endl;
	value ^= 0b00000010;
	cout << setw(COLUMN_WIDTH) << "Value: " << setw(COLUMN_WIDTH) << bitset<8>(value) << endl;
	cout << endl;


	return 0;
}
