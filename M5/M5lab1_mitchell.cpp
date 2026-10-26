// CSC 134
// M5LAB1 - Choose Your Own Adventure
// mitchella
// 10/26/2026
/*
This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

#include <iostream>
#include <limits>
using namespace std;

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_kitchen();
void choice_bedroom();
void choice_basement();
// TODO: add your new prototypes here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    // call choice 2 here
  } else if (3 == choice) {
    // call choice 3 here
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
  cout << "Try the back door." << endl;
  cout << "It's open!" << endl;
  cout << "You enter the house." << endl;
  cout << "Do you:" << endl;
  cout << "1. Explore the kitchen" << endl;
  cout << "2. Explore the bedroom" << endl;
  cout << "3. Explore the basement" << endl;
  cout << "4. Go home" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
    if (1 == choice) {
      choice_kitchen();
    } else if (2 == choice) {
      choice_bedroom();
    } else if (3 == choice) {
      choice_basement();
    }
    else if (4 == choice) {
      choice_go_home();
    }
}

void choice_kitchen() {
  cout << "You explore the kitchen." << endl;
  cout << "You find a delicious looking pumpkin pie!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Eat the pie" << endl;
  cout << "2. Leave it alone" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "You eat the pie and feel sick. You should have left it alone. Now you're dead!" << endl;
  } else if (2 == choice) {
    cout << "You wisely leave the pie alone and continue exploring." << endl;
  }
  cout << "Do you want to explore the bedroom or go back outside?" << endl;
  cout << "1. Explore the bedroom" << endl;
  cout << "2. Go explore the basement" << endl;
  cout << "3. Go home" << endl;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_bedroom();
  }else if (2 == choice) {
    choice_basement();
  }else if (3== choice) {
    choice_go_home();
  }
}

void choice_bedroom() {
  cout << "You explore the bedroom." << endl;
  cout << "You find a cozy bed and decide to take a nap." << endl;
  cout << "Do you:" << endl;
  cout << "1. Take a nap" << endl;
  cout << "2. Leave the bedroom" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "You take a nap and wake up feeling refreshed!" << endl;
    cout << "You decide to continue exploring the house." << endl;
  } else if (2 == choice) {
    cout << "You leave the bedroom and continue exploring." << endl;
  }
  cout << "Do you want to explore the basement or go home?" << endl;
  cout << "1. Explore the basement" << endl;
  cout << "2. Go home" << endl;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_basement();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_basement() {
  cout << "You explore the basement." << endl;
  cout << "You find a dusty old chest." << endl;
  cout << "Do you:" << endl;
  cout << "1. Open the chest" << endl;
  cout << "2. Leave it alone" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "You open the chest and find a treasure! But it's cursed!" << endl;
    cout << "You feel a dark presence and decide to leave the house immediately." << endl;
  } else if (2 == choice) {
    cout << "You wisely leave the chest alone and decide to just go home." << endl;
  }
}

void choice_go_home() {
  cout << "You decide to go home." << endl;
}

// TODO: add your new function definitions here