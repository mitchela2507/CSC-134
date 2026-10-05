/*
CSC 134
M4 Warup Examples
mitchella
10/5/26
Just some practice loops
*/

#include <iostream>
using namespace std;

int main(){
    bool done = true; // false- keeps going and going....
    while (done == false) {
        cout << "Still going...";
    }


     // counting loop
     int count = 1;
     while (count < 6) {
        cout << "Count is: " << count << endl;
        count++; // increment AFTER showing the number
     }

     return 0;
}