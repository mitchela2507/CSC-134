// overflow.cpp — an array is a fixed-size box. C++ does not guard its edges.
//
// Build:  g++ -std=c++17 -Wall -Wextra overflow.cpp -o overflow
//
// READ this program. Do NOT rely on running it to "win": modern compilers
// rearrange variables, add stack guards, and randomise memory, so the exact
// result changes from system to system. The lesson is the bug, not the trophy.

#include <cstring>
#include <iostream>
#include <string>

int main() {
    bool unlocked = false;   // the neighbour, sitting next to the box
    char name[8];            // the box: room for 7 characters + a terminator

    std::cout << "Your name: ";
    std::string input;
    std::getline(std::cin, input);

    std::strcpy(name, input.c_str());   // no length check — THIS is the bug.
                                        // If input is longer than 7, the copy
                                        // writes past name[] into its neighbours.

    if (unlocked)
        std::cout << "How did you unlock this?! flag{mind_the_bounds}\n";

    std::cout << "Hello, " << name << "\n";
    return 0;
}
