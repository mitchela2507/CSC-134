// CSC 134
// M5HW1 - Gold
// mitchella
// 10/28/2026

#include <iostream>
#include <iomanip>
using namespace std;

    void question1();
    void question2();
    void question3();
    void question4();
    void question5();
    void question6();


int main() {
    //question1();
    //question2();
    question3();
    //question4();
    //question5();
    //question6();
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

    cout << "Enter the length of the block: ";
    cin >> length;

    cout << "Enter the height of the block: ";
    cin >> height;

    // Calculation
    volume = width * length * height;

    // Output
    cout << "The volume of the block is: " << volume << endl;



}

void question3() {
    cout << "Question #3:" << endl;
}

void question4() {
    cout << "Question #4:" << endl;
}

void question5() {
    cout << "Question #5:" << endl;
}

void question6() {
    cout << "Question #6:" << endl;
}