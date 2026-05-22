// logical_bitwise_operator.cpp : Defines the entry point for the application.
//

#include "logical_bitwise_operator.h"
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
	const int COLUMN_WIDTH{ 20 };

	unsigned char val1{ 0x3 };
	unsigned char val2{ 0x5 };

	cout << setw(COLUMN_WIDTH) << "Value 1 : " << setw(COLUMN_WIDTH) << bitset<8>(val1) << endl;
	cout << setw(COLUMN_WIDTH) << "Value 2 : " << setw(COLUMN_WIDTH) << bitset<8>(val2) << endl;

	//AND bitwise operator &
	cout << endl;
	cout << "Bitwise AND ..." << endl;
	cout << setw(COLUMN_WIDTH) << "Value1 & Value2 : " << setw(COLUMN_WIDTH) << bitset<8>(val1 & val2) << endl;
	cout << endl;


	//OR bitwise operator |
	cout << endl;
	cout << "Bitwise OR ..." << endl;
	cout << setw(COLUMN_WIDTH) << "Value1 | Value2 : " << setw(COLUMN_WIDTH) << bitset<8>(val1 | val2) << endl;
	cout << endl;


	//NOT bitwise operator ~
	cout << endl;
	cout << "Bitwise OR ..." << endl;
	cout << setw(COLUMN_WIDTH) << "NOT Value 1 : " << setw(COLUMN_WIDTH) << bitset<8>(~val1) << endl;
	cout << setw(COLUMN_WIDTH) << "NOT Value 2 : " << setw(COLUMN_WIDTH) << bitset<8>(~val2) << endl;
	cout << endl;


	//XOR bitwise operator ^
	cout << endl;
	cout << "Bitwise XOR ..." << endl;
	cout << setw(COLUMN_WIDTH) << "Value1 ^ Value2 : " << setw(COLUMN_WIDTH) << bitset<8>(val1 ^ val2) << endl;
	cout << endl;

	return 0;
}
