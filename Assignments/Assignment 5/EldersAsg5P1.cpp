/*
Ethan Elders
00099962
eelders@my.athens.edu
April 7, 2024
Assignment 5 Problem 1
Powerlifting Functions
*/

#include <iostream>
#include <iomanip>

using namespace std;

int userIn();
float calculateEstimatedKilo(float);
float calculateExactKilo(float);
void results(float, float, float);

int main(){
    //LOCAL VARIABLE INIT
    float pounds;
    float eKilo;
    float kilo;

    //START
    pounds = userIn();
    eKilo = calculateEstimatedKilo(pounds);
    kilo = calculateExactKilo(pounds);
    results(pounds, eKilo, kilo);

    //END
    return 0;
}


//***********************************
//FUNCTION FOR USER INPUT / INCLUDES INPUT VALIDATION
int userIn(){
    float inputPounds;

    cout << "Enter the weight in pounds(Lbs): ";
    cin >> inputPounds;
    while (inputPounds < 0){
        cout << "You have entered an invalid number." << endl;
        cout << "Weight can not be less than zero." << endl;
        cout << "Please enter a weight in pounds (lbs): ";
        cin >> inputPounds;
    }

    return inputPounds;
}

//***********************************
//FUCNTION FOR CALC ESTIMATED KILOS
float calculateEstimatedKilo(float pounds){
    float eKilo;
    const int numerator = 1;
    const int denominator = 10;
    const int denom2 = 2;

    eKilo = pounds/denom2 - (pounds/denom2 * (static_cast <float> (numerator)/denominator));
    return eKilo;
}

//***********************************
//FUCNTION FOR CALC EXACT KILOS
float calculateExactKilo(float pounds){
    const float exactDivide = 2.2046;
    float kilo;

    kilo = (pounds/exactDivide);

    return kilo;
}

//***********************************
//FUNCTION FOR RESULTS OUTPUT
void results(float pounds, float eKilo, float kilo){
    cout << "Pounds: " << pounds << endl;
    cout << "Estimated Kilos: " << setprecision(2) << fixed << eKilo << endl;
    cout << "Exact Kilos: " << setprecision(2) << fixed << kilo << endl;
}