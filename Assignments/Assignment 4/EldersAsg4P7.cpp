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
    int comp1Place1, comp2Place1, comp3Place1;
    int comp1Points1, comp2Points1, comp3Points1;
    int comp1Place2, comp2Place2, comp3Place2;
    int comp1Points2, comp2Points2, comp3Points2;
    int comp1Place3, comp2Place3, comp3Place3;
    int comp1Points3, comp2Points3, comp3Points3;
    float comp1Seconds1, comp2Seconds1, comp3Seconds1, comp1Seconds2, comp2Seconds2, comp3Seconds2;
    float comp1FinalSeconds, comp2FinalSeconds, comp3FinalSeconds;
    int comp1Pounds1, comp2Pounds1, comp3Pounds1, comp1Pounds2, comp2Pounds2, comp3Pounds2;

    string firstPlace, secondPlace, thirdPlace;
    int totalPoints1Comp1, totalPoints2Comp1, totalPoints3Comp1;
    int totalPoints1Comp2, totalPoints2Comp2, totalPoints3Comp2;
    int totalPoints1Comp3, totalPoints2Comp3, totalPoints3Comp3;

    int comp1PlaceFinal, comp2PlaceFinal, comp3PlaceFinal;



    //Input

    cout << "Enter first competitor: ";
    getline(cin, comp1);
    cout << "\nEnter second competitor: ";
    getline(cin, comp2);
    cout << "\nEnter third competitor: ";
    getline(cin, comp3);

