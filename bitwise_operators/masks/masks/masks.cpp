// masks.cpp : Defines the entry point for the application.
//

#include "masks.h"
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
	const int COLUMN_WIDTH{ 20 };

	const unsigned char mask_bit_0{ 0b00000001 };
	const unsigned char mask_bit_1{ 0b00000010 };
	const unsigned char mask_bit_2{ 0b00000100 };
	const unsigned char mask_bit_3{ 0b00001000 };
	const unsigned char mask_bit_4{ 0b00010000 };
	const unsigned char mask_bit_5{ 0b00100000 };
	const unsigned char mask_bit_6{ 0b01000000 };
	const unsigned char mask_bit_7{ 0b10000000 };

	//Sandbox variable
	unsigned char var{ 0b00000000 };

	//Initial variable
	cout << setw(COLUMN_WIDTH) << "Var: " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

	//Set bit at position 0 to one
	cout << "Set bit at position 0 to 1: " << endl;
	var |= mask_bit_0;
	cout << setw(COLUMN_WIDTH) << "Var: " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

	//Set bit at position 5 to one
	cout << "Set bit at position 5 to 1: " << endl;
	var |= mask_bit_5;
	cout << setw(COLUMN_WIDTH) << "Var: " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

	//Reset bit at position 0 to 0
	cout << "Reset bit at position 0 to 0: " << endl;
	var &= (~mask_bit_0);
	cout << setw(COLUMN_WIDTH) << "Var: " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

	//set all bits to 1
	cout << "set all bits to 1: " << endl;
	var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
	cout << setw(COLUMN_WIDTH) << "Var: " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

	//Toggling specific bits
	cout << "Toggling specific bits: " << endl;
	var ^= (mask_bit_2 | mask_bit_3 | mask_bit_5 | mask_bit_7);
	cout << setw(COLUMN_WIDTH) << "Var: " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;
	cout << "Bit one is: " << ((value & mask_bit_0) >> 0) << ", do something with it" << endl;



	return 0;
}
