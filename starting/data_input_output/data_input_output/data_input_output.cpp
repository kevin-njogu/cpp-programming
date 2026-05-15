// data_input_output.cpp : Defines the entry point for the application.
//

#include "data_input_output.h"

using namespace std;

int main()
{
	int age;
	string firstName;
	string lastName;
	string fullName;

	cout << "Please enter your first name and last name: " << endl;
	cin >> firstName >> lastName;

	cout << "Please enter your age: " << endl;
	cin >> age;

	cin.ignore();

	cout << "Please enter your full name: " << endl;
	getline(cin, fullName);

	cout << "Hello: " << firstName << " " << lastName << ". " << "Your age is: " << age << " years old." << endl;
	cout << "Your full name is: " << fullName << endl;

	return 0;
}
