/*
Ethan Elders
00099962
eelders@my.athens.edu
February 5, 2024
Assignment 2 Problem 9
Go To Desserts
*/

#include <iostream>
#include <iomanip>

using namespace std;

//variables
const int originalCrushedOreo = 10;
const int originalCreamCheese = 2;
const int originalMilkChips = 4;
const int originalServing = 30;

int newServingSize;
int newCrushedOreo;
int newCreamCheese;
int newMilkChips;
float scale;



int main(){
    cout << "How many oreo balls would you like to make?: ";
    cin >> newServingSize;

    //calc
    scale = static_cast <float> (newServingSize) / originalServing;
    newCrushedOreo = originalCrushedOreo * scale;
    newCreamCheese = originalCreamCheese * scale;
    newMilkChips = originalMilkChips * scale;

    //output
    cout << "\n\nServing Size: " << newServingSize << endl;
    cout << newCrushedOreo << " cups crushed Oreos" << endl;
    cout << newCreamCheese << " cups cream cheese" << endl;
    cout << newMilkChips << " cups chocolate chips" << endl;
}