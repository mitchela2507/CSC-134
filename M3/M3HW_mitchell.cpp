// CSC 134
// Module 3 HW (M3HW) - Gold
// mitchella
// 9/30/2026

#include <iostream>
using namespace std;

    void question1();
    void question2();
    void question3();
    void question4();


int main() {
    //question1();
    question2();
    //question3();
    //question4();
}

void question1() {
    string choice;

    cout << "Hello. I'm a C++ program!";
    cout << "Do you like me? Please type yes or no: ";
    cin >> choice;

    if (choice == "yes") {
        cout << "That's great! I'm sure we'll get along.";
    }
    else if (choice == "no") {
        cout << "Well, maybe you'll learn to like me later.";
    }
    else {
        cout << "If you're not sure... that's OK.";
    }
}

void question2() {
     // Declare variables
    string mealName;
    double mealPrice, tipPercent;
    double taxRate = 0.08;
    double taxAmount, tipRate, tipAmount, total;

    // Input
    getline(cin, mealName);
    cin >> mealPrice;
    cin >> tipPercent;

    // Processing
    taxAmount = mealPrice * taxRate;
    tipRate = tipPercent / 100.0;
    tipAmount = mealPrice * tipRate;
    total = mealPrice + taxAmount + tipAmount;

    // Output
    cout << fixed << setprecision(2);
    cout << "Meal: $" << mealPrice << endl;
    cout << "Tax:  $" << taxAmount << endl;
    cout << "Tip:  $" << tipAmount << endl;
    cout << "Total:$" << total << endl;

    return 0; // no errors
    
}

void question3() {
    
}

void question4() {
    
}

