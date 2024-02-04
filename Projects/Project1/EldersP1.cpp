/*
Ethan Elders
00099962
eelders@my.athens.edu
February 1, 2024
Project 1 - 
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    //Variable INIT and Declarations
    const float tuitionPerHour = 263.00;
    const float fees = 162.50;

    const string class1Name = "Computer Ethics";
    const string class2Name = "Discrete Math";
    const string class3Name = "Network Architecture";

    const int class1Num = 310;
    const int class2Num = 308;
    const int class3Num = 308;

    const string class1Pre = "CS";
    const string class2Pre = "ITE";
    const string class3Pre = "MA";

    const int class1Credit = 1;
    const int class2Credit = 3;
    const int class3Credit = 2;

    string firstName;
    string lastName;
    int studentID;
    float scholarshipAmnt;
    float totalDue;
    int totalHours = class1Credit + class2Credit + class3Credit;
    float totalTuition = totalHours * tuitionPerHour;

    cout<<"Please enter your first name: ";
    getline(cin, firstName);
    cout<<"Please enter your last name: ";
    getline(cin, lastName);
    cout<<"Please enter your student ID number: ";
    cin>>studentID;
    cout<< firstName <<" "<< lastName <<" "<< studentID << endl;
    cout<<"Please enter your scholarship amount:$";
    cin>>scholarshipAmnt;

    cout << "\nDear " << firstName << " " << lastName << " (" << studentID << ") Thank you for entering your information, below is your class listing and bill for the Spring 2024 semester\n\n" << endl;
    
    cout << "\t**********COURSE DETAILS**********" << endl<<endl;
    cout << "Prefix" << setw(6) << "No. " << setw(8) << "Title " << setw(30) << "Credit Hours" << endl;
    cout << "**************************************************" << endl;
    cout << setw(4) << class1Pre << setw(7) << class1Num << setw(18) << class1Name << setw(16) << class1Credit << endl;
    cout << setw(4) << class2Pre << setw(7) << class2Num << setw(16) << class2Name << setw(18) << class2Credit << endl;
    cout << setw(4) << class3Pre << setw(7) << class3Num << setw(23) << class3Name << setw(11) << class3Credit << endl;

    totalDue = (totalTuition + fees) - scholarshipAmnt;

    cout << "\nTotal Enrollment Hours:" << setw(22) << totalHours << endl;

    cout << "\n\n**********Billing Information**********"<< endl; //39
    cout << left << setw(12) << "Tuition" << right << setw(20) << "$" << setprecision(2) << fixed << totalTuition << endl;
    cout << left << setw(12) << "Fees" << right << setw(20) << "$" << setprecision(2) << fixed << fees << endl;
    cout << left << setw(12) << "Scholarship" << right << setw(20) << "$" << setprecision(2) << fixed << scholarshipAmnt << endl << endl;
    cout << left << setw(12) << "Total Due:" << right << setw(20) << "$" << setprecision(2) << fixed << totalDue << endl << endl;

    return 0;
}