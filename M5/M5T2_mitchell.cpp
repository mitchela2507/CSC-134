// CSC 134
// M5T2 - More practice with Functions
// mitchella
// Partner: AI
// 10/21/2026



#include <iostream>
using namespace std;

// Prototypes: Declare functions here, define them under main.
int square(int num);                             // Does the math
void printAnswerLine(int number, int squared);   // prints a full line of the table

int main(){
    cout << "Tables of Squares Program" << endl;

    for (int i = 1; i <= 10; i++) {
        int answer = square(i); 
        printAnswerLine(i, answer); 
    }
    return 0;
}

// Define functions here.
int square(int num) {
    // Does the math -- input, an integer, output, that integer squared.
    return num * num;
}

void printAnswerLine(int number, int squared) {
    // Print one line of the table of squares.
    // example output:
    // 3       9
    cout << number << " squared is " << squared << endl;
}