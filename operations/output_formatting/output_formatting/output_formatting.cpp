// output_formatting.cpp : Defines the entry point for the application.
//

#include "output_formatting.h"

using namespace std;

int main()
{
	int col_width{ 10 };

	cout << left; //Justify the data to the left
	//cout << right; //Justify the data to the right
	cout << setw(col_width) << "Firstname" << setw(col_width) << "Latname" << setw(col_width) << "Age" << endl;
	cout << setw(col_width) << "John" << setw(col_width) << "Ripley" << setw(col_width) << 30 << endl;
	cout << setw(col_width) << "Mike" << setw(col_width) << "Bay" << setw(col_width) << 42 << endl;

	cout << endl;

	//Internal and right justfication
	cout << right;
	cout << setw(col_width) << -123.20 << endl; // both number and minus sign will be on the right
	cout << internal;
	cout << setw(col_width) << -123.20 << endl; // - sign will be on the left and the number will be on the right

	cout << endl;

	//Set fill formating
	cout << left; //Justify the data to the left
	cout << setfill('-'); // fill empty spaces with - char
	cout << setw(col_width) << "Firstname" << setw(col_width) << "Latname" << setw(col_width) << "Age" << endl;
	cout << setw(col_width) << "John" << setw(col_width) << "Ripley" << setw(col_width) << 30 << endl;
	cout << setw(col_width) << "Mike" << setw(col_width) << "Bay" << setw(col_width) << 42 << endl;

	cout << endl;

	//Showing positive numbers
	cout << left;
	cout << showpos;
	cout << setw(col_width) << 123.20 << endl; 
	cout << setw(col_width) << -123.20 << endl;
	




	return 0;
}
