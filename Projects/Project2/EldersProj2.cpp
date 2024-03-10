/*
Ethan Elders
00099962
eelders@my.athens.edu
February 1, 2024
Project 2 - 
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

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

    string userClass1Name;
    string userClass2Name;
    string userClass3Name;

    int userClass1Num;
    int userClass2Num;
    int userClass3Num;

    string userClass1Pre;
    string userClass2Pre;
    string userClass3Pre;

    int userClass1Credit;
    int userClass2Credit;
    int userClass3Credit;

    string firstName;
    string lastName;
    int studentID;

    //These are defined to keep false numbers from appearing in the bill output if nothing has been selected
    float scholarshipAmnt = 0;
    float totalDue = 0;
    int totalHours = 0;
    float totalTuition = 0;

    int numOfClasses;
    int class1Sel, class2Sel, class3Sel;
    int classSelectMenu;
    bool mainMenuRun = true;
    int mainMenuOption = 0;
    bool scholarshipSel = true;

    int scholarshipType;
    string scholarship;
    int scheduleOption;
    int billOption;
    int detailOption;

    ofstream outfile;

    

    cout<<"Please enter your first name: ";
    getline(cin, firstName);
    cout<<"Please enter your last name: ";
    getline(cin, lastName);
    cout<<"Please enter your student ID number: ";
    cin>>studentID;

    cout << "\nDear " << firstName << " " << lastName << " (" << studentID << ") Thank you for entering your information, below is your class listing and bill for the Spring 2024 semester\n\n" << endl;
    
    while(mainMenuRun){

        cout << "\n\n\nPlease select a menu option: " << endl;
        cout << "1. Select Classes" << endl;
        cout << "2. Enter Scholarship" << endl;
        cout << "3. View Schedule" << endl;
        cout << "4. View Bill" << endl;
        cout << "5. View Details" << endl;
        cout << "6. Exit" << endl << endl;

        cin.clear();
        cin.ignore(100, '\n');
        cin >> mainMenuOption;
        
        switch (mainMenuOption){
            case 1:
            numOfClasses = 0;
            cout << "How many classes are you taking? (Enter a number 1-3)" << endl << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> numOfClasses;
            switch(numOfClasses){
                case 1:
                do{
                    class1Sel = 0;
                    cout << "\t**********COURSE DETAILS**********" << endl<<endl;
                    cout << setw(6) << "Option" << setw(8) << "Prefix" << setw(6) << "No. " << setw(8) << "Title " << setw(21) << "Credit Hours" << endl;
                    cout << "**************************************************" << endl;
                    cout << left << setw(10) << "1. " << setw(6) << class1Pre << setw(4) << class1Num << setw(23) << class1Name << setw(16) << class1Credit << endl;
                    cout << left << setw(10) << "2. " << setw(6) << class2Pre << setw(4) << class2Num << setw(23) << class2Name << setw(18) << class2Credit << endl;
                    cout << left << setw(10) << "3. " << setw(6) << class3Pre << setw(4) << class3Num << setw(23) << class3Name << setw(11) << class3Credit << endl;
                    cout << "\nSelect which class you would like to take: " << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> class1Sel;
                    if (class1Sel == 1){
                        userClass1Pre = class1Pre;
                        userClass1Num = class1Num;
                        userClass1Name = class1Name;
                        userClass1Credit = class1Credit;
                    }
                    else if(class1Sel == 2){
                        userClass1Pre = class2Pre;
                        userClass1Num = class2Num;
                        userClass1Name = class2Name;
                        userClass1Credit = class2Credit;
                    }
                    else if(class1Sel == 3){
                        userClass1Pre = class3Pre;
                        userClass1Num = class3Num;
                        userClass1Name = class3Name;
                        userClass1Credit = class3Credit;
                    }
                    else{
                        cout << "You have entered an invalid option, please try again" << endl;
                    }
                }
                while(class1Sel < 1 || class1Sel > 3);
                totalHours = userClass1Credit;
                break;

                case 2:
                
                do{
                    cout << "\t**********COURSE DETAILS**********" << endl<<endl;
                    cout << setw(6) << "Option" << setw(8) << "Prefix" << setw(6) << "No. " << setw(8) << "Title " << setw(21) << "Credit Hours" << endl;
                    cout << "**************************************************" << endl;
                    cout << left << setw(10) << "1. " << setw(6) << class1Pre << setw(4) << class1Num << setw(23) << class1Name << setw(16) << class1Credit << endl;
                    cout << left << setw(10) << "2. " << setw(6) << class2Pre << setw(4) << class2Num << setw(23) << class2Name << setw(18) << class2Credit << endl;
                    cout << left << setw(10) << "3. " << setw(6) << class3Pre << setw(4) << class3Num << setw(23) << class3Name << setw(11) << class3Credit << endl;
                    cout << "\nSelect which class you would like to take: " << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> class1Sel;
                    if (class1Sel == 1){
                        userClass1Pre = class1Pre;
                        userClass1Num = class1Num;
                        userClass1Name = class1Name;
                        userClass1Credit = class1Credit;
                    }
                    else if(class1Sel == 2){
                        userClass1Pre = class2Pre;
                        userClass1Num = class2Num;
                        userClass1Name = class2Name;
                        userClass1Credit = class2Credit;
                    }
                    else if(class1Sel == 3){
                        userClass1Pre = class3Pre;
                        userClass1Num = class3Num;
                        userClass1Name = class3Name;
                        userClass1Credit = class3Credit;
                    }
                    else{
                        cout << "You have entered an invalid option, please try again" << endl;
                    }
                }
                while(class1Sel < 1 || class1Sel > 3);

                
                do{
                    cout << "Select the second class you would like to take: " << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> class2Sel;
                    if (class2Sel == class1Sel){
                        cout << "You have selected the same option twice. Please try again." << endl;
                    }
                    else if (class2Sel == 1){
                        userClass2Pre = class1Pre;
                        userClass2Num = class1Num;
                        userClass2Name = class1Name;
                        userClass2Credit = class1Credit;
                    }
                    else if(class2Sel == 2){
                        userClass2Pre = class2Pre;
                        userClass2Num = class2Num;
                        userClass2Name = class2Name;
                        userClass2Credit = class2Credit;
                    }
                    else if(class2Sel == 3){
                        userClass2Pre = class3Pre;
                        userClass2Num = class3Num;
                        userClass2Name = class3Name;
                        userClass2Credit = class3Credit;
                    }
                    else{
                        cout << "You have entered an invalid option, please try again" << endl;
                    }
                }
                while(class2Sel < 1 || class2Sel > 3 || class2Sel == class1Sel);
                totalHours = userClass1Credit + userClass2Credit;
                break;

                case 3:
                do{
                    cout << "\t**********COURSE DETAILS**********" << endl<<endl;
                    cout << setw(6) << "Option" << setw(8) << "Prefix" << setw(6) << "No. " << setw(8) << "Title " << setw(21) << "Credit Hours" << endl;
                    cout << "**************************************************" << endl;
                    cout << left << setw(10) << "1. " << setw(6) << class1Pre << setw(4) << class1Num << setw(23) << class1Name << setw(16) << class1Credit << endl;
                    cout << left << setw(10) << "2. " << setw(6) << class2Pre << setw(4) << class2Num << setw(23) << class2Name << setw(18) << class2Credit << endl;
                    cout << left << setw(10) << "3. " << setw(6) << class3Pre << setw(4) << class3Num << setw(23) << class3Name << setw(11) << class3Credit << endl;
                    cout << "\nSelect which class you would like to take: " << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> class1Sel;
                    if (class1Sel == 1){
                        userClass1Pre = class1Pre;
                        userClass1Num = class1Num;
                        userClass1Name = class1Name;
                        userClass1Credit = class1Credit;
                    }
                    else if(class1Sel == 2){
                        userClass1Pre = class2Pre;
                        userClass1Num = class2Num;
                        userClass1Name = class2Name;
                        userClass1Credit = class2Credit;
                    }
                    else if(class1Sel == 3){
                        userClass1Pre = class3Pre;
                        userClass1Num = class3Num;
                        userClass1Name = class3Name;
                        userClass1Credit = class3Credit;
                    }
                    else{
                        cout << "You have entered an invalid option, please try again" << endl;
                    }
                }
                while(class1Sel < 1 || class1Sel > 3);


                do{
                    cout << "Select the second class you would like to take: " << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> class2Sel;
                    if (class2Sel == class1Sel){
                        cout << "You have selected the same option twice. Please try again." << endl;
                    }
                    else if (class2Sel == 1){
                        userClass2Pre = class1Pre;
                        userClass2Num = class1Num;
                        userClass2Name = class1Name;
                        userClass2Credit = class1Credit;
                    }
                    else if(class2Sel == 2){
                        userClass2Pre = class2Pre;
                        userClass2Num = class2Num;
                        userClass2Name = class2Name;
                        userClass2Credit = class2Credit;
                    }
                    else if(class2Sel == 3){
                        userClass2Pre = class3Pre;
                        userClass2Num = class3Num;
                        userClass2Name = class3Name;
                        userClass2Credit = class3Credit;
                    }
                    else{
                        cout << "You have entered an invalid option, please try again" << endl;
                    }

                }
                while(class2Sel < 1 || class2Sel > 3 || class2Sel == class1Sel);

                
                do{
                    cout << "Select the third class you would like to take: " << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> class3Sel;
                    if (class3Sel == class1Sel || class3Sel == class2Sel){
                    }
                    else if (class3Sel == 1){
                        userClass3Pre = class1Pre;
                        userClass3Num = class1Num;
                        userClass3Name = class1Name;
                        userClass3Credit = class1Credit;
                    }
                    else if(class3Sel == 2){
                        userClass3Pre = class2Pre;
                        userClass3Num = class2Num;
                        userClass3Name = class2Name;
                        userClass3Credit = class2Credit;

                    }
                    else if(class3Sel == 3){
                        userClass3Pre = class3Pre;
                        userClass3Num = class3Num;
                        userClass3Name = class3Name;
                        userClass3Credit = class3Credit;
                    }
                    else{
                        cout << "You have entered an invalid option, please try again" << endl;
                    }
                    totalHours = userClass1Credit + userClass2Credit + userClass3Credit;
                    break;
                }
                while(class2Sel < 1 || class2Sel > 3 || class2Sel == class1Sel || class3Sel == class2Sel);
                break;

                default:
                cout << "You have entered an invalid option, please try again." << endl;
                break;
            }
            break;

            case 2:
            scholarshipSel = true;
            while(scholarshipSel == true){
                cout << "Please select the type of scholarship you are receiving: " << endl;
                cout << "1. Academic" << endl;
                cout << "2. Foundation" << endl;
                cin.clear();
                cin.ignore(100, '\n');
                cin >> scholarshipType;
                if (scholarshipType == 1){
                    scholarship = "Academic";
                    cout << "Please enter your scholarship amount: $";
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> scholarshipAmnt;
                    scholarshipSel = false;
                    break;
                }
                else if(scholarshipType == 2){
                    scholarship = "Foundation";
                    cout << "Please enter your scholarship amount: ";
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> scholarshipAmnt;
                    scholarshipSel = false;
                    break;
                }
                else{
                    cout << "You have entered an invalid option" << endl;
                    cout << "Please enter 1 or 2 to select your option" << endl;
                }
            }
            break;

            //SCHEDULE CASE
            case 3:
                scheduleOption = 0;
                while(scheduleOption < 1 || scheduleOption > 2){
                    cout << "Please select an option" << endl;
                    cout << "1. View Schedule" << endl;
                    cout << "2. Print Schedule" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin>>scheduleOption;
                    switch(scheduleOption){
                        case 1:
                        {
                            cout << "\t**********COURSE SCHEDULE**********" << endl<<endl;
                            cout << right << "Prefix" << setw(8) << "No. " << setw(16) << "Title " << setw(20) << "Credit Hours" << endl;
                            cout << "**************************************************" << endl;
                            if (numOfClasses == 1){
                                cout << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                break;
                            }
                            else if (numOfClasses == 2){
                                cout << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                cout << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                                break;
                            }
                            else{
                                cout << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                cout << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                                cout << left << setw(10) << userClass3Pre << setw(9) << userClass3Num << setw(26) << userClass3Name << setw(12) << userClass3Credit << endl;
                                break;
                            }
                        }

                        case 2:
                        {
                            outfile.open("Schedule.txt");
                            outfile << "\t**********COURSE SCHEDULE**********" << endl<<endl;
                            outfile << right << "Prefix" << setw(8) << "No. " << setw(16) << "Title " << setw(20) << "Credit Hours" << endl;
                            outfile << "**************************************************" << endl;
                            if (numOfClasses == 1){
                                outfile << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                break;
                            }
                            else if (numOfClasses == 2){
                                outfile << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                outfile << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                                break;
                            }
                            else{
                                outfile << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                outfile << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                                outfile << left << setw(10) << userClass3Pre << setw(9) << userClass3Num << setw(26) << userClass3Name << setw(12) << userClass3Credit << endl;
                                break;
                            }
                            outfile.close();
                            break;
                        }
                    } 
                }
            break;

            case 4:
                totalTuition = totalHours*tuitionPerHour;
                totalDue = (totalTuition + fees) - scholarshipAmnt;
                billOption = 0;
                while (billOption < 1 || billOption > 2){
                    cout << "Please select an option" << endl;
                    cout << "1. View Bill" << endl;
                    cout << "2. Print Bill" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin >> billOption;
                    switch(billOption){
                        case 1:
                        cout << "\n\n**********Billing Information**********"<< endl;
                        cout << left << setw(12) << "Tuition" << right << setw(20) << "$" << setprecision(2) << fixed << totalTuition << endl;
                        cout << left << setw(12) << "Fees" << right << setw(20) << "$" << setprecision(2) << fixed << fees << endl;
                        cout << left << setw(12) << "Scholarship" << right << setw(20) << "$" << setprecision(2) << fixed << scholarshipAmnt << endl << endl;
                        cout << left << setw(12) << "Total Due:" << right << setw(20) << "$" << setprecision(2) << fixed << totalDue << endl << endl;
                        break;
                    
                        case 2:
                        outfile.open("Bill.txt");
                        outfile << "\n\n**********Billing Information**********"<< endl;
                        outfile << left << setw(12) << "Tuition" << right << setw(20) << "$" << setprecision(2) << fixed << totalTuition << endl;
                        outfile << left << setw(12) << "Fees" << right << setw(20) << "$" << setprecision(2) << fixed << fees << endl;
                        outfile << left << setw(12) << "Scholarship" << right << setw(20) << "$" << setprecision(2) << fixed << scholarshipAmnt << endl << endl;
                        outfile << left << setw(12) << "Total Due:" << right << setw(20) << "$" << setprecision(2) << fixed << totalDue << endl << endl;
                        outfile.close();
                        break;
                    }
                }
            break;

            case 5:
            totalTuition = totalHours*tuitionPerHour;
            totalDue = (totalTuition + fees) - scholarshipAmnt;
            detailOption = 0;
                while(detailOption < 1 || detailOption > 2){
                    cout << "Please select an option" << endl;
                    cout << "1. View Details" << endl;
                    cout << "2. Print Details" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                    cin>>detailOption;
                    switch(detailOption){
                        case 1:
                        {
                            cout << "\t**********COURSE SCHEDULE**********" << endl<<endl;
                            cout << right << "Prefix" << setw(8) << "No. " << setw(16) << "Title " << setw(20) << "Credit Hours" << endl;
                            cout << "**************************************************" << endl;
                            if (numOfClasses == 1){
                                cout << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                            }
                            else if (numOfClasses == 2){
                                cout << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                cout << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                            }
                            else{
                                cout << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                cout << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                                cout << left << setw(10) << userClass3Pre << setw(9) << userClass3Num << setw(26) << userClass3Name << setw(12) << userClass3Credit << endl;
                            }
                            cout << "\n\n**********Billing Information**********"<< endl;
                            cout << left << setw(12) << "Tuition" << right << setw(20) << "$" << setprecision(2) << fixed << totalTuition << endl;
                            cout << left << setw(12) << "Fees" << right << setw(20) << "$" << setprecision(2) << fixed << fees << endl;
                            cout << left << setw(12) << "Scholarship" << right << setw(20) << "$" << setprecision(2) << fixed << scholarshipAmnt << endl << endl;
                            cout << left << setw(12) << "Total Due:" << right << setw(20) << "$" << setprecision(2) << fixed << totalDue << endl << endl;
                            break;
                        }
                        case 2:
                            outfile.open("Details.txt");
                            outfile << "\t**********COURSE SCHEDULE**********" << endl<<endl;
                            outfile << right << "Prefix" << setw(8) << "No. " << setw(16) << "Title " << setw(20) << "Credit Hours" << endl;
                            outfile << "**************************************************" << endl;
                            if (numOfClasses == 1){
                                outfile << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                            }
                            else if (numOfClasses == 2){
                                outfile << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                outfile << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                            }
                            else{
                                outfile << left << setw(10) << userClass1Pre << setw(9) << userClass1Num << setw(26) << userClass1Name << setw(12) << userClass1Credit << endl;
                                outfile << left << setw(10) << userClass2Pre << setw(9) << userClass2Num << setw(26) << userClass2Name << setw(12) << userClass2Credit << endl;
                                outfile << left << setw(10) << userClass3Pre << setw(9) << userClass3Num << setw(26) << userClass3Name << setw(12) << userClass3Credit << endl;
                            }
                            outfile << "\n\n**********Billing Information**********"<< endl;
                            outfile << left << setw(12) << "Tuition" << right << setw(20) << "$" << setprecision(2) << fixed << totalTuition << endl;
                            outfile << left << setw(12) << "Fees" << right << setw(20) << "$" << setprecision(2) << fixed << fees << endl;
                            outfile << left << setw(12) << "Scholarship" << right << setw(20) << "$" << setprecision(2) << fixed << scholarshipAmnt << endl << endl;
                            outfile << left << setw(12) << "Total Due:" << right << setw(20) << "$" << setprecision(2) << fixed << totalDue << endl << endl;
                            outfile.close();
                            break;
                    }
                }
            break;

            case 6:
                cout << "EXITING..."<< endl;
                exit(1);
            break;
        }    
    }
    return 0;
}