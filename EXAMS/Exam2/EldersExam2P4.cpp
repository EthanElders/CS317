/*
Ethan Elders
00099962
eelders@my.athens.edu
CS317 - Exam 2
Problem 4
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //variables
    const int numerator = 9;
    const int denominator = 5;
    const int addEndNum = 32;
    int maxNum;
    int minNum;
    
    int celsius;
    int currentCels;
    float fahrenheit;

    cout << "Please enter celsius temperatures: ";
    cin >> celsius;
    maxNum = celsius + 11;
    minNum = celsius - 11;
    currentCels = minNum;
    

    cout << "\n\n\nTemperature Conversion Table" << endl;
    cout << "Celsius" << setw(15) << "Fahrenheit" << endl;
    for (int i = 0; i < maxNum; i++){
        currentCels++;
        fahrenheit = (static_cast <float> (numerator)/denominator)*currentCels+addEndNum;
        cout << setw(5) << currentCels << setw(15) << setprecision(1) << fixed << fahrenheit << endl;
    }
    return 0;
}