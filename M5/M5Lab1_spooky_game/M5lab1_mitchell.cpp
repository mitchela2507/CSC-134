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
void choice_pie_ending();
void choice_treasure_ending();
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
      choice_back_door();
  } else if (3 == choice) {
      choice_go_home();
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

  if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid choice. Please enter 1 or 2." << endl;
      choice_front_door();
      return;
  }

  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "Invalid choice. Please choose 1 or 2." << endl;
    choice_front_door();
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

  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
    choice_back_door();
    return;
  }

    if (1 == choice) {
      choice_kitchen();
    } else if (2 == choice) {
      choice_bedroom();
    } else if (3 == choice) {
      choice_basement();
    }
    else if (4 == choice) {
      choice_go_home();
    } else {
    cout << "Invalid choice. Please choose between 1 to 4." << endl;
    choice_back_door();
  }
}

void choice_go_home() {
  cout << "You decide to go home." << endl;
  cout << "The streets grow quieter as the familiar path unfolds beneath your feet." << endl;
  cout << "By the time you unlock the front door, the weight of the day finally begins to lift off your shoulders." << endl;
  cout << "You lock the door behind you, feeling safe at last." << endl;
}
}

void choice_kitchen() {
    cout << "You explore the kitchen." << endl;
    cout << "You find a pumpkin pie on the counter." << endl;
    cout << "Do you:" << endl;
    cout << "1. Eat the pie" << endl;
    cout << "2. Leave the pie alone" << endl;

    int choice = 0;
    cout << "Choose: ";
    cin >> choice;


  if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid choice. Please choose 1 or 2." << endl;
      choice_kitchen();
      return;
  }

    if (1 == choice) {
        choice_pie_ending();
        return;
    } else if (2 == choice) {
        cout << "You wisely leave the pie alone and continue exploring." << endl;
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
        choice_kitchen();
        return;
    }

    cout << "Where would you like to go next?" << endl;
    cout << "1. Explore the bedroom" << endl;
    cout << "2. Explore the basement" << endl;
    cout << "3. Go home" << endl;

    choice = 0;
    cout << "Choose: ";
    cin >> choice;

    if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
    choice_kitchen();
    return;
  }

    if (1 == choice) {
        choice_bedroom();
    } else if (2 == choice) {
        choice_basement();
    } else if (3 == choice) {
        choice_go_home();
    } else {
        cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
        choice_kitchen();
    }
}

void choice_bedroom() {
  cout << "You explore the bedroom." << endl;
  cout << "You find a cozy bed and wonder if you should take a quick nap." << endl;
  cout << "Do you:" << endl;
  cout << "1. Take a nap" << endl;
  cout << "2. Leave the bedroom" << endl;

  int choice = 0;
  cout << "Choose: ";
  cin >> choice;

  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid choice. Please choose 1 or 2." << endl;
    choice_bedroom();
    return;
}

  if (1 == choice) {
    cout << "You take a nap and wake up feeling refreshed!" << endl;
    cout << "You decide to continue exploring the house." << endl;
  } else if (2 == choice) {
    cout << "You leave the bedroom and continue exploring." << endl;
  } else {
    cout << "Invalid choice. Please choose 1 or 2." << endl;
    choice_bedroom();
    return;
  }

  cout << "Do you want to explore the basement or go home?" << endl;
  cout << "1. Explore the basement" << endl;
  cout << "2. Go home" << endl;
  cout << "Choose: ";
  cin >> choice;

  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid choice. Please choose 1 or 2." << endl;
    choice_bedroom();
    return;
}

  if (1 == choice) {
    choice_basement();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "Invalid choice. Please choose 1 or 2." << endl;
    choice_bedroom();
  }
}


void choice_basement() {
    cout << "You explore the basement." << endl;
    cout << "You find a dusty chest in the corner." << endl;
    cout << "Do you:" << endl;
    cout << "1. Open the chest" << endl;
    cout << "2. Leave the chest alone and go home" << endl;

    int choice = 0;
    cout << "Choose: ";
    cin >> choice;

    if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid choice. Please choose 1 or 2." << endl;
    choice_basement();
    return;
}

    if (1 == choice) {
        choice_treasure_ending();
    } else if (2 == choice) {
        cout << "You decide the chest isn't worth the risk." << endl;
        choice_go_home();
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
        choice_basement();
    }
}

void choice_pie_ending() {
    cout << "You eat the pie and feel sick." << endl;
    cout << "You should have left it alone. Now you're dead!" << endl;
    cout << "Game over!" << endl;
}

void choice_treasure_ending() {
    cout << "You open the chest and discover ancient gold!" << endl;
    cout << "Suddenly, a ghost appears from the shadows." << endl;
    cout << "The ghost curses you for disturbing its treasure." << endl;
    cout << "You escape the house, but the ghost follows you everywhere." << endl;
    cout << "You have been haunted forever! Game over!" << endl;
}
