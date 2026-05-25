// integral_logic_operators.cpp : Defines the entry point for the application.
//

#include "integral_logic_operators.h"

using namespace std;

int main()
{
	int item_count{ -3 };

	//If number is anything else other than zero, - it is a truthy value
	if (item_count) {
		cout << "We have " << item_count << " In our variable";
	}
	else {
		cout << "We have " << item_count << "In our variable";
	}
	return 0;
}
