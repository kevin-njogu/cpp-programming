// if_clause.cpp : Defines the entry point for the application.
//

#include "if_clause.h"

using namespace std;

int main()
{
	int num1{ 55 };
	int num2{ 60 };
	bool green_light{ true };
	bool police_stop{ false };

	bool result = (num1 < num2);
	cout << "The result is: " << result << endl;
	cout << "The result is: " << boolalpha << result << endl;

	cout << endl;
	cout << "Free standing if statement" << endl;

	//If statement
	/*
	if (result == true) {
		cout << num1 << " Is less than " << num2 << endl;
	}

	if (!(result == true)) {
		cout << num1 << " Is greater then " << num2 << endl;
	}

	if (result != true) {
		cout << num1 << " Is greater then " << num2 << endl;
	}*/

	if (num1 < num2) {
		cout << num1 << " Is less than " << num2 << endl;
	}
	else {
		cout << num1 << " Is not less than " << num2 << endl;
	}

	//Nested if statement
	if (green_light) {
		if (!police_stop) {
			cout << "Please Go..." << endl;
		}
		else 
		{
			cout << "Stop !!!" << endl;
		}
	}
	else {
		cout << "Stop !!!" << endl;
	}

	//If statement and logical operators
	if (green_light && !police_stop) {
		cout << "Please go ..." << endl;
	}
	else
	{
		cout << "Stop !!!" << endl;
	}

	return 0;
}
