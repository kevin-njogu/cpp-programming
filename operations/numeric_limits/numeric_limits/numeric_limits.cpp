// numeric_limits.cpp : Defines the entry point for the application.
//

#include "numeric_limits.h"

using namespace std;

int main()
{
	cout << "The range of short is: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
	cout << "The range of long is: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
	cout << "The range of int is: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
	cout << "The range of float is: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
	
	return 0;
}
