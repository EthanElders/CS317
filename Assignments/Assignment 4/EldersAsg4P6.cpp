/*
Ethan Elders
00099962
eelders@my.athens.edu
March 10, 2024
Assignment 4 Problem 6
Stock Market Bar Chart
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream inputFile;
ofstream outputFile;
const int setAmnt = 3000;
int year = 2021;
int length;
int avgPrice;

inputFile.open("StockMarket.txt");
outputFile.open("StockResult.txt");
for (year=2021; year >= 2015; year--){
    inputFile >> avgPrice;
    length = avgPrice/setAmnt;
    cout << year << "|";
    outputFile << year << "|";
    for(int i=0; i < length; i++){
        outputFile << "*";
        cout << "*";
    }
    outputFile << "\n";
    cout << "\n";
}
inputFile.close();
outputFile.close();
return 0;
}