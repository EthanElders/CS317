/*
Ethan Elders
eelders@my.Athens.edu
00099962
Assignment 1 Problem 10
*/

#include <iostream>
using namespace std;

//main function
int main(){
    //CONSTANTS
    float const totalPaid = 20.00;
    float const billPreTip = 17.71;
    float const taxRate = 9.75;

    //VARIABLES
    float subTotal;
    float tax;
    float total;
    float tip;
    float tipPercent;
    float finalTotal;

    //CALCULATIONS
    tip = (totalPaid - billPreTip);
    tipPercent = (tip / billPreTip) * 100;
    tax = (billPreTip - (billPreTip/(1+(taxRate/100))));
    subTotal = (billPreTip - tax);
    total = (subTotal + tax);
    finalTotal = (total + tip);

    //OUTPUT
    cout<<"**************************"<<endl;
    cout<<"Subtotal: $" << subTotal <<endl;
    cout<<"Tax Rate: " << taxRate << "%" << endl;
    cout<<"Tax Amount: $" << tax << endl;
    cout<<"Total: $" << total << endl;
    cout<<"Tip Percent: " << tipPercent << "%" << endl;
    cout<<"Tip: $" << tip << endl;
    cout<<"Total Paid: $"<< finalTotal <<endl;
    cout<<"**************************"<<endl;

    return 0;
}