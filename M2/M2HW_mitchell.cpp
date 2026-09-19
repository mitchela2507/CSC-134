/*
CSC 134
M2HW1 - Homework (4 questions max) Gold
Mitchell, A
9/16/2026
HOW TO USE:
- Fill in the fuctions for any question you answer
- uncomment those functions in msin, so they run.
*/

#include <iostream>
#include <iomanip>
using namespace std;

    // COVERED in module 5, here's the basics
    // List ectra functions above main
    // Write the full version below main

    void question1();
    void question2();
    void question3();
    void question4();

int main() {
    // Run only the questions you finish
    //question1();
    //question2();
    //question3();
    //question4();
}

void question1() 
{
    // Variables:
    string name;
    double starting_balance;
    double deposit_amount;
    double withdrawal_amount;
    double final_balance;

    // Input:
    cout << "What is the name on the account: ";
    cin >> name;
    cout << "What is your account balance: ";
    cin >> starting_balance;
    cout << "How much are you depositung into the account: ";
    cin >> deposit_amount;
    cout << "How much are you withdrawing from the account: " ;
    cin >> withdrawal_amount;

    // Calculations:
    deposit_amount = starting_balance + deposit_amount;
    final_balance = deposit_amount - withdrawal_amount; 

    // Display results:
     cout << setprecision(2) << fixed;
     cout << endl;
     cout << "Name on the Account: " << name << endl;
     cout << "Account Number: 1234567890" << endl;
     cout << "Final Account Balance: " << final_balance << endl;
     cout << endl;

}

void question2() {

    const double COST_PER_CUBIC_FOOT = 0.3;    
    const double CHARGE_PER_CUBIC_FOOT = 0.52;  

     // Variables describing the crate
     double length, width, height;            
     double volume;                           
     double crate_cost;                        
     double crate_charge;                      
     double profit;                            

    // Get the dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin >> length;
    cout << "Crate width: ";
    cin >> width;
    cout << "Crate height: ";
    cin >> height;


    // Calculate the volume
    volume = length * width * height;          

    // Calculate price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    // Calculate profit (price - cost)
    profit = crate_charge - crate_cost;         

    // Display results to user
    cout << setprecision(2) << fixed;          
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft." << endl;
    cout << "Is volume: " << volume << " cubic ft." << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl;
    cout << endl;

    return;

}

void question3() {

    // Variables:
    int pizza;
    int slices_per_pizza;
    int visitors;
    int total_slices;
    int slices_needed;
    int leftover_slices;

    // Input:
    cout << "How many pizzas do you want order?: ";
    cin >> pizza;
    cout << "How many slices per pizza?: ";
    cin >> slices_per_pizza;
    cout << "How many visitors are coming?: ";
    cin >> visitors;

    // Calculation:
    total_slices = pizza * slices_per_pizza;
    slices_needed = visitors * 3;
    leftover_slices = total_slices - slices_needed;

    // Display Results:
    cout << endl;
    cout << "Total Slices: " << total_slices << endl;
    cout << "Slices Needed: " << slices_needed << endl;
    cout << "Leftover Pizza Pieces: " << leftover_slices << endl;
    cout << endl;


}

void question4() {

    // Variables:
    string school, team, letsGo;
    string cheerOne, cheerTwo;

    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // String Concatenation:
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Display Output:
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
    cout << endl;
}

