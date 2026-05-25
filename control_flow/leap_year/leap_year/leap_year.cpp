// leap_year.cpp : Defines the entry point for the application.
//

#include "leap_year.h"

using namespace std;

void is_leap_year(unsigned int year)
{

	if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))
	{
		cout << year << " is a leap year." << endl;
	}
	else {
		cout << year << " is not a leap year." << endl;
	}
}

int main()
{

	is_leap_year(2000);

	return 0;
}
