/*
 * Objective: Sum of naturals divisible by 3 and 5
 * The Modern C++ Challenge chapter 1 problem 1
 */

#include <iostream>
#include <regex>

using namespace std;
int main() {
    int sum = 0;
    string userInput;
    int limit = 0;
    bool numberInRange = false;

    cout << "This program calculates the sum off all natural numbers divisible by three or 5.\n";
    cout << "What number would you like to calculate to?\n";
    cin >> userInput;

    while (!regex_match(userInput, regex("^[0-9]*$"))){
        cout << "Invalid input. Please try again.\n";
        cin >> userInput;
    }

    while (!numberInRange){
        try{
            limit = stoi(userInput);
            numberInRange = true;
        }catch (out_of_range &e){
            cout << "Number out of range. Please try again.\n";
            numberInRange = false;
            cin >> userInput;
        }
    }
    for (int i = 0; i < limit; ++i) {
        if (i % 3 == 0 || i % 5 == 0 ){
            sum += i;
        }
    }
    cout << "The final value is: " << sum;
}