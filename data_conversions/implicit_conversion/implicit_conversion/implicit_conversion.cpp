// implicit_conversion.cpp : Defines the entry point for the application.
//

#include "implicit_conversion.h"

using namespace std;

int main()
{
	//Implicit conversion - Where compiler converts a datatype to another without the input if the developer
	//The datatype with the smaller memory size is converted to the datatype with the larger memory size unless doing variable asignment

	double unit_price{ 45.56 };
	int units{ 10 };

	auto total_price = unit_price * units;

	cout << "The total price is: " << total_price << endl;

	// This swill be 8 bytes in memory since the output has been implicitly converted to double
	cout << "The size in memory for total price is: " << sizeof(total_price) << endl;


	//Implicit conversion through assignment - this will convert double to int since it is an assignment implicit conversion
	int x;
	double y{ 45.44 };
	x = static_cast<int>(y); //

	cout << "The value of x is: " << x << endl;
	cout << "The size in memory for x is: " << sizeof(x) << endl;

	return 0;
}
