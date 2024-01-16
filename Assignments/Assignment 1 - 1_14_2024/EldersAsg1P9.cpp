/*
Ethan Elders
eelders@my.Athens.edu
00099962
Assignment 1 Problem 9
*/

#include <iostream>
using namespace std;

//main function
int main(){
    //constants and var declarations
    int const const1 = 62;
    int const const2 = 99;
    int constSum;
    float num1 = 5.7;
    float num2 = 3.1;
    float numProduct;
    char char1 = 'F';
    char char2 = 'a'; 
    char charSum;

    //Start calculations
    constSum = const1+const2;
    numProduct = num1*num2;
    charSum = char2+char1;

    //Output
    cout<<"Sum of the constants 62 and 99: " << const1 << endl;
    cout<<"Product of the numbers 5.7 and 3.1: " << numProduct << endl;
    cout<<"Sum of the characters 'F' and 'a': " << charSum << endl;
    return 0;
}