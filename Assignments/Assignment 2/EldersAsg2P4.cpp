/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 4
Word Game
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string playerName;
int playerAge;
string cityName;
string collegeName;
string profession;
string animal;
string petName;

int main(){
    cout << "Enter your name: ";
    getline(cin, playerName);
    cout << "Enter your age: ";
    cin >> playerAge;
    cin.ignore(); //This is the only way I could get the program to stop skipping the input for cityName on line 31.
    cout << "Enter the name of a city: ";
    getline(cin, cityName);
    cout << "Enter the name of a college: ";
    getline(cin, collegeName);
    cout << "Enter a profession: ";
    getline(cin, profession);
    cout << "Enter a type of animal: ";
    getline(cin, animal);
    cout << "Enter a pet's name: ";
    getline(cin, petName);

    cout << "There once was a person named " << playerName << " who lived in " << cityName << ". At the age of " <<
    playerAge << ", " << playerName << " went to college at " << collegeName << ". " << playerName << " graduated and went to work as a " << 
    profession << ". Then, " << playerName << " adopted a(n) " << animal << " named " << petName << ". They both lived happily ever after." << endl;


}