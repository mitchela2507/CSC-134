// CSC 134
// M3LAB1 - Menus and Choices
// mitchella
// 9/28/26

#include <iostream>
using namespace std;

// ========================================================
// 1. FUNCTION DECLARATIONS (PROTOTYPES)
// Tell the C++ compiler these functions exist before main()
// ========================================================
void setCamp();
void backTrack();
void flareGun();

int main() {
  int choice; // menu choice

  // Display the menu
  cout << "\"You got lost in the woods! What will you do?\" " << endl;
  cout << "1. Set camp inside a cave you stumbled upon and wait until day break." << endl;
  cout << "2. Try to back track your steps from the way came." << endl;
  cout << "3. Use the flare gun you founded sitting on  rock." << endl;
  cout << "? "; // the prompt
  cin >> choice;

  // Branching: test the user's choice
  if (1 == choice) {
    setCamp();
  }
  else if (2 == choice) {
    backTrack();
  }
  else if (3 == choice) {
    flareGun();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of main()

// ========================================================
// 2. FUNCTION DEFINITIONS
// Define what each function does after main() has finished
// ========================================================
void setCamp() {
  cout << "You chose: Set camp inside a cave you stumbled upon and wait until day break." << endl;
  cout << "You get attacked by a bear that lives inside the cave!" << endl;
}

void backTrack() {
  cout << "You chose: Try to back track your steps from the way came." << endl;
  cout << "You get more lost and wonder deeper inside of the woods. Then you ended up falling off a cliff!" << endl;
}

void flareGun() {
  cout << "You chose: Use the flare gun you founded sitting on  rock." << endl;
  cout << "A helicopter pilot see's your flare and comes to saves you!" << endl;
}
