// else_if.cpp : Defines the entry point for the application.
//

#include "else_if.h"

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
	int tool{ Eraser };

	if (tool == Pen) {
		cout << "The active tools is Pen: " << endl;
	}
	else if (tool == Marker) {
		cout << "The active tools is Marker: " << endl;
	}
	else if (tool == Eraser) {
		cout << "The active tools is Eraser: " << endl;
	}
	else if (tool == Rectangle) {
		cout << "The active tools is Rectangle: " << endl;
	}
	else if (tool == Circle) {
		cout << "The active tools is Circle: " << endl;
	}
	else if (tool == Ellipse) {
		cout << "The active tools is Ellipse: " << endl;
	}

	cout << "MOVING ON ...." << endl;
	return 0;
}
