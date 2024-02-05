/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 8
Powerlifting
*/

#include <iostream>
#include <iomanip>

using namespace std;

//variables

float eKilo;
float kilo;
float pounds;

const int numerator = 1;
const int denominator = 10;
const int denom2 = 2;
const float exactDivide = 2.2046;

int main(){

    //user in
    cout << "Enter the weight in pounds(Lbs): ";
    cin >> pounds;

    //calculate
    eKilo = pounds/denom2 - (pounds/denom2 * (static_cast <float> (numerator)/denominator));
    kilo = (pounds/exactDivide);

    //output
    cout << "Pounds: " << pounds << endl;
    cout << "Estimated Kilos: " << setprecision(2) << fixed << eKilo << endl;
    cout << "Exact Kilos: " << setprecision(2) << fixed << kilo << endl;

}