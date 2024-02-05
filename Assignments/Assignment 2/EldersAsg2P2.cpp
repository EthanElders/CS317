/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 2
Gradebook
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const float assignmentPercent = 0.40;
const float testPercent = 0.60;

string studentName;
int idNum, grade1, grade2, grade3, test1, test2;
float finalGrade, finalAsg, finalTest;

float percentPerAsg = assignmentPercent / 3;
float percentPerTest = testPercent / 2;


int main(){
    
    //user inputs
    cout << "Please enter the student's name: ";
    getline(cin, studentName);
    cout << "Please enter the student's ID number (numbers only): ";
    cin >> idNum;
    cout << "Please enter the scores that the student earned for assignments 1 - 3: ";
    cin >> grade1 >> grade2 >> grade3;
    cout << "Please enter the scores that the student earned for Test 1 and 2: ";
    cin >> test1 >> test2;

    //calculations
    finalAsg = (grade1 * percentPerAsg) + (grade2 * percentPerAsg) + (grade3 * percentPerAsg);
    finalTest = (test1 * percentPerTest) + (test2 * percentPerTest);
    finalGrade = (finalAsg + finalTest) / (assignmentPercent + testPercent);

    //cout<< setprecision(2) << fixed << finalGrade;

    //output
    cout << "\n\n***********************************************************" << endl << endl;
    cout << "Welcome to Gradebook" << endl << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Student ID: " << idNum << endl << endl;

    cout << setw(8) << "A1" << setw(8) << "A2" << setw(8) << "A3" << setw(12) << "Test 1" << setw(12) 
    << "Test 2" << setw(11) << "Grade" << endl;

    cout << "***********************************************************" << endl;

    cout << setw(8) << grade1 << setw(8) << grade2 << setw(8) << grade3 << setw(10) << 
    test1 << setw(12) << test2 << setprecision(2) << fixed << setw(13) << finalGrade << endl << endl;

    return 0;
}