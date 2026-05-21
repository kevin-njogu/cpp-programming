// constants.cpp : Defines the entry point for the application.
//

#include "constants.h"

using namespace std;

int main()
{
	const int age{ 20 };
	const float height{ 1.67f };

	//age = 25; --> Cannot modify this
	//height = 2.20f; --> Cannot modify this

	int years{ 2 * age };

	cout << "The age is " << age << endl;
	cout << "The height is " << height << endl;
	cout << "The numberof years is " << years << endl;

	return 0;
}