while (menu != 5){
    cout << "Please select which event you would like to enter data for (1-3): " << endl;
    cout << "1. Stone Over" << endl;
    cout << "2. Farmers Frame Medley" << endl;
    cout << "3. Axle Deadlift" << endl;
    cout << "4. Final Results" << endl;
    cout << "5. EXIT" << endl;

    cin >> menu;

    switch(menu){
        case 1: 
        cout << "Enter the number of stones " << comp1 << " was able to lift for attempt 1: " << endl;
        cin >> comp1Stones1;
        while (comp1Stones1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp1Stones1;
        }
        cout << "Enter the number of stones " << comp2 << " was able to lift for attempt 1: " << endl;
        cin >> comp2Stones1;
        while (comp2Stones1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp2Stones1;
        }
        cout << "Enter the number of stones " << comp3 << " was able to lift for attempt 1: " << endl;
        cin >> comp3Stones1;
        while (comp3Stones1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp3Stones1;
        }
        cout << "Enter the number of stones " << comp1 << " was able to lift for attempt 2: " << endl;
        cin >> comp1Stones2;
        while (comp1Stones2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp1Stones2;
        }
        cout << "Enter the number of stones " << comp2 << " was able to lift for attempt 2: " << endl;
        cin >> comp2Stones2;
        while (comp2Stones2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp2Stones2;
        }
        cout << "Enter the number of stones " << comp3 << " was able to lift for attempt 2: " << endl;
        cin >> comp3Stones2;
        while (comp3Stones2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp3Stones2;
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
            comp1Place1 = 1;
            comp1Points1 = 3;
            if (comp2FinalScore > comp3FinalScore){
                comp2Place1 = 2;
                comp2Points1 = 2;
                comp3Place1 = 3;
                comp3Points1 = 1;
            }
            else {
                comp3Place1 = 2;
                comp3Points1 = 2;
                comp2Place1 = 3;
                comp2Points1 = 1;
            }
        }
        else if (comp2FinalScore > comp1FinalScore && comp2FinalScore > comp3FinalScore){
            comp2Place1 = 1;
            comp2Points1 = 3;
            if (comp1FinalScore > comp3FinalScore){
                comp1Place1 = 2;
                comp1Points1 = 2;
                comp3Place1 = 3;
                comp3Points1 = 1;
            }
            else{
                comp3Place1 = 2;
                comp3Points1 = 2;
                comp1Place1 = 3;
                comp1Points1 = 1;
            }
        }
        else if (comp3FinalScore > comp1FinalScore && comp3FinalScore > comp2FinalScore){
            comp3Place1 = 1;
            comp3Points1 = 3;
            if (comp1FinalScore > comp2FinalScore){
                comp1Place1 = 2;
                comp1Points1 = 2;
                comp2Place1 = 3;
                comp2Points1 = 1;
            }
            else{
                comp1Place1 = 3;
                comp1Points1 = 1;
                comp2Place1 = 2;
                comp2Points1 = 2;
            }
        }
        
        if (comp1FinalScore == comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1Place1 = 1;
            comp2Place1 = 1;
            comp3Place1 = 2;
            comp1Points1 = 3;
            comp2Points1 = 3;
            comp3Points1 = 2;
        }
        else if (comp1FinalScore==comp2FinalScore && comp1FinalScore < comp3FinalScore){
            comp1Place1 = 2;
            comp2Place1 = 2;
            comp3Place1 = 1;
            comp1Points1 = 2;
            comp2Points1 = 2;
            comp3Points1 = 3;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore > comp2FinalScore){
            comp1Place1 = 1;
            comp3Place1 = 1;
            comp2Place1 = 2;
            comp1Points1 = 3;
            comp3Points1 = 3;
            comp2Points1 = 2;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore < comp2FinalScore){
            comp1Place1 = 2;
            comp3Place1 = 2;
            comp2Place1 = 1;
            comp1Points1 = 2;
            comp3Points1 = 2;
            comp2Points1 = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore > comp1FinalScore){
            comp1Place1 = 2;
            comp3Place1 = 1;
            comp2Place1 = 1;
            comp1Points1 = 2;
            comp3Points1 = 3;
            comp2Points1 = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore < comp1FinalScore){
            comp1Place1 = 1;
            comp3Place1 = 2;
            comp2Place1 = 2;
            comp1Points1 = 3;
            comp3Points1 = 2;
            comp2Points1 = 2;
        }

        


        break;

        case 2: 
        cout << "Enter the number of seconds " << comp1 << " took to complete attempt 1: " << endl;
        cin >> comp1Seconds1;
        while (comp1Seconds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp1Seconds1;
        }
        cout << "Enter the number of seconds " << comp2 << " took to complete attempt 1: " << endl;
        cin >> comp2Seconds1;
        while (comp2Seconds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease restart try again." << endl;
            cin >> comp2Seconds1;
        }
        cout << "Enter the number of seconds " << comp3 << " took to complete attempt 1: " << endl;
        cin >> comp3Seconds1;
        while (comp3Seconds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp3Seconds1;
        }
        cout << "Enter the number of seconds " << comp1 << " took to complete attempt 2: " << endl;
        cin >> comp1Seconds2;
        while (comp1Seconds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp1Seconds2;
        }
        cout << "Enter the number of seconds " << comp2 << " took to complete attempt 2: " << endl;
        cin >> comp2Seconds2;
        while (comp2Seconds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp2Seconds2;
        }
        cout << "Enter the number of seconds " << comp3 << " took to complete attempt 2: " << endl;
        cin >> comp3Seconds2;
        while (comp3Seconds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp3Seconds2;
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
            comp1Place2 = 1;
            comp1Points2 = 3;
            if (comp2FinalSeconds < comp3FinalSeconds){
                comp2Place2 = 2;
                comp2Points2 = 2;
                comp3Place2 = 3;
                comp3Points2 = 1;
            }
            else {
                comp3Place2 = 2;
                comp3Points2 = 2;
                comp2Place2 = 3;
                comp2Points2 = 1;
            }
        }
        else if (comp2FinalSeconds < comp1FinalSeconds && comp2FinalSeconds < comp3FinalSeconds){
            comp2Place2 = 1;
            comp2Points2 = 3;
            if (comp1FinalSeconds < comp3FinalSeconds){
                comp1Place2 = 2;
                comp1Points2 = 2;
                comp3Place2 = 3;
                comp3Points2 = 1;
            }
            else{
                comp3Place2 = 2;
                comp3Points2 = 2;
                comp1Place2 = 3;
                comp1Points2 = 1;
            }
        }
        else if (comp3FinalSeconds < comp1FinalSeconds && comp3FinalSeconds < comp2FinalSeconds){
            comp3Place2 = 1;
            comp3Points2 = 3;
            if (comp1FinalSeconds < comp2FinalSeconds){
                comp1Place2 = 2;
                comp1Points2 = 2;
                comp2Place2 = 3;
                comp2Points2 = 1;
            }
            else{
                comp1Place2 = 3;
                comp1Points2 = 1;
                comp2Place2 = 2;
                comp2Points2 = 2;
            }
        }

        if (comp1FinalSeconds == comp2FinalSeconds && comp1FinalSeconds > comp3FinalSeconds){
            comp1Place2 = 1;
            comp2Place2 = 1;
            comp3Place2 = 2;
            comp1Points2 = 3;
            comp2Points2 = 3;
            comp3Points2 = 2;
        }
        else if (comp1FinalSeconds==comp2FinalSeconds && comp1FinalSeconds < comp3FinalSeconds){
            comp1Place2 = 2;
            comp2Place2 = 2;
            comp3Place2 = 1;
            comp1Points2 = 2;
            comp2Points2 = 2;
            comp3Points2 = 3;
        }
        else if (comp1FinalSeconds == comp3FinalSeconds && comp1FinalSeconds > comp2FinalSeconds){
            comp1Place2 = 1;
            comp3Place2 = 1;
            comp2Place2 = 2;
            comp1Points2 = 3;
            comp3Points2 = 3;
            comp2Points2 = 2;
        }
        else if (comp1FinalSeconds == comp3FinalSeconds && comp1FinalSeconds < comp2FinalSeconds){
            comp1Place2 = 2;
            comp3Place2 = 2;
            comp2Place2 = 1;
            comp1Points2 = 2;
            comp3Points2 = 2;
            comp2Points2 = 3;
        }
        else if (comp2FinalSeconds == comp3FinalSeconds && comp2FinalSeconds > comp1FinalSeconds){
            comp1Place2 = 2;
            comp3Place2 = 1;
            comp2Place2 = 1;
            comp1Points2 = 2;
            comp3Points2 = 3;
            comp2Points2 = 3;
        }
        else if (comp2FinalSeconds == comp3FinalSeconds && comp2FinalSeconds < comp1FinalSeconds){
            comp1Place2 = 1;
            comp3Place2 = 2;
            comp2Place2 = 2;
            comp1Points2 = 3;
            comp3Points2 = 2;
            comp2Points2 = 2;
        }
        


        break;

        case 3: 
        cout << "Number of pounds " << comp1 << " lifted in attempt 1: " << endl;
        cin >> comp1Pounds1;
        while (comp1Pounds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp1Pounds1;
        }
        cout << "Number of pounds " << comp2 << " lifted in attempt 1:  " << endl;
        cin >> comp2Pounds1;
        while (comp2Pounds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp2Pounds1;
        }
        cout << "Number of pounds " << comp3 << " lifted in attempt 1:  " << endl;
        cin >> comp3Pounds1;
        while (comp3Pounds1 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp3Pounds1;
        }
        cout << "Number of pounds " << comp1 << " lifted in attempt 2:  " << endl;
        cin >> comp1Pounds2;
        while (comp1Pounds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp1Pounds2;
        }
        cout << "Number of pounds " << comp2 << " lifted in attempt 2:  " << endl;
        cin >> comp2Pounds2;
        while (comp2Pounds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp2Pounds2;
        }
        cout << "Number of pounds " << comp3 << " lifted in attempt 2:  " << endl;
        cin >> comp3Pounds2;
        while (comp3Pounds2 < 0){
            cout << "You have entered an invalid number (less than zero)\nPlease try again." << endl;
            cin >> comp3Pounds2;
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
            comp1Place3 = 1;
            comp1Points3 = 3;
            if (comp2FinalScore > comp3FinalScore){
                comp2Place3 = 2;
                comp2Points3 = 2;
                comp3Place3 = 3;
                comp3Points3 = 1;
            }
            else {
                comp3Place3 = 2;
                comp3Points3 = 2;
                comp2Place3 = 3;
                comp2Points3 = 1;
            }
        }
        else if (comp2FinalScore > comp1FinalScore && comp2FinalScore > comp3FinalScore){
            comp2Place3 = 1;
            comp2Points3 = 3;
            if (comp1FinalScore > comp3FinalScore){
                comp1Place3 = 2;
                comp1Points3 = 2;
                comp3Place3 = 3;
                comp3Points3 = 1;
            }
            else{
                comp3Place3 = 2;
                comp3Points3 = 2;
                comp1Place3 = 3;
                comp1Points3 = 1;
            }
        }
        else if (comp3FinalScore > comp1FinalScore && comp3FinalScore > comp2FinalScore){
            comp3Place3 = 1;
            comp3Points3 = 3;
            if (comp1FinalScore > comp2FinalScore){
                comp1Place3 = 2;
                comp1Points3 = 2;
                comp2Place3 = 3;
                comp2Points3 = 1;
            }
            else{
                comp1Place3 = 3;
                comp1Points3 = 1;
                comp2Place3 = 2;
                comp2Points3 = 2;
            }
        }

        if (comp1FinalScore == comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1Place3 = 1;
            comp2Place3 = 1;
            comp3Place3 = 2;
            comp1Points3 = 3;
            comp2Points3 = 3;
            comp3Points3 = 2;
        }
        else if (comp1FinalScore==comp2FinalScore && comp1FinalScore < comp3FinalScore){
            comp1Place3 = 2;
            comp2Place3 = 2;
            comp3Place3 = 1;
            comp1Points3 = 2;
            comp2Points3 = 2;
            comp3Points3 = 3;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore > comp2FinalScore){
            comp1Place3 = 1;
            comp3Place3 = 1;
            comp2Place3 = 2;
            comp1Points3 = 3;
            comp3Points3 = 3;
            comp2Points3 = 2;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore < comp2FinalScore){
            comp1Place3 = 2;
            comp3Place3 = 2;
            comp2Place3 = 1;
            comp1Points3 = 2;
            comp3Points3 = 2;
            comp2Points3 = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore > comp1FinalScore){
            comp1Place3 = 2;
            comp3Place3 = 1;
            comp2Place3 = 1;
            comp1Points3 = 2;
            comp3Points3 = 3;
            comp2Points3 = 3;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore < comp1FinalScore){
            comp1Place3 = 1;
            comp3Place3 = 2;
            comp2Place3 = 2;
            comp1Points3 = 3;
            comp3Points3 = 2;
            comp2Points3 = 2;
        }
        


        break;

        case 4:
        comp1FinalScore = comp1Points1 + comp1Points2 + comp1Points3;
        comp2FinalScore = comp2Points1 + comp2Points2 + comp2Points3;
        comp3FinalScore = comp3Points1 + comp3Points2 + comp3Points3;

        if (comp1FinalScore > comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1PlaceFinal = 1;
            if (comp2FinalScore > comp3FinalScore){
                comp2PlaceFinal = 2;
                comp3PlaceFinal = 3;
            }
            else {
                comp3PlaceFinal = 2;
                comp2PlaceFinal = 3;
            }
        }
        else if (comp2FinalScore > comp1FinalScore && comp2FinalScore > comp3FinalScore){
            comp2PlaceFinal = 1;
            if (comp1FinalScore > comp3FinalScore){
                comp1PlaceFinal = 2;
                comp3PlaceFinal = 3;
            }
            else{
                comp3PlaceFinal = 2;
                comp1PlaceFinal = 3;
            }
        }
        else if (comp3FinalScore > comp1FinalScore && comp3FinalScore > comp2FinalScore){
            comp3PlaceFinal = 1;
            if (comp1FinalScore > comp2FinalScore){
                comp1PlaceFinal = 2;
                comp2PlaceFinal = 3;
            }
            else{
                comp1PlaceFinal = 3;
                comp2PlaceFinal = 2;
            }
        }

        if (comp1FinalScore == comp2FinalScore && comp1FinalScore > comp3FinalScore){
            comp1PlaceFinal = 1;
            comp2PlaceFinal = 1;
            comp3PlaceFinal = 2;
        }
        else if (comp1FinalScore==comp2FinalScore && comp1FinalScore < comp3FinalScore){
            comp1PlaceFinal = 2;
            comp2PlaceFinal = 2;
            comp3PlaceFinal = 1;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore > comp2FinalScore){
            comp1PlaceFinal = 1;
            comp3PlaceFinal = 1;
            comp2PlaceFinal = 2;
        }
        else if (comp1FinalScore == comp3FinalScore && comp1FinalScore < comp2FinalScore){
            comp1PlaceFinal = 2;
            comp3PlaceFinal = 2;
            comp2PlaceFinal = 1;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore > comp1FinalScore){
            comp1PlaceFinal = 2;
            comp3PlaceFinal = 1;
            comp2PlaceFinal = 1;
        }
        else if (comp2FinalScore == comp3FinalScore && comp2FinalScore < comp1FinalScore){
            comp1PlaceFinal = 1;
            comp3PlaceFinal = 2;
            comp2PlaceFinal = 2;
        }

        //*****************************DISPLAY*********************************
        cout << "*********************** Stone Over Bar ***********************" << endl;
        cout << setw(15) << "Competitors" << setw(18) << "Stones Lifted" << setw(11) << "Points" << setw(10) << "Place" << endl;
        cout << setw(13) << comp1 << setw(14) << comp1FinalScore << setw(15) << comp1Points1 << setw(10) << comp1Place1 << endl;
        cout << setw(13) << comp2 << setw(14) << comp2FinalScore << setw(15) << comp2Points1 << setw(10) << comp2Place1 << endl;
        cout << setw(13) << comp3 << setw(14) << comp3FinalScore << setw(15) << comp3Points1 << setw(10) << comp3Place1 << endl;

        //*****************************DISPLAY*********************************
        cout << "*********************** Farmers Frame Medley ***********************" << endl;
        cout << setw(15) << "Competitors" << setw(18) << "Seconds" << setw(11) << "Points" << setw(10) << "Place" << endl;
        cout << setw(13) << comp1 << setw(19) << setprecision(2) << fixed << comp1FinalSeconds << setw(9) << comp1Points2 << setw(11) << comp1Place2 << endl;
        cout << setw(13) << comp2 << setw(19) << setprecision(2) << fixed << comp2FinalSeconds << setw(9) << comp2Points2 << setw(11) << comp2Place2 << endl;
        cout << setw(13) << comp3 << setw(19) << setprecision(2) << fixed << comp3FinalSeconds << setw(9) << comp3Points2 << setw(11) << comp3Place2 << endl;

        //*****************************DISPLAY*********************************
        cout << "*********************** Axle Deadlift ***********************" << endl;
        cout << setw(15) << "Competitors" << setw(18) << "Pounds" << setw(11) << "Points" << setw(10) << "Place" << endl;
        cout << setw(13) << comp1 << setw(19) << comp1FinalScore << setw(9) << comp1Points3 << setw(11) << comp1Place3 << endl;
        cout << setw(13) << comp2 << setw(19) << comp2FinalScore << setw(9) << comp2Points3 << setw(11) << comp2Place3 << endl;
        cout << setw(13) << comp3 << setw(19) << comp3FinalScore << setw(9) << comp3Points3 << setw(11) << comp3Place3 << endl;

        cout << "\n";
        cout << "*********************** FINAL ***********************" << endl;
        cout << comp1 << setw(8) << comp1PlaceFinal << setw(8) << comp1FinalScore << endl;
        cout << comp2 << setw(9) << comp2PlaceFinal << setw(8) << comp2FinalScore << endl;
        cout << comp3 << setw(10) << comp3PlaceFinal << setw(8) << comp3FinalScore << endl;
        break;

        case 5:
        exit(1);
        break;


    }
}

    return 0;
}