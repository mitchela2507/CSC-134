// CSC 134
// M3HW1 - Gold
// mitchella
// 9/30/2026

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

    void question1();
    void question2();
    void question3();
    void question4();


int main() {
    question1();
    question2();
    question3();
    question4();
}

void question1() {
    string choice;

    cout << "Question #1:" << endl;
    cout << "Hello. I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no: " << endl;
    cin >> choice;

    if (choice == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (choice == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl;
}

void question2() {
     // Declare variables
    double mealPrice;
    double taxRate = 0.08;
    double taxAmount;
    double tipAmount = 0;
    double total;
    int orderType;

    cout << "Question #2:" << endl;

    // Input
    cout << "Please enter the price of the meal: $";
    cin >> mealPrice;

    cout << "Please enter 1 if the order is dine-in." << endl;
    cout << "Please enter 2 if the order is takeaway." << endl;
    cout << "Choice: ";
    cin >> orderType;
    

    // Processing
     taxAmount = mealPrice * taxRate;

    if (orderType == 1){
        tipAmount = mealPrice * 0.15;
    }
    else {
        tipAmount = 0;
    }
    total = mealPrice + taxAmount + tipAmount;

    // Output
    string line = "----------------------------------";
    cout << line << endl;

    cout << setprecision(2) << fixed;
    cout << setw(20) << "Meal Price: " << setw(10) << mealPrice << endl;
    cout << setw(20) << "Tax: " << setw(10) << taxAmount << endl;
    if (orderType == 1){
        cout << setw(20) << "Tip: " << setw(10) << tipAmount << endl;
    }
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << setw(30) << "Thank You Come Again" << endl;
    cout << endl;
}

void question3() {
    int choice;
    int secondChoice;

    cout << "Question #3:" << endl;

    cout << "You enter a haunted house and see two doors." << endl;
    cout << "Which door do you choose?" << endl;
    cout << "1. Red door" << endl;
    cout << "2. Blue door" << endl;
    cout << "? ";
    cin >> choice;

    if (1 == choice) {
        cout << "You open the red door." << endl;
        cout << "The door suddenly slams shut behind you!" << endl;
        cout << "Game Over!" << endl;
    }
    else if (2 == choice) {
        cout << "You open the blue door." << endl;
        cout << "You find a hallway with two more doors." << endl;

        cout << "Which door do you choose?" << endl;
        cout << "1. The door with the candle." << endl;
        cout << "2. The door with the key." << endl;
        cout << "? ";
        cin >> secondChoice;

        if (1 == secondChoice) {
            cout << "You open the door with the candle." << endl;
            cout << "The lights go out and you are defeated!" << endl;
        }
        else if (2 == secondChoice) {
            cout << "You open the door with the key." << endl;
            cout << "You find the way out of the haunted house!" << endl;
            cout << "You win!" << endl;
        }
        else {
            cout << "I'm sorry, that is not a valid choice." << endl;
        }
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    cout << "Thank you for playing!" << endl;
    cout << endl;
}

void question4() {
    int number1;
    int number2;
    int answer;
    int correctAnswer;

    cout << "Question #4:" << endl;

    srand(time(0));
    number1 = (rand() % 9) + 1;
    number2 = (rand() % 9) + 1;

    correctAnswer = number1 + number2;

    cout << "What is " << number1 << " plus " << number2 << "?" << endl;
    cin >> answer;

    if (answer == correctAnswer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect." << endl;
    }

    cout << endl;

}

