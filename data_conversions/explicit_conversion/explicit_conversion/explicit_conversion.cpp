// explicit_conversion.cpp : Defines the entry point for the application.
//

#include "explicit_conversion.h"

using namespace std;

int main()
{
	//Explicit conversion is the conversion done by the developer

	double age{ 22.5 };
	double age1{ 33.2 };
	int sum1 = 0;
	int sum2 = 0;

	sum1 = static_cast<int>(age) + static_cast<int>(age1);
	sum2 = static_cast<int>(age + age1);

	cout << "The value of sum1 is: " << sum1 << endl;
	cout << "The value of sum2 is: " << sum2 << endl;
	return 0;
}
