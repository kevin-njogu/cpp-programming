// project_one.cpp : Defines the entry point for the application.
//

#include "project_one.h"
#include <string>

using namespace std;

/*
* The progam will receive data from user on the console and print it out on the console
*/

int main()
{
	string fullName;
	string residence;
	int age;

	cout << "Hello and welcome !!" << endl;
	cout << "Please enter your full name below." << endl;
	getline(cin, fullName);

	cout << "Enter your country of residence." << endl;
	cin >> residence;

	cout << "How old are you ?" << endl;
	cin >> age;

	cout << "Your name is " << fullName << " from " << residence << " and you are " << age << " Years old." << endl;

	return 0;
}
