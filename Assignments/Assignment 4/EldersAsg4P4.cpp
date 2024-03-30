/*
Ethan Elders
00099962
eelders@my.athens.edu
March 10, 2024
Assignment 4 Problem 4
Grocery List
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    //VARIABLES
    int run = true;
    int groceryMenu;
    ofstream outfile;

    //Grocery store variables
    string walmartItem1, walmartItem2, walmartItem3, walmartItem4, walmartItem5;
    string homeItem1, homeItem2, homeItem3, homeItem4, homeItem5;
    string samsItem1, samsItem2, samsItem3, samsItem4, samsItem5;
    string item1, item2, item3, item4, item5, item6, item7, item8, item9, item10, item11, item12, item13, item14, item15;

    //START
    while (run){
        cout << "*******************GROCERY LIST*******************" << endl;
        cout << "1. Wal-Mart" << endl;
        cout << "2. Hometown Market" << endl;
        cout << "3. Sam's Club" << endl;
        cout << "4. Done" << endl;
        cout << "Select a menu option: ";
        cin >> groceryMenu;
        cin.clear(); //Needed to stop infinite loop if char is entered
        cin.ignore(); //Needed to stop infinite loop if char is entered

        while (groceryMenu < 1 || groceryMenu > 4){
            cout << "You entered an invalid menu option, please try again." << endl;
            cout << "Enter a number 1-3: ";
            cin >> groceryMenu;
            cin.clear();
            cin.ignore();
        }

        switch(groceryMenu){
            case 1:
            cout << "********WALMART********" << endl;
            cout << "Enter your first item: ";
            getline(cin, walmartItem1);
            cout << "Enter your second item: ";
            getline(cin, walmartItem2);
            cout << "Enter your third item: ";
            getline(cin, walmartItem3);
            cout << "Enter your fourth item: ";
            getline(cin, walmartItem4);
            cout << "Enter your fifth item: ";
            getline(cin, walmartItem5);
            break;

            case 2:
            cout << "****Hometown Market****" << endl;
            cout << "Enter your first item: ";
            getline(cin, homeItem1);
            cout << "Enter your second item: ";
            getline(cin, homeItem2);
            cout << "Enter your third item: ";
            getline(cin, homeItem3);
            cout << "Enter your fourth item: ";
            getline(cin, homeItem4);
            cout << "Enter your fifth item: ";
            getline(cin, homeItem5);
            break;

            case 3:
            cout << "******Sam's Club*******" << endl;
            cout << "Enter your first item: ";
            getline(cin, samsItem1);
            cout << "Enter your second item: ";
            getline(cin, samsItem2);
            cout << "Enter your third item: ";
            getline(cin, samsItem3);
            cout << "Enter your fourth item: ";
            getline(cin, samsItem4);
            cout << "Enter your fifth item: ";
            getline(cin, samsItem5);
            break;

            case 4:
            cout << "Walmart" << endl;
            cout << walmartItem1 << endl;
            cout << walmartItem2 << endl;
            cout << walmartItem3 << endl;
            cout << walmartItem4 << endl;
            cout << walmartItem5 << endl;
            cout << endl;
            cout << "Hometown Market" << endl;
            cout << homeItem1 << endl;
            cout << homeItem2 << endl;
            cout << homeItem3 << endl;
            cout << homeItem4 << endl;
            cout << homeItem5 << endl;
            cout << endl;
            cout << "Sam's Club" << endl;
            cout << samsItem1 << endl;
            cout << samsItem2 << endl;
            cout << samsItem3 << endl;
            cout << samsItem4 << endl;
            cout << samsItem5 << endl;


            outfile.open("GroceryList.txt");
            outfile << "Walmart" << endl;
            outfile << walmartItem1 << endl;
            outfile << walmartItem2 << endl;
            outfile << walmartItem3 << endl;
            outfile << walmartItem4 << endl;
            outfile << walmartItem5 << endl;
            outfile << endl;
            outfile << "Hometown Market" << endl;
            outfile << homeItem1 << endl;
            outfile << homeItem2 << endl;
            outfile << homeItem3 << endl;
            outfile << homeItem4 << endl;
            outfile << homeItem5 << endl;
            outfile << endl;
            outfile << "Sam's Club" << endl;
            outfile << samsItem1 << endl;
            outfile << samsItem2 << endl;
            outfile << samsItem3 << endl;
            outfile << samsItem4 << endl;
            outfile << samsItem5 << endl;
            exit(1);
            break;
        }
    }


    return 0;
}