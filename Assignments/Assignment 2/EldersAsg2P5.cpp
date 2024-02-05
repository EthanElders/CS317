/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 5
Fidget Orders
*/

#include <iostream>
#include <iomanip>

using namespace std;

const float boxWeight = 3.15;
const int fidgetsInBox = 20;
const int emptyPalletW = 25;
const float loadedPallet = 50.2;
float palletWeight;
int boxes;
int fidgets;


int main(){
    palletWeight = loadedPallet - emptyPalletW;
    boxes = palletWeight / boxWeight;
    fidgets = boxes * fidgetsInBox;

    cout << "*****************************************************" << endl << endl;
    cout << setw(13) << "Pallet Weight" << setw(20) << "Number of Boxes" << setw(20) << "Number of Fidgets" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << setw(8) << loadedPallet << setw(18) << boxes << setw(20) << fidgets << endl << endl;
    cout << "*****************************************************" << endl << endl;

}