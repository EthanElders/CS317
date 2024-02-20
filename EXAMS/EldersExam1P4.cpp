/*
Ethan Elders
00099962
eelders@my.athens.edu
February 11, 2024
CS317
Exam 1 P4
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //variables
    const int numerator = 9;
    const int denominator = 5;
    const int addEndNum = 32;
    
    int celsius;
    float fahrenheit;

    cout << "Please enter celsius temperatures: ";
    cin >> celsius;
    fahrenheit = (static_cast <float> (numerator)/denominator)*celsius+addEndNum;
    cout << "Celsius" << setw(15) << "Fahrenheit" << endl;
    cout << setw(5) << celsius << setw(15) << setprecision(2) << fixed << fahrenheit;
    return 0;
}