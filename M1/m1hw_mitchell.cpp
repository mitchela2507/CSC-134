// CSC 134
/*
M1HW - Movie Talk
Mitchell, A
8/31/26
Example: Talk about Hunger Games: Catching Fire.
*/

#include <iostream>
using namespace std;

// Starting point
int main() {

    // Purpose: Practice using string, int, and double within natural text.
    // Declare variables
    string movie_name; // Film Title as in IMDB
    int movie_year; // year of release
    double movie_grossm; // millions od USD of the gross

    // Example: Hunger Games: Catchong Fire
    movie_name = "Hunger Games: Catching Fire ";
    movie_year = 2013;
    movie_grossm = 1.23; // about 2 billion, internationally

    // Print the movie blurb
    cout <<  "The movie " << movie_name << "came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_grossm << " billion." << endl;

    // Print a movie quote
    cout << "QUOTE:" << endl <<  "\t\"Remember who the real enemy is.\" " << endl;

    return 0; // no errors
}
