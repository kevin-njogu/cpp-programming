// fractional_numbers.cpp : Defines the entry point for the application.
//

#include "fractional_numbers.h"

using namespace std;

int main()
{
	float num1{ 1.2345678901234567890F };
	double num2{ 1.2345678901234567890 };
	long double num3{ 1.2345678901234567890L };

	cout << "size of float is: " << sizeof(num1) << endl;
	cout << "size of double is: " << sizeof(num2) << endl;
	cout << "size of long double is: " << sizeof(num3) << endl;

	cout << setprecision(20);
	cout << "num one is: " << num1 << endl; //Precison here is 7
	cout << "num two is: " << num2 << endl; //Precison here is 15
	cout << "num three is: " << num3 << endl; //Precison here is 15

	return 0;
}
