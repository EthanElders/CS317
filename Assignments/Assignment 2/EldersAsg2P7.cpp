/*
Ethan Elders
00099962
eelders@my.athens.edu
February 4, 2024
Assignment 2 Problem 7
Receipt Display
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

const float taxRate = .0948;
const string item1 = "44 Ginger Lover";
const string item1ls = " [Pork][2**]";
const string item2 = "Brown Rice";
const float item1Price = 9.50;
const float item2Price = 2.00;

string date;
string serverName;


int orderNum;
int tableNum;
float total;
float salesTax;
float grandTotal;

int main(){
    //input
    date = "2/4/2024 8:11 PM";
    cout << "Enter your name: ";
    getline(cin, serverName);
    cout << "Enter table number: ";
    cin >> tableNum;

    //calc
    total = item1Price + item2Price;
    salesTax = taxRate * total;
    grandTotal = total + salesTax;
    srand (time(0));
    orderNum = rand() % 99+1;
    
    //Receipt Header
    cout << "\n\n\n" << endl;
    cout << setw(30) << "Ying Thai Kitchen" << endl;
    cout << setw(32) << "2220 Queen Anne AVE N" << endl;
    cout << setw(30) << "Seattle WA 98109" << endl;
    cout << setw(39) << "Tel. (206) 285-6424 Fax. (206) 285-8427" << endl;
    cout << setw(31) << "www.yingthaikitchen.com" << endl;
    cout << setw(40) << "Welcome to Ying Thai Kitchcen Resaurant." << endl << endl;

    cout << "Order#:" << orderNum <<setw(29) << "Table " << tableNum << endl;
    cout << "Date: "<< date << endl;
    cout << "Server: " << left << setw(23) << serverName << right << setw(9) << "(T.4)" << endl;
    cout << "----------------------------------------" << endl;
    cout << item1 << setw(21) << "$" << setprecision(2) << fixed << item1Price << endl;
    cout << item1ls << endl;
    cout << item2 << setw(26) << "$" << setprecision(2) << fixed << item2Price << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total 2 item(s)" << setw(20) << "$" << total << endl;
    cout << "Sales Tax" << setw(27) << "$" << salesTax << endl;
    cout << "----------------------------------------" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Grand Total" << setw(24) << "$" << grandTotal << endl;
    cout << "\nTip Guide" << endl;
    cout << "15%=$1.89,  18%=2.27,  20%=$2.52" << endl;
    cout << setw(31) << "Thank you very much." << endl;
    cout << setw(28) << "Come back again" << endl;



    return 0;
}