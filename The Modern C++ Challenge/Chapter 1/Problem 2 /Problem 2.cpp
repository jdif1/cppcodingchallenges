/*
 * Objective: Find the greatest common divisor for two positive integers
 * The Modern C++ Challenge chapter 1 problem 2
 */

#include <regex>
#include "Problem 2.h"

using namespace std;

int main() {

    cout << "This program finds the greatest common divisor between two numbers.\n";
    cout << "What is the first number?\n";
    cin >> valueString[0];
    cout << "What is the second number?\n";
    cin >> valueString[1];

    for (int i = 0; i < 2; ++i) {
        while (!regex_match(valueString[i], regex("^[0-9]*$"))){
            cout << "Invalid input. Value " << i + 1 <<" is not a positive integer. Please try again.\n";
            cin >> valueString[i];
        }
    }

    for (int i = 0; i < 2; ++i) {
        while (!numberInRange[i]){
            try{
                values[i] = stoi(valueString[i]);
                numberInRange[i] = true;
            }catch (out_of_range &e){
                cout << "Number " << i + 1<<" is out of range. Please try again.\n";
                numberInRange[i] = false;
                cin >> valueString[i];
            }
        }
    }
    //sort(values, values + 2);
    greatestCommonDivisor = EuclideanAlgorithm(values[0],values[1]);
    cout << "The greatest common divisor is: " << greatestCommonDivisor;

}
