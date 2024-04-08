/*
Ethan Elders
00099962
eelders@my.athens.edu
April 7, 2024
Assignment 5 Problem 3
Using Files - Numeric Processing - FUNCTIONS
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//GLOBAL?
ifstream inFile;

//FUNCTION PROTO
string fileIn();
int numList(string);
float average(string);
int sumNum(string);
int minimum(string, int);
int maximum(string, int);




int main(){
    //LOCAL VARIABLES
    string fileName;
    int numOfLines;
    float averageNum;
    int sumOfNums;
    int min;
    int max;

    fileName = fileIn();
    numOfLines = numList(fileName);
    averageNum = average(fileName);
    sumOfNums = sumNum(fileName);
    min = minimum(fileName, numOfLines);
    max = maximum(fileName, numOfLines);


    cout << "Number of Numbers: " << numOfLines << endl;
    cout << "Average: " << averageNum << endl;
    cout << "Sum of numbers: " << sumOfNums << endl;
    cout << "Minimum Number: " << min << endl;
    cout << "Maximum Number: " << max << endl;


    return 0;
}



//*******************************************************************************************************************
string fileIn(){
    string fileNameInput;

    cout << "Enter File Name: ";
    getline(cin, fileNameInput);

    return fileNameInput;
}
//********************************************************************************************************************
int numList(string readFile){
    int numberOfLines = 0;
    string placeHolder;

    inFile.open(readFile);
    while (getline(inFile, placeHolder)){
        ++numberOfLines;
    }

    inFile.close();
    return numberOfLines;
}
//********************************************************************************************************************
float average(string readFile){
    inFile.open(readFile);

    int sum = 0;
    const int number = 22;
    int num;

    for (int i = 0; i < number && inFile >> num; ++i) {
        sum += num;
    }

    inFile.close();
    return static_cast<float>(sum) / number;
}
//********************************************************************************************************************
int sumNum(string readFile){
    inFile.open(readFile);
    const int number = 15;
    int num;
    int sum;

    for (int i = 0; i < number && inFile >> num; ++i) {
        sum += num;
    }

    inFile.close();
    return sum;
}
//********************************************************************************************************************
int minimum(string readFile, int line){
    inFile.open(readFile);
    int minimumNumber;
    int currentMin;
    int currentSel;

    inFile >> currentMin;
    for (int i = 0;  i < line; i++){
        inFile >> currentSel;
        if (currentSel < currentMin){
            currentMin = currentSel;
        }
    }
    minimumNumber = currentMin;

    inFile.close();
    return minimumNumber;
}
//********************************************************************************************************************
int maximum(string readFile, int line){
    inFile.open(readFile);
    int maximumNumber;
    int currentMax;
    int currentSel;

    inFile >> currentMax;
    for (int i = 0;  i<line; i++){
        inFile >> currentSel;
        if (currentSel > currentMax){
            currentMax = currentSel;
        }
    }
    maximumNumber = currentMax;

    inFile.close();
    return maximumNumber;
}