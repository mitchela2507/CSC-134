/*
CSC 134
M6T1- Loops and Arrays
mitchela
11/09/2026
First try: No arrays
Some notes:
To get an average, convert total to double before dividing by size
Example:
avg = (double) total / size
*/


#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();
void method3();

// main
int main() {
    // Count # of cows per day, two different ways
    //method1();
    //method2();
    method3(); // range-based for loop

    return 0;
}

void method1() {
    // Method 1: with arrays
    string item = "cows";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for five days
    const int SIZE = 5;
    int counts [SIZE];
    int total = 0;
    double average = 0;
    // Get the input, add to total
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i << ": "; // Print days 1-5, not 0-4
        cin >> counts[i];
        total += counts[i];
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE; // double / int -> double
    cout << "Average per day: " << average << endl;
    cout << item << " caught per day:" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": " << counts[i] << endl;
    }
}

void method2() {
    // Same total and average, no arrays.
    string item = "cows";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for five days
    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;
    // Get the input, add to total
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
    }
    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE;
    cout << "Average per day: " << average << endl;
}

void method3() {
    // Range-based for loop
    // Cannot buffer overflow, because we don't handle the idex ourdelves
    const int SIZE = 5;
    int counts[5] = {0, 0, 0, 0, 0};
    cout << "Count cow per day" << endl;
    // This loop changes the array, so needs reference & symbol
    for (int& count: counts) {
        // "For count, in counts"
        cout << "> ";
        cin >> count;
    }
    // Now do total and average
    int total = 0;
    double average = 0;
    //NOTE: this loop only read values, so doesn't need the &
    for (int count: counts) {
        total += count;
    }
    average = (double) total / SIZE;
    cout << "Total: " << total << endl << "Average: " << average << endl; 
}