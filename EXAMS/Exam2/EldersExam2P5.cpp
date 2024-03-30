/*
Ethan Elders
00099962
eelders@my.athens.edu
CS317 - Exam 2
Problem 5
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream inFile;
    int numOfNums;
    int count = 0;
    int avgNums = 0;
    int num = 0;
    float avg;
    int sum;
    int currentMin;
    int min;
    int max;
    int currentSel;
    int currentMax;

    string line;
    inFile.open("Numbers.txt");
    while (getline(inFile, line))
        count++;
        numOfNums = count;
    
    inFile.clear();
    inFile.seekg(0, ios::beg);
    while (getline(inFile, line)){
    for (count = 0; count < 55; count++){
        inFile >> num;
        avgNums = avgNums+num;
    }
    }
    avg = static_cast<float>(avgNums)/count;
    inFile.clear();
    inFile.seekg(0, ios::beg);
    for (count = 0; count < 25; count++){
        inFile >> num;
        sum = sum+num;
    }
    inFile.clear();
    inFile.seekg(0, ios::beg);
    count = 0;
    inFile >> currentMin;
    for (count = 0; count < numOfNums; count++){
        inFile >> currentSel;
        if (currentSel < currentMin){
            currentMin = currentSel;
        }
    }
    min = currentMin;
    inFile.clear();
    inFile.seekg(0, ios::beg);
    count = 0;
    inFile >> currentMin;
    for (count = 0; count < numOfNums; count++){
        inFile >> currentSel;
        if (currentSel > currentMax){
            currentMax = currentSel;
        }
    }
    max = currentMax;
    inFile.close();

    cout << "There are " << numOfNums << " numbers in the file." << endl;
    cout << "The average of the first 55 numbers is: " << avg << endl;
    cout << "The sum of the first 25 numbers is: " << sum << endl;
    cout << "The minimum value found in the file is: " << min << endl;
    cout << "The maximum value found in the file is: " << max << endl;


return 0;
}