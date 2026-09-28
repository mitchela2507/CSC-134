// CSC 134
// M3LAB1 - Menus and Choice
// mitchella
// 9/28/2026

#include <iostream>
using namespace std;


// DECLARE that we are going to have more functions than main()
// after main, DEFINE your functions in full 
void setCamp();
void backTrack();
void flareGun();

int main() {

  int choice; // Menu choice

  // ask the question
  cout << "You got lost in the woods! What will you do?" << endl;
  cout << "1. Set camp inside a cave you stumbled upon and wait until day break." << endl;
  cout << "2. Try to back track your steps from the way came." << endl;
  cout << "3. Use the flare gun you founded sitting on a rock." << endl;
  cout << "? "; // the prompt
  cin >> choice;
  // can also say (choice == 1)
  if (1 == choice) {
    setCamp();
  }
  else if (2 == choice) {
    backTrack();
  }
  else if (3 == choice){
    flareGun();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
void setCamp() {
  // this function is called in main if the user chooses 1.
  cout << "You chose: Set camp inside a cave you stumbled upon and wait until day break." << endl;
  cout << "You get attacked by a bear that lives inside the cave!" << endl;
}

void backTrack() {
  // this function is called in main if the user chooses 1.
  cout << "You chose: Try to back track your steps from the way you came." << endl;
  cout << "You get more lost and wonder deeper into the woods. Then you ended up falling off a cliff! Yikes!" << endl;
}

void flareGun(){
  cout << "You chose: Use the flare gun you founded sitting on a rock." << endl;
  cout << "A helicopter pilot see's your flare and comes to saves you!" << endl;
}
// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.
