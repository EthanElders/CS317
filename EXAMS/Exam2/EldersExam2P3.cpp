/*
Ethan Elders
00099962
eelders@my.athens.edu
CS317 - Exam 2
Problem 3
*/

#include <iostream>

using namespace std;

int main(){
    const int daysInYear = 365;
    int numOfDays;
    int numOfYears;
    int remainingDays;

    cout << "Please enter the number of days to convert to years: ";
    cin >> numOfDays;
    cin.ignore();
    while (numOfDays < 0){
        cout << "You have entered a negative number, please enter a positive value: " << endl;
        cin >> numOfDays;
        cin.ignore();
    }

    while (numOfDays < 365 && numOfDays > 0){
        cout << "A year has 365 days. You have not entered a number large enough, please try again: ";
        cin >> numOfDays;
        cin.ignore();
    }
    numOfYears = (numOfDays/daysInYear);
    remainingDays = (numOfDays%daysInYear);
    if (remainingDays > 0){
        cout << "There are " << numOfYears << " years and " << remainingDays << " days in " << numOfDays << " days." << endl;
    }
    else{
        cout << "There are " << numOfYears << " years in " << numOfDays << " days." << endl;
    }
    


    return 0;
}