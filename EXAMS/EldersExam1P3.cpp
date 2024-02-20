/*
Ethan Elders
00099962
eelders@my.athens.edu
February 11, 2024
CS317
Exam 1 P3
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //Variables
    float maxCredit;
    float amtSpent;
    float remainingCredit;

    //User Input
    cout << "What is your credit limit (maximum amount of credit): ";
    cin >> maxCredit;
    cout << "Please enter the amount that you have spent: ";
    cin >> amtSpent;

    //calculations
    remainingCredit = maxCredit - amtSpent;

    //Output
    cout << "\n\n\nYour available credit is: " << setprecision(2) << fixed << remainingCredit;


    return 0;
}