/*
Ethan Elders
00099962
eelders@my.athens.edu
March 10, 2024
Assignment 4 Problem 3
Sum of Numbers
*/

#include <iostream>

using namespace std;

int main(){
    //VARIABLES
    int posInt = -1;
    int sum = 0;

    //INPUT
    while (posInt < 0) {
    cout << "Enter a positive integer: ";
    cin >> posInt;
    }
    //CALCULATION
    for (int i = 0; i <= posInt; i++){
        int isEven = i % 2;
        if (isEven == 0){
            sum += i;
        }
    }
    //OUTPUT
    cout << "The sum of all positive EVEN integers from 2 to " << posInt << " is: " << sum << endl;
    return 0;
}