#include <iostream>

int greatestCommonDivisor = 1; //One is the only divisor common to all integers
int values[2];
bool numberInRange[2] = {false, false};
std:: string valueString[2];

int EuclideanAlgorithm(int x, int y) {
    //The Euclidian algorithm is the most efficient way to find the greatest common divisor
    while (x != 0 && y != 0) {

        if (x > y) {
            x = x % y;
        } else {
            y = y % x;
        }
    }
    if (x == 0){
        return y;
    } else {
        return x;
    }
}
