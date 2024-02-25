/*
Ethan Elders
00099962
eelders@my.athens.edu
February 24, 2024
Assignment 3 Problem 3
Understanding how time works
*/

#include <iostream>

using namespace std;

int main(){

    //VARIABLES
    const int secInDay = 86400;
    const int secInHour = 3600;
    const int secInMinute = 60;

    int currentSeconds;
    int days;
    int hours;
    int minutes;


    //INPUT
    cout<<"Please enter the current time in seconds: "<<endl;
    cin >> currentSeconds;

    if (currentSeconds >= secInDay){
        days = currentSeconds/secInDay;
        currentSeconds = currentSeconds - (secInDay*days);
        cout << "Days: " << days << endl;
        if (currentSeconds >= secInHour){
            hours = currentSeconds/secInHour;
            currentSeconds = currentSeconds - (secInHour*hours);
            cout << "Hours: " << hours << endl;
            if (currentSeconds >= secInMinute){
                minutes = currentSeconds/secInMinute;
                currentSeconds = currentSeconds - (secInMinute*minutes);
                cout << "Minutes: " << minutes << endl;
                if (currentSeconds > 0){
                    cout << "Seconds: " << currentSeconds << endl;
                }
            }
        }
    }
    else if (currentSeconds >= secInHour && currentSeconds < secInDay){
        hours = currentSeconds/secInHour;
        currentSeconds = currentSeconds - (secInHour*hours);
        cout << "Hours: " << hours << endl;
        if (currentSeconds >= secInMinute){
            minutes = currentSeconds/secInMinute;
            currentSeconds = currentSeconds - (secInMinute*minutes);
            cout << "Minutes: " << minutes << endl;
            if (currentSeconds > 0){
                cout << "Seconds: " << currentSeconds << endl;
            }
        }
        
    }
    else if (currentSeconds >= secInMinute && currentSeconds < secInHour){
        minutes = currentSeconds/secInMinute;
        currentSeconds = currentSeconds - (secInMinute*minutes);
        cout << "Minutes: " << minutes << endl;
        if (currentSeconds > 0){
            cout << "Seconds: " << currentSeconds << endl;
        }
    }
    else if (currentSeconds <= 0){
        cout << "You have entered an invalid number!\nPlease restart the program and try again!\nEXITING..."<<endl;
        return 0;
    }

    return 0;
}