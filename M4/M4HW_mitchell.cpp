// CSC 134
// M4HW1 - Gold
// mitchella
// 10/12/2026

#include <iostream>
using namespace std;

    void question1();
    void question2();
    void question3();


int main() {
    question1();
    question2();
    question3();
}

void question1() {
    cout << "Question #1:" << endl;

    int firstNum, answer;
    firstNum = 5;

    int i = 1;

    while (i <= 12) {
        answer = firstNum * i;
        cout << firstNum << " times " << i
             << " is " << answer << "." << endl;

        i++;
    }
    cout << endl;
}

void question2() {
    cout << "Question #2:" << endl;

    int number;
    int multiplier = 1;

    cout << "Enter a number from 1 to 12? ";
    cin >> number;


    while (multiplier <= 12) {
        cout << number << " times " << multiplier
             << " is " << number * multiplier << "." << endl;

        multiplier++;
    }
    cout << endl;

}

void question3() {
    cout << "Question #3:" << endl;

    int number;
    int multiplier = 1;
    
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    while (number < 1 || number > 12) {
        cout << "Invalid number. Please enter a number from 1 to 12: ";
        cin >> number;
    }

    while (multiplier <= 12) {
        cout << number << " times " << multiplier
             << " is " << number * multiplier << "." << endl;

        multiplier++;
    }
    cout << endl;
}