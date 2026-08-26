// CSC 134
// M1LAB - pineapple sales
// mitchella
// 8/26/26
// Calculate pineapple prices

#include <iostream>
using namespace std;

int main()
{
    // Introduce yourself
    string name = "Mitchell"; // your own name here; list of characters
    string product = "pineapple"; // feel free to change

    cout << "Welcome to the " << name << " ";
    cout << product << " farm." << endl;

    // Do product price calculations
    int product_count = 100; // Whole numbers
    double product_price = 0.25; // in USD; decimals

    cout << "We have " << product_count << " ";
    cout << product << "(s). They are $" << product_price;
    cout << " each." << endl;

    double total_price = product_count * product_price;
    cout << "Total price for all " << product_count;
    cout << " is: $" << total_price << endl;

    return 0;
}
