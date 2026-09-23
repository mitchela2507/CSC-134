// CSC 134
// M3T2 - Random Numbers
// mitchella
// 9/23/2026
// Start writing a simple "Craps" casino game.

#include <iostream>
#include <cstdlib> // for random
#include <ctime>   // for time()
using namespace std;

int main() {

    // random number generator
    // rand() needs to be seeded with srand()
    // most "random" is to use the time
    srand(time(0)); // current seed is the time right now
    // cout << rand() << " " << rand() << endl;
    // To get a number in a usable size, use % (modulo)
    int roll1 = (rand() % 6) + 1; // mod 6 is 0-5, so add one for 1-6
    int roll2 = (rand() % 6) + 1;
    //int roll1 = 4; (another way to go)
    //int roll2 = 3; (another way to go)
    int total = roll1 + roll2;
    int point; // omly used if you roll a point
    cout << "You rolled: " << roll1 << " + " << roll2 << " = " << total << endl;
    // Processing -- figure out win, lose, or point
    // || is OR -- both sides must be full Boolean expressions (&& is AND)
    if (total == 7 || total == 11) {
        /* for fun (optional), use the names of he rolls
        if (total == 7) {
            cout << "Lucky Number Seven!" << endl;
       }
        if (total == 11) {
            cout << "Lucky eleven!" << endl;
        }*/
        cout <<"You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "Yoe lose." << endl;
    }
    else {
        //point numbers (TODO in Modlue 4)
        point = total; // last roll becomes the point number
        cout << "Your point number is: " << point << endl;
        cout << "Keep rolling: point is win, 7 is loss." << endl;
        // we'll finsih this later because it requires a loop.
    }

    return 0;
}