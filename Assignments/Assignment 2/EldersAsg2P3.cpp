/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 3
Pizza for dinner
*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const float pi = 3.14159;
const float sliceArea = 14.125;

int diameter;
float area;
float slices;
float radius;

int main(){
    cout << "Diameter of pizza (inches): ";
    cin >> diameter;
    radius = (diameter/2);
    area = pi*(pow(radius, 2));
    slices = (area/sliceArea);

    cout << "Number of slices: " << setprecision(1) << fixed << slices << endl;

}