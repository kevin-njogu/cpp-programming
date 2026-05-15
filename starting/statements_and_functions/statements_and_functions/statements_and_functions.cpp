// statements_and_functions.cpp : Defines the entry point for the application.
//

#include "statements_and_functions.h"

using namespace std;

int addTwoNumbers(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int firstNum {19};
	int secondNum{7};

	cout << "The sum of the two numbers is: " << addTwoNumbers(firstNum, secondNum) << endl;

	cout << "Another sum is equal to: " << addTwoNumbers(32, 8) << endl;

	cout << "Another sum is equal to: " << addTwoNumbers(95, 10) << endl;

	return 0;
}
