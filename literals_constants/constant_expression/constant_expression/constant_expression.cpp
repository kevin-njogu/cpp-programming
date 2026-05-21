// constant_expression.cpp : Defines the entry point for the application.
//

#include "constant_expression.h"

using namespace std;

int main()
{
	//Constant expression are always evaluated at compile time and not the runtime

	constexpr int SOME_MAJOR_LIB_VERSION{ 12345 };
	constexpr int leg_count{ 123 };
	constexpr double PI{ 3.14 };

	//Using a constexpr variable to initialize another constexpr variable
	constexpr int otherLegCount{ leg_count };

	//Using a non constexpr variable to initialize another constexpr variable - will fail
	///int armsCount = 5;
	//constexpr int newArmCount{ armsCount }; // not okay

	//Using a const variable to initialize another constexpr variable - will fail
	const int armsCount = 5;
    constexpr int newArmCount{ armsCount }; // okay

	static_assert(SOME_MAJOR_LIB_VERSION == 12345); // Compile time checks on the programs - The application will not startup

	cout << "Application is starting up...." << endl;
	return 0;
}
