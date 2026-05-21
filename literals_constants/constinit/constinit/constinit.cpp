// constinit.cpp : Defines the entry point for the application.
//

#include "constinit.h"

using namespace std;

/*
constinit guarantees static initialization happens at compile time But it does NOT mean the variable itself is a compile-time constant expression
Only constexpr guarantees that.
*/


//const int val1{ 33 }; //This will not work since const does not guarantee the value to be known at compile time
constexpr int val1{ 33 }; 

constexpr int val2{ 34 };
int val3(35);

constinit int age = 88;
const constinit int age1{ val1 };

//constinit int age2{ age1 }; //Does not guarantee the variable will be known at compile time

//constinit int age3{ val3 }; // cannot initialize constinit with a non-const


const constinit double weight{ 33.33 };


int main()
{
	cout << "age: " << age << endl;
	cout << "age1: " << age1 << endl;
	//cout << "age2: " << age2 << endl;
	//cout << "age3: " << age3 << endl;
	return 0;
}
 