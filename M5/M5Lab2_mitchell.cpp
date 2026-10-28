// CSC 134
// M5LAB2
// mitchella
// 10/28/2026

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength(){
    double length;
    cout << "Enter the rectangle's length: " << endl;
    cin >> length;
    return length;
}

double getWidth(){
    double width;
    cout << "Enter the rectangle's width: " << endl;
    cin >> width;
    return width;
}

double getArea(double length, double width){
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Rectangle Area: " << area << endl;
}
