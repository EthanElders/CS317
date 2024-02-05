/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 6
Celsius to Fahrenheit
*/

#include <iostream>
#include <iomanip>

using namespace std;
float cTemp;
float fTemp;

int main(){
    cout << "********** Temperature Converter **********" << endl;
    cout << "Enter temperature in celsius: ";
    cin >> cTemp;
    fTemp = (static_cast <float> (9)/5)*cTemp+32;

    cout << "Celsius" << setw(15) << "Fahrenheit" << endl;
    cout << setw(5) << cTemp << setw(15) << setprecision(1) << fixed << fTemp;
    
    return 0;
}