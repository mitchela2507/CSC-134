// CSC 134
// M3BONUS - Guess the Number (AI Assisted Development)
// mitchella
// 10/14/2026


#include <iostream>
#include <cstdlib>   // gives us rand() and srand()
#include <ctime>     // gives us time(), used to "seed" the random numbers
using namespace std;

// Function prototypes (the "table of contents")
int get_random_number(int min, int max);
int get_guess();
void play_game();

// main: shows a menu and keeps going until the player picks 0
int main() {
    // Seed the random number generator ONCE, at the start of the program.
    // time(0) is the current clock time, so the seed is different every run.
    // Without this, you'd get the same "random" numbers every time!
    srand(time(0));

    int choice;
    bool keep_going = true;

    while (true == keep_going) {
        cout << endl;
        cout << "=== Guess the Number ===" << endl;
        cout << "1. Play" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";

        cin >> choice;

        // If the user typed letters instead of a number, cin goes into a
        // "fail" state. We have to reset it, or the loop would repeat forever.
        if (cin.fail()) {
            cin.clear();              // reset the error state
            cin.ignore(1000, '\n');   // throw away the bad input
            choice = -1;              // make sure we land in the "else" below
        }

        if (1 == choice) {
            play_game();
        }
        else if (0 == choice) {
            cout << "Thanks for playing. Bye!" << endl;
            keep_going = false;
        }
        else {
            cout << "Not a valid choice." << endl;
        }
    }
    return 0;
}

// get_random_number: returns a random whole number from min to max (inclusive)
// rand() gives a huge random number. The % (modulo) operator gives the
// remainder after division, which squeezes it into a smaller range.
// Example: rand() % 100 gives 0 to 99, so adding 1 makes it 1 to 100.
int get_random_number(int min, int max) {
    int range = max - min + 1;
    return (rand() % range) + min;
}

// get_guess: asks for a guess and keeps asking until it's a real number.
// This is the "loop to catch bad input" idea from the assignment.
int get_guess() {
    int guess;
    bool got_good_input = false;

    while (false == got_good_input) {
        cout << "Your guess: ";
        cin >> guess;

        if (cin.fail()) {
            // Not a number (like "abc"), so clean up and try again
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a whole number." << endl;
        }
        else {
            got_good_input = true;  // it worked, so the loop can end
        }
    }
    return guess;
}

// play_game: one full round of the game
void play_game() {
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;

    // The computer picks the secret number
    int secret = get_random_number(MIN_NUMBER, MAX_NUMBER);
    int guess = 0;
    int num_guesses = 0;

    cout << endl;
    cout << "I'm thinking of a number between " << MIN_NUMBER
         << " and " << MAX_NUMBER << "." << endl;

    // Keep looping until the guess matches the secret number
    while (guess != secret) {
        guess = get_guess();
        num_guesses = num_guesses + 1;   // count every attempt

        if (guess < secret) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secret) {
            cout << "Too high! Try again." << endl;
        }
        else {
            // The guess equals the secret, so the while condition ends the loop
            cout << "Correct! You got it in " << num_guesses
                 << " guesses." << endl;
        }
    }
}