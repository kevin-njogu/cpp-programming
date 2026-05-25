// switch_statement.cpp : Defines the entry point for the application.
//

#include "switch_statement.h"

using namespace std;

//Tool
const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int main()
{
	int tool{ Rectangle };

	switch (tool) {
	case Pen:
		cout << "Pen is acive .." << endl;
		break;
	case Marker:
		cout << "Marker is active ..." << endl;
		break;
	case Eraser:
		cout << "Eraser is actve ..." << endl;
		break;
	case Rectangle:
	case Circle:
		cout << "Drawing shapes ..." << endl;
		break;
	case Ellipse:
		cout << "Ellipse is active ..." << endl;
		break;
	default:
		cout << "Invalid tool, try again !!" << endl;
	}


	cout << "Moving on..." << endl;

	return 0;
}
