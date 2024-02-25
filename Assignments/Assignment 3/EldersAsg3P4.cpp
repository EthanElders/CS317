/*
Ethan Elders
00099962
eelders@my.athens.edu
February 24, 2024
Assignment 3 Problem 4
Menus, Decisions, and Validation
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    //Variables

    string comp1, comp2, comp3; //string to hold the value for the competitors names
    int menu; //int for menu selection
    int comp1Stones1, comp2Stones1, comp3Stones1;
    int comp1Stones2, comp2Stones2, comp3Stones2;
    int comp1FinalScore, comp2FinalScore, comp3FinalScore;
    int comp1Place, comp2Place, comp3Place;
    int comp1Points, comp2Points, comp3Points;
    float comp1Seconds1, comp2Seconds1, comp3Seconds1, comp1Seconds2, comp2Seconds2, comp3Seconds2;
    float comp1FinalSeconds, comp2FinalSeconds, comp3FinalSeconds;
    int comp1Pounds1, comp2Pounds1, comp3Pounds1, comp1Pounds2, comp2Pounds2, comp3Pounds2;



    //Input

    cout << "Enter first competitor: ";
    getline(cin, comp1);
    cout << "\nEnter second competitor: ";
    getline(cin, comp2);
    cout << "\nEnter third competitor: ";
    getline(cin, comp3);

    cout << "Please select which event you would like to enter data for (1-3): " << endl;
    cout << "1. Stone Over" << endl;
    cout << "2. Farmers Frame Medley" << endl;
    cout << "3. Axle Deadlift" << endl;

    cin >> menu;

    switch(menu){
        case 1: 
        cout << "Enter the number of stones " << comp1 << " was able to lift for attempt 1: " << endl;
        cin >> comp1Stones1;
        if (comp1Stones1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of stones " << comp2 << " was able to lift for attempt 1: " << endl;
        cin >> comp2Stones1;
        if (comp2Stones1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of stones " << comp3 << " was able to lift for attempt 1: " << endl;
        cin >> comp3Stones1;
        if (comp3Stones1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of stones " << comp1 << " was able to lift for attempt 2: " << endl;
        cin >> comp1Stones2;
        if (comp1Stones2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of stones " << comp2 << " was able to lift for attempt 2: " << endl;
        cin >> comp2Stones2;
        if (comp2Stones2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of stones " << comp3 << " was able to lift for attempt 2: " << endl;
        cin >> comp3Stones2;
        if (comp3Stones2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }

        if (comp1Stones1 >= comp1Stones2){
            comp1FinalScore = comp1Stones1;
        }
        else{
            comp1FinalScore = comp1Stones2;
        }

        if (comp2Stones1 >= comp2Stones2){
            comp2FinalScore = comp2Stones1;
        }
        else{
            comp2FinalScore = comp2Stones2;
        }

        if (comp3Stones1 >= comp3Stones2){
            comp3FinalScore = comp3Stones1;
        }
        else{
            comp3FinalScore = comp3Stones2;
        }

        if (comp1FinalScore > comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1Place = 1;
            comp1Points = 3;
            if (comp2FinalScore > comp3FinalScore){
                comp2Place = 2;
                comp2Points = 2;
                comp3Place = 3;
                comp3Points = 1;
            }
            else {
                comp3Place = 2;
                comp3Points = 2;
                comp2Place = 3;
                comp2Points = 1;
            }
        }
        else if (comp2FinalScore > comp1FinalScore && comp2FinalScore > comp3FinalScore){
            comp2Place = 1;
            comp2Points = 3;
            if (comp1FinalScore > comp3FinalScore){
                comp1Place = 2;
                comp1Points = 2;
                comp3Place = 3;
                comp3Points = 1;
            }
            else{
                comp3Place = 2;
                comp3Points = 2;
                comp1Place = 3;
                comp1Points = 1;
            }
        }
        else if (comp3FinalScore > comp1FinalScore && comp3FinalScore > comp2FinalScore){
            comp3Place = 1;
            comp3Points = 3;
            if (comp1FinalScore > comp2FinalScore){
                comp1Place = 2;
                comp1Points = 2;
                comp2Place = 3;
                comp2Points = 1;
            }
            else{
                comp1Place = 3;
                comp1Points = 1;
                comp2Place = 2;
                comp2Points = 2;
            }
        }
        
        if (comp1FinalScore == comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1Place = 1;
            comp2Place = 1;
            comp3Place = 2;
            comp1Points = 3;
            comp2Points = 3;
            comp3Points = 2;
        }
        else if (comp1FinalScore==comp2FinalScore && comp1FinalScore < comp3FinalScore){
            comp1Place = 2;
            comp2Place = 2;
            comp3Place = 1;
            comp1Points = 2;
            comp2Points = 2;
            comp3Points = 3;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore > comp2FinalScore){
            comp1Place = 1;
            comp3Place = 1;
            comp2Place = 2;
            comp1Points = 3;
            comp3Points = 3;
            comp2Points = 2;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore < comp2FinalScore){
            comp1Place = 2;
            comp3Place = 2;
            comp2Place = 1;
            comp1Points = 2;
            comp3Points = 2;
            comp2Points = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore > comp1FinalScore){
            comp1Place = 2;
            comp3Place = 1;
            comp2Place = 1;
            comp1Points = 2;
            comp3Points = 3;
            comp2Points = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore < comp1FinalScore){
            comp1Place = 1;
            comp3Place = 2;
            comp2Place = 2;
            comp1Points = 3;
            comp3Points = 2;
            comp2Points = 2;
        }

        //*****************************DISPLAY*********************************
        cout << "*********************** Stone Over Bar ***********************" << endl;
        cout << setw(15) << "Competitors" << setw(18) << "Stones Lifted" << setw(11) << "Points" << setw(10) << "Place" << endl;
        cout << setw(13) << comp1 << setw(14) << comp1FinalScore << setw(15) << comp1Points << setw(10) << comp1Place << endl;
        cout << setw(13) << comp2 << setw(14) << comp2FinalScore << setw(15) << comp2Points << setw(10) << comp2Place << endl;
        cout << setw(13) << comp3 << setw(14) << comp3FinalScore << setw(15) << comp3Points << setw(10) << comp3Place << endl;


        break;

        case 2: 
        cout << "Enter the number of seconds " << comp1 << " took to complete attempt 1: " << endl;
        cin >> comp1Seconds1;
        if (comp1Seconds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of seconds " << comp2 << " took to complete attempt 1: " << endl;
        cin >> comp2Seconds1;
        if (comp2Seconds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of seconds " << comp3 << " took to complete attempt 1: " << endl;
        cin >> comp3Seconds1;
        if (comp3Seconds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of seconds " << comp1 << " took to complete attempt 2: " << endl;
        cin >> comp1Seconds2;
        if (comp1Seconds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of seconds " << comp2 << " took to complete attempt 2: " << endl;
        cin >> comp2Seconds2;
        if (comp2Seconds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Enter the number of seconds " << comp3 << " took to complete attempt 2: " << endl;
        cin >> comp3Seconds2;
        if (comp3Seconds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }

        if (comp1Seconds1 <= comp1Seconds2){
            comp1FinalSeconds = comp1Seconds1;
        }
        else{
            comp1FinalSeconds = comp1Seconds2;
        }

        if (comp2Seconds1 <= comp2Seconds2){
            comp2FinalSeconds = comp2Seconds1;
        }
        else{
            comp2FinalSeconds = comp2Seconds2;
        }

        if (comp3Seconds1 <= comp3Seconds2){
            comp3FinalSeconds = comp3Seconds1;
        }
        else{
            comp3FinalSeconds = comp3Seconds2;
        }

        if (comp1FinalSeconds < comp2FinalSeconds && comp1FinalSeconds < comp3FinalSeconds){
            comp1Place = 1;
            comp1Points = 3;
            if (comp2FinalSeconds < comp3FinalSeconds){
                comp2Place = 2;
                comp2Points = 2;
                comp3Place = 3;
                comp3Points = 1;
            }
            else {
                comp3Place = 2;
                comp3Points = 2;
                comp2Place = 3;
                comp2Points = 1;
            }
        }
        else if (comp2FinalSeconds < comp1FinalSeconds && comp2FinalSeconds < comp3FinalSeconds){
            comp2Place = 1;
            comp2Points = 3;
            if (comp1FinalSeconds < comp3FinalSeconds){
                comp1Place = 2;
                comp1Points = 2;
                comp3Place = 3;
                comp3Points = 1;
            }
            else{
                comp3Place = 2;
                comp3Points = 2;
                comp1Place = 3;
                comp1Points = 1;
            }
        }
        else if (comp3FinalSeconds < comp1FinalSeconds && comp3FinalSeconds < comp2FinalSeconds){
            comp3Place = 1;
            comp3Points = 3;
            if (comp1FinalSeconds < comp2FinalSeconds){
                comp1Place = 2;
                comp1Points = 2;
                comp2Place = 3;
                comp2Points = 1;
            }
            else{
                comp1Place = 3;
                comp1Points = 1;
                comp2Place = 2;
                comp2Points = 2;
            }
        }

        if (comp1FinalSeconds == comp2FinalSeconds && comp1FinalSeconds > comp3FinalSeconds){
            comp1Place = 1;
            comp2Place = 1;
            comp3Place = 2;
            comp1Points = 3;
            comp2Points = 3;
            comp3Points = 2;
        }
        else if (comp1FinalSeconds==comp2FinalSeconds && comp1FinalSeconds < comp3FinalSeconds){
            comp1Place = 2;
            comp2Place = 2;
            comp3Place = 1;
            comp1Points = 2;
            comp2Points = 2;
            comp3Points = 3;
        }
        else if (comp1FinalSeconds == comp3FinalSeconds && comp1FinalSeconds > comp2FinalSeconds){
            comp1Place = 1;
            comp3Place = 1;
            comp2Place = 2;
            comp1Points = 3;
            comp3Points = 3;
            comp2Points = 2;
        }
        else if (comp1FinalSeconds == comp3FinalSeconds && comp1FinalSeconds < comp2FinalSeconds){
            comp1Place = 2;
            comp3Place = 2;
            comp2Place = 1;
            comp1Points = 2;
            comp3Points = 2;
            comp2Points = 3;
        }
        else if (comp2FinalSeconds == comp3FinalSeconds && comp2FinalSeconds > comp1FinalSeconds){
            comp1Place = 2;
            comp3Place = 1;
            comp2Place = 1;
            comp1Points = 2;
            comp3Points = 3;
            comp2Points = 3;
        }
        else if (comp2FinalSeconds == comp3FinalSeconds && comp2FinalSeconds < comp1FinalSeconds){
            comp1Place = 1;
            comp3Place = 2;
            comp2Place = 2;
            comp1Points = 3;
            comp3Points = 2;
            comp2Points = 2;
        }
        //*****************************DISPLAY*********************************
        cout << "*********************** Farmers Frame Medley ***********************" << endl;
        cout << setw(15) << "Competitors" << setw(18) << "Seconds" << setw(11) << "Points" << setw(10) << "Place" << endl;
        cout << setw(13) << comp1 << setw(19) << setprecision(2) << fixed << comp1FinalSeconds << setw(9) << comp1Points << setw(11) << comp1Place << endl;
        cout << setw(13) << comp2 << setw(19) << setprecision(2) << fixed << comp2FinalSeconds << setw(9) << comp2Points << setw(11) << comp2Place << endl;
        cout << setw(13) << comp3 << setw(19) << setprecision(2) << fixed << comp3FinalSeconds << setw(9) << comp3Points << setw(11) << comp3Place << endl;


        break;

        case 3: 
        cout << "Number of pounds " << comp1 << " lifted in attempt 1: " << endl;
        cin >> comp1Pounds1;
        if (comp1Pounds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Number of pounds " << comp2 << " lifted in attempt 1:  " << endl;
        cin >> comp2Pounds1;
        if (comp2Pounds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Number of pounds " << comp3 << " lifted in attempt 1:  " << endl;
        cin >> comp3Pounds1;
        if (comp3Pounds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Number of pounds " << comp1 << " lifted in attempt 2:  " << endl;
        cin >> comp1Pounds2;
        if (comp1Pounds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Number of pounds " << comp2 << " lifted in attempt 2:  " << endl;
        cin >> comp2Pounds2;
        if (comp2Pounds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }
        cout << "Number of pounds " << comp3 << " lifted in attempt 2:  " << endl;
        cin >> comp3Pounds2;
        if (comp3Pounds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart the program and try again." << endl;
            return 0;
        }

        if (comp1Pounds1 >= comp1Pounds2){
            comp1FinalScore = comp1Pounds1;
        }
        else{
            comp1FinalScore = comp1Pounds2;
        }

        if (comp2Pounds1 >= comp2Pounds2){
            comp2FinalScore = comp2Pounds1;
        }
        else{
            comp2FinalScore = comp2Pounds2;
        }

        if (comp3Pounds1 >= comp3Pounds2){
            comp3FinalScore = comp3Pounds1;
        }
        else{
            comp3FinalScore = comp3Pounds2;
        }

        if (comp1FinalScore > comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1Place = 1;
            comp1Points = 3;
            if (comp2FinalScore > comp3FinalScore){
                comp2Place = 2;
                comp2Points = 2;
                comp3Place = 3;
                comp3Points = 1;
            }
            else {
                comp3Place = 2;
                comp3Points = 2;
                comp2Place = 3;
                comp2Points = 1;
            }
        }
        else if (comp2FinalScore > comp1FinalScore && comp2FinalScore > comp3FinalScore){
            comp2Place = 1;
            comp2Points = 3;
            if (comp1FinalScore > comp3FinalScore){
                comp1Place = 2;
                comp1Points = 2;
                comp3Place = 3;
                comp3Points = 1;
            }
            else{
                comp3Place = 2;
                comp3Points = 2;
                comp1Place = 3;
                comp1Points = 1;
            }
        }
        else if (comp3FinalScore > comp1FinalScore && comp3FinalScore > comp2FinalScore){
            comp3Place = 1;
            comp3Points = 3;
            if (comp1FinalScore > comp2FinalScore){
                comp1Place = 2;
                comp1Points = 2;
                comp2Place = 3;
                comp2Points = 1;
            }
            else{
                comp1Place = 3;
                comp1Points = 1;
                comp2Place = 2;
                comp2Points = 2;
            }
        }

        if (comp1FinalScore == comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1Place = 1;
            comp2Place = 1;
            comp3Place = 2;
            comp1Points = 3;
            comp2Points = 3;
            comp3Points = 2;
        }
        else if (comp1FinalScore==comp2FinalScore && comp1FinalScore < comp3FinalScore){
            comp1Place = 2;
            comp2Place = 2;
            comp3Place = 1;
            comp1Points = 2;
            comp2Points = 2;
            comp3Points = 3;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore > comp2FinalScore){
            comp1Place = 1;
            comp3Place = 1;
            comp2Place = 2;
            comp1Points = 3;
            comp3Points = 3;
            comp2Points = 2;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore < comp2FinalScore){
            comp1Place = 2;
            comp3Place = 2;
            comp2Place = 1;
            comp1Points = 2;
            comp3Points = 2;
            comp2Points = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore > comp1FinalScore){
            comp1Place = 2;
            comp3Place = 1;
            comp2Place = 1;
            comp1Points = 2;
            comp3Points = 3;
            comp2Points = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore < comp1FinalScore){
            comp1Place = 1;
            comp3Place = 2;
            comp2Place = 2;
            comp1Points = 3;
            comp3Points = 2;
            comp2Points = 2;
        }
        //*****************************DISPLAY*********************************
        cout << "*********************** Axle Deadlift ***********************" << endl;
        cout << setw(15) << "Competitors" << setw(18) << "Pounds" << setw(11) << "Points" << setw(10) << "Place" << endl;
        cout << setw(13) << comp1 << setw(19) << comp1FinalScore << setw(9) << comp1Points << setw(11) << comp1Place << endl;
        cout << setw(13) << comp2 << setw(19) << comp2FinalScore << setw(9) << comp2Points << setw(11) << comp2Place << endl;
        cout << setw(13) << comp3 << setw(19) << comp3FinalScore << setw(9) << comp3Points << setw(11) << comp3Place << endl;


        break;
    }

    return 0;
}