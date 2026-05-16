// decimal_integers.cpp : Defines the entry point for the application.
//

#include "decimal_integers.h"

using namespace std;

int main()
{
	//can have garbage value
	int num1{};

	//Wil initialize to zero
	int num2{};

	//Will initialize to 10
	int num3{ 10 };

	//Will initialize to 15
	int num4{ 15 };

	//Will initilize to the output of the expresssion
	int num5{ num3 + num4 };

	//Might fail due to conversion from double to int
	//int num6{ 2.9 }; //conversion from 'double' to 'int' requires a narrowing conversion//

	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;
	cout << "num3 is: " << num3 << endl;
	cout << "num5 is: " << num5 << endl;
	//cout << "num6 is: " << num6 << endl;

	return 0;
}
