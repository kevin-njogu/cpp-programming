// printing_integers_as_binary.cpp : Defines the entry point for the application.
//

#include "printing_integers_as_binary.h"
#include <bitset>

using namespace std;

int main()
{
	unsigned short int data{ 15 };

	cout << "Data as decimal: " << dec << showbase << data << endl;
	cout << "Data as hexadecimal: " << hex << showbase << data << endl;
	cout << "Data as octal: " << oct << showbase << data << endl;
	cout << "Data as binary: " << showbase << bitset<16>(data) << endl;

	return 0;
}
