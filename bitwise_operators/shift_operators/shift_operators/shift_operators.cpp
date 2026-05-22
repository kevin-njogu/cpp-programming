// shift_operators.cpp : Defines the entry point for the application.
//

#include "shift_operators.h"
#include <bitset>

using namespace std;

int main()
{
	unsigned short int value{ 0xff0u };

	cout << "Value : " << bitset<16>(value) << ", dec: " << value << endl;

	//Shifting right divides the value by 2^n - n being the bit positions shifted
	cout << endl;
	cout << "Shifting right by 1 bit position >> " << endl;
	value = static_cast<unsigned short int>(value >> 1);
	cout << "Value : " << bitset<16>(value) << ", dec: " << value << " After shifting 1 bit position to the right" << endl;

	//Shifting left multiplies the value by 2^n - n being the bit positions shifted
	cout << endl;
	cout << "Shifting left by 1 bit position >> " << endl;
	value = static_cast<unsigned short int>(value << 2);
	cout << "Value : " << bitset<16>(value) << ", dec: " << value << " After shifting 2 bit position to the left" << endl;

	return 0;
}
