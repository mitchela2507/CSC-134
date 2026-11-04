// CSC 134
// M5HW1 - Gold
// mitchella
// 10/28/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

    void question1();
    void question2();
    void question3();
    void question4();
    void question5();



int main() {
    int choice = 0;

    while (choice != 6) {
        cout << endl;
        cout << "Main Menu" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Volume of a Block" << endl;
        cout << "3. Roman Numerals" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Quit" << endl;

        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1) {
            question1();
        }
        else if (choice == 2) {
            question2();
        }
        else if (choice == 3) {
            question3();
        }
        else if (choice == 4) {
            question4();
        }
        else if (choice == 5) {
            question5();
        }
        else if (choice == 6) {
            cout << "Goodbye! Thank you for stopping by." << endl;
        }
        else {
            cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
        }
    }

    return 0;
}

void question1() {

    string month1, month2, month3;
    double rainfall1,rainfall2, rainfall3;
    double average;

    cout << "Question #1:" << endl;

    // Input
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

   // Calculation
    average = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Output
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.";
    cout << endl; 
}

void question2() {
    double width, length, height;
    double volume;

    // Input
    cout << "Question #2:" << endl;

    cout << "Enter the width of the block: ";
    cin >> width;
    // Input validation
    while (width <= 0) {
        cout << "Width must be greater than zero. Enter again: ";
        cin >> width;
    }

    cout << "Enter the length of the block: ";
    cin >> length;
    // Input validation
    while (length <= 0) {
        cout << "Length must be greater than zero. Enter again: ";
        cin >> length;
    }

    cout << "Enter the height of the block: ";
    cin >> height;
    // Input validation
    while (height <= 0) {
        cout << "Height must be greater than zero. Enter again: ";
        cin >> height;
    }

    // Calculation
    volume = width * length * height;

    // Output
    cout << "The volume of the block is: " << volume << endl;



}

void question3() {
    int number;

    cout << "Question #3:" << endl;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    // Input validation
    while (number < 1 || number > 10) {
        cout << "Invalid number. Please enter a number from 1 to 10: ";
        cin >> number;
    }

    if (number == 1) {
        cout << "The Roman numeral version of 1 is I." << endl;
    }
    else if (number == 2) {
        cout << "The Roman numeral version of 2 is II." << endl;
    }
    else if (number == 3) {
        cout << "The Roman numeral version of 3 is III." << endl;
    }
    else if (number == 4) {
        cout << "The Roman numeral version of 4 is IV." << endl;
    }
    else if (number == 5) {
        cout << "The Roman numeral version of 5 is V." << endl;
    }
    else if (number == 6) {
        cout << "The Roman numeral version of 6 is VI." << endl;
    }
    else if (number == 7) {
        cout << "The Roman numeral version of 7 is VII." << endl;
    }
    else if (number == 8) {
        cout << "The Roman numeral version of 8 is VIII." << endl;
    }
    else if (number == 9) {
        cout << "The Roman numeral version of 9 is IX." << endl;
    }
    else if (number == 10) {
        cout << "The Roman numeral version of 10 is X." << endl;
    }
    else {
        cout << "Invalid number. Please enter a number from 1 to 10." << endl;
    }
}

void question4() {
    int choice;
    double radius, length, width, base, height;
    double area;

    cout << endl;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Input validation
    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Enter a number from 1 to 4: ";
        cin >> choice;
    }

    if (choice == 1) {
        cout << "Enter the circle's radius: ";
        cin >> radius;
        
        // Input validation
        while (radius < 0) {
            cout << "The radius cannot be less than zero." << endl;
            cout << "Enter the circle's radius: ";
            cin >> radius;
        }

        area = 3.14159 * radius * radius;

        cout << "The area is " << area << endl;
    }
    else if (choice == 2) {
        cout << "Enter the rectangle's length: ";
        cin >> length;
    // Input validation
        while (length < 0) {
            cout << "Length cannot be negative. Enter again: ";
            cin >> length;
        }

        cout << "Enter the rectangle's width: ";
        cin >> width;

        // Input validation
        while (width < 0) {
            cout << "Width cannot be negative. Enter again: ";
            cin >> width;
        }

        area = length * width;

        cout << "The area is " << area << endl;
    }
    else if (choice == 3) {
        cout << "Enter the triangle's base: ";
        cin >> base;

        cout << "Enter the triangle's height: ";
        cin >> height;

        // Input validation
        while (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height." << endl;

            cout << "Enter the triangle's base: ";
            cin >> base;

            cout << "Enter the triangle's height: ";
            cin >> height;
        }

        area = base * height * 0.5;

        cout << "The area is " << area << endl;
    }
    else if (choice == 4) {
        cout << "Returning to the main menu." << endl;
    }
}

void question5() {
    double speed, distance;
    int hours;
    int hour = 1;

    cout << "Question #5:" << endl;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

    // Input validation
    while (speed < 0 || hours < 1) {
        cout << "Speed cannot be negative and time must be at least 1 hour." << endl;

        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;

        cout << "How many hours has it traveled? ";
        cin >> hours;
    }

    cout << endl;
    cout << "Hour       Distance Traveled" << endl;
    cout << "-----------------------------" << endl;

    while (hour <= hours) {
        distance = speed * hour;

        cout << hour << "          " << distance << endl;

        hour++;
    }
}