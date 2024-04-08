/*
Ethan Elders
00099962
eelders@my.athens.edu
April 7, 2024
Assignment 5 Problem 2
Menus, Decisions, and Validation
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//GLOBAL VARIABLES//
string competitor1, competitor2, competitor3;

int competitor1Stones1, competitor2Stones1, competitor3Stones1;
int competitor1Stones2, competitor2Stones2, competitor3Stones2;

int competitor1Points, competitor2Points, competitor3Points = 0;

int competitor1FinalScore, competitor2FinalScore, competitor3FinalScore;
int competitor1FinalStones, competitor2FinalStones, competitor3FinalStones;
float comp1Seconds1, comp2Seconds1, comp3Seconds1, comp1Seconds2, comp2Seconds2, comp3Seconds2;
float comp1FinalSeconds, comp2FinalSeconds, comp3FinalSeconds;
int comp1Pounds1, comp2Pounds1, comp3Pounds1, comp1Pounds2, comp2Pounds2, comp3Pounds2;
int comp1Place1, comp2Place1, comp3Place1;
int comp1Points1, comp2Points1, comp3Points1;
int comp1Place2, comp2Place2, comp3Place2;
int comp1Points2, comp2Points2, comp3Points2;
int comp1Place3, comp2Place3, comp3Place3;
int comp1Points3, comp2Points3, comp3Points3;
string firstPlace, secondPlace, thirdPlace;
int totalPoints1Comp1, totalPoints2Comp1, totalPoints3Comp1;
int totalPoints1Comp2, totalPoints2Comp2, totalPoints3Comp2;
int totalPoints1Comp3, totalPoints2Comp3, totalPoints3Comp3;
int comp1PlaceFinal, comp2PlaceFinal, comp3PlaceFinal;

int comp1FinalPounds, comp2FinalPounds, comp3FinalPounds;


int menuDisplay();
void inputCompetitors(); //USE GLOBAL VARIABLES
bool inputVal(float);
void farmersFrameMedley(); //??
void axleDeadlift(); // ??
void stoneOver(); //??
void endProgram();
void calcPoints();

int main(){
    int menuOption;
    
    inputCompetitors();
    while (menuOption != 4){
        menuOption = menuDisplay();
        switch (menuOption){
            //Stone Over
            case 1:
            stoneOver();
            break;
            //Farmers Frame Medley
            case 2:
            farmersFrameMedley();
            break;
            //Axle Deadlift
            case 3:
            axleDeadlift();
            break;
            //END\SHOW RESULTS
            case 4:
            endProgram();
            break;
        }
    }

    return 0;
}




int menuDisplay(){
    int menuInput;

    cout << "Please select which event you would like to enter data for (1-3): " << endl;
    cout << "1. Stone Over" << endl;
    cout << "2. Farmers Frame Medley" << endl;
    cout << "3. Axle Deadlift" << endl;
    cout << "4. Final Results / EXIT" << endl;

    cin >> menuInput;

    //BUG - NEEDS FIX FOR INFINITE LOOP IF A CHAR OR STRING IS ENTERED
    while (menuInput < 1 || menuInput > 4){
        cout << "You have entered an invalid menu option." << endl;
        cout << "Please try again." << endl;
        cin >> menuInput;
    }

    return menuInput;
}



void inputCompetitors(){

    cout << "Enter first competitor: ";
    getline(cin, competitor1);
    cout << "\nEnter second competitor: ";
    getline(cin, competitor2);
    cout << "\nEnter third competitor: ";
    getline(cin, competitor3);

}


bool inputVal(float num){
    bool continueVar;
    if (num < 0){
        continueVar = false;
    }
    else{
        continueVar = true;
    }

    return continueVar;
}



void farmersFrameMedley(){
    cout << "Enter the number of seconds " << competitor1 << " took to complete attempt 1: " << endl;
    cin >> comp1Seconds1;
    while (inputVal(comp1Seconds1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp1Seconds1;
    }

    cout << "Enter the number of seconds " << competitor2 << " took to complete attempt 1: " << endl;
    cin >> comp2Seconds1;
    while (inputVal(comp2Seconds1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp2Seconds1;
    }

    cout << "Enter the number of seconds " << competitor3 << " took to complete attempt 1: " << endl;
    cin >> comp3Seconds1;
    while (inputVal(comp3Seconds1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp3Seconds1;
    }





    cout << "Enter the number of seconds " << competitor1 << " took to complete attempt 2: " << endl;
    cin >> comp1Seconds2;
    while (inputVal(comp1Seconds2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp1Seconds2;
    }

    cout << "Enter the number of seconds " << competitor2 << " took to complete attempt 2: " << endl;
    cin >> comp2Seconds2;
    while (inputVal(comp2Seconds2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp2Seconds2;
    }

    cout << "Enter the number of seconds " << competitor3 << " took to complete attempt 2: " << endl;
    cin >> comp3Seconds2;
    while (inputVal(comp3Seconds2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp3Seconds2;
    }

    if (comp1Seconds1 <= comp1Seconds2){
        comp1FinalSeconds = comp1Seconds1;
    }
    else{
        comp1FinalSeconds = comp1Seconds2;
    }

    if (comp2Seconds1 <= comp2Seconds2){
        comp2FinalSeconds = comp2Seconds1;
    }
    else{
        comp2FinalSeconds = comp2Seconds2;
    }

    if (comp3Seconds1 <= comp3Seconds2){
        comp3FinalSeconds = comp3Seconds1;
    }
    else{
        comp3FinalSeconds = comp3Seconds2;
    }
    

}



void axleDeadlift(){
    cout << "Number of pounds " << competitor1 << " lifted in attempt 1: " << endl;
    cin >> comp1Pounds1;
    while (inputVal(comp1Pounds1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp1Pounds1;
    }

    cout << "Number of pounds " << competitor1 << " lifted in attempt 1: " << endl;
    cin >> comp2Pounds1;
    while (inputVal(comp2Pounds1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp2Pounds1;
    }

    cout << "Number of pounds " << competitor1 << " lifted in attempt 1: " << endl;
    cin >> comp3Pounds1;
    while (inputVal(comp3Pounds1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp3Pounds1;
    }




    cout << "Number of pounds " << competitor1 << " lifted in attempt 2: " << endl;
    cin >> comp1Pounds2;
    while (inputVal(comp1Pounds2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp1Pounds2;
    }

    cout << "Number of pounds " << competitor1 << " lifted in attempt 2: " << endl;
    cin >> comp2Pounds2;
    while (inputVal(comp2Pounds2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp2Pounds2;
    }

    cout << "Number of pounds " << competitor1 << " lifted in attempt 2: " << endl;
    cin >> comp3Pounds2;
    while (inputVal(comp3Pounds2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> comp3Pounds2;
    }


    if (comp1Pounds1 >= comp1Pounds2){
            comp1FinalPounds = comp1Pounds1;
        }
        else{
            comp1FinalPounds = comp1Pounds2;
        }

        if (comp2Pounds1 >= comp2Pounds2){
            comp2FinalPounds = comp2Pounds1;
        }
        else{
            comp2FinalPounds = comp2Pounds2;
        }

        if (comp3Pounds1 >= comp3Pounds2){
            comp3FinalPounds = comp3Pounds1;
        }
        else{
            comp3FinalPounds = comp3Pounds2;
        }

}



void stoneOver(){
    cout << "Enter the number of stones " << competitor1 << " was able to lift for attempt 1: " << endl;
    cin >> competitor1Stones1;
    while (inputVal(competitor1Stones1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> competitor1Stones1;
    }

    cout << "Enter the number of stones " << competitor2 << " was able to lift for attempt 1: " << endl;
    cin >> competitor2Stones1;
    while (inputVal(competitor2Stones1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> competitor2Stones1;
    }

    cout << "Enter the number of stones " << competitor3 << " was able to lift for attempt 1: " << endl;
    cin >> competitor3Stones1;
    while (inputVal(competitor3Stones1) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> competitor3Stones1;
    }




    cout << "Enter the number of stones " << competitor1 << " was able to lift for attempt 2: " << endl;
    cin >> competitor1Stones2;
    while (inputVal(competitor1Stones2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> competitor1Stones2;
    }

    cout << "Enter the number of stones " << competitor2 << " was able to lift for attempt 2: " << endl;
    cin >> competitor2Stones2;
    while (inputVal(competitor2Stones2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> competitor2Stones2;
    }

    cout << "Enter the number of stones " << competitor3 << " was able to lift for attempt 2: " << endl;
    cin >> competitor3Stones2;
    while (inputVal(competitor3Stones2) == false){
        cout << "You have entered an invalid number. Please try again." << endl;
        cin >> competitor3Stones2;
    }


    if (competitor1Stones1 >= competitor1Stones2){
            competitor1FinalStones = competitor1Stones1;
        }
        else{
            competitor1FinalStones = competitor1Stones2;
        }

        if (competitor2Stones1 >= competitor2Stones2){
            competitor2FinalStones = competitor2Stones1;
        }
        else{
            competitor2FinalStones = competitor2Stones2;
        }

        if (competitor3Stones1 >= competitor3Stones2){
            competitor3FinalStones = competitor3Stones1;
        }
        else{
            competitor3FinalStones = competitor3Stones2;
        }
    
}


void calcPoints(){


    //STONE OVER DECISIONS
    if (competitor1FinalStones > competitor2FinalStones && competitor1FinalStones > competitor3FinalStones){
        competitor1Points += 3;
        if (competitor2FinalStones > competitor3FinalStones){
            competitor2Points += 2;
            competitor3Points += 1;
        }
        else if (competitor2FinalStones == competitor3FinalStones){
            competitor2Points += 2;
            competitor3Points += 2;
        }
        else if (competitor3FinalStones > competitor2FinalStones){
            competitor3Points += 2;
            competitor2Points += 1;
        }
    }
    else if (competitor2FinalStones > competitor1FinalStones && competitor2FinalStones > competitor3FinalStones){
        competitor2Points += 3;
        if (competitor1FinalStones > competitor3FinalStones){
            competitor1Points += 2;
            competitor3Points += 1;
        }
        else if (competitor1FinalStones == competitor3FinalStones){
            competitor1Points += 2;
            competitor3Points += 2;
        }
        else if (competitor3FinalStones > competitor1FinalStones){
            competitor3Points += 2;
            competitor1Points += 1;
        }
    }
    else if (competitor3FinalStones > competitor1FinalStones && competitor3FinalStones > competitor2FinalStones){
        competitor3Points += 3;
        if (competitor2FinalStones > competitor1FinalStones){
            competitor2Points += 2;
            competitor1Points += 1;
        }
        else if (competitor2FinalStones == competitor1FinalStones){
            competitor2Points += 2;
            competitor1Points += 2;
        }
        else if (competitor1FinalStones > competitor2FinalStones){
            competitor1Points += 2;
            competitor2Points += 1;
        }
    }



    //FARMERS MEDLEY DECISIONS

    if (comp1FinalSeconds > comp2FinalSeconds && comp1FinalSeconds > comp3FinalSeconds){
        competitor1Points += 3;
        if (comp2FinalSeconds > comp3FinalSeconds){
            competitor2Points += 2;
            competitor3Points += 1;
        }
        else if (comp2FinalSeconds == comp3FinalSeconds){
            competitor2Points += 2;
            competitor3Points += 2;
        }
        else if (comp3FinalSeconds > comp2FinalSeconds){
            competitor3Points += 2;
            competitor2Points += 1;
        }
    }
    else if (comp2FinalSeconds > comp1FinalSeconds && comp2FinalSeconds > comp3FinalSeconds){
        competitor2Points += 3;
        if (comp1FinalSeconds > comp3FinalSeconds){
            competitor1Points += 2;
            competitor3Points += 1;
        }
        else if (comp1FinalSeconds == comp3FinalSeconds){
            competitor1Points += 2;
            competitor3Points += 2;
        }
        else if (comp3FinalSeconds > comp1FinalSeconds){
            competitor3Points += 2;
            competitor1Points += 1;
        }
    }
    else if (comp3FinalSeconds > comp1FinalSeconds && comp3FinalSeconds > comp2FinalSeconds){
        competitor3Points += 3;
        if (comp2FinalSeconds > comp1FinalSeconds){
            competitor2Points += 2;
            competitor1Points += 1;
        }
        else if (comp2FinalSeconds == comp1FinalSeconds){
            competitor2Points += 2;
            competitor1Points += 2;
        }
        else if (comp1FinalSeconds > comp2FinalSeconds){
            competitor1Points += 2;
            competitor2Points += 1;
        }
    }


    //AXLE DEADLIFT DECISIONS

    if (comp1FinalPounds > comp2FinalPounds && comp1FinalPounds > comp3FinalPounds){
        competitor1Points += 3;
        if (comp2FinalPounds > comp3FinalSeconds){
            competitor2Points += 2;
            competitor3Points += 1;
        }
        else if (comp2FinalSeconds == comp3FinalSeconds){
            competitor2Points += 2;
            competitor3Points += 2;
        }
        else if (comp3FinalSeconds > comp2FinalSeconds){
            competitor3Points += 2;
            competitor2Points += 1;
        }
    }
    else if (comp2FinalSeconds > comp1FinalSeconds && comp2FinalSeconds > comp3FinalSeconds){
        competitor2Points += 3;
        if (comp1FinalSeconds > comp3FinalSeconds){
            competitor1Points += 2;
            competitor3Points += 1;
        }
        else if (comp1FinalSeconds == comp3FinalSeconds){
            competitor1Points += 2;
            competitor3Points += 2;
        }
        else if (comp3FinalSeconds > comp1FinalSeconds){
            competitor3Points += 2;
            competitor1Points += 1;
        }
    }
    else if (comp3FinalSeconds > comp1FinalSeconds && comp3FinalSeconds > comp2FinalSeconds){
        competitor3Points += 3;
        if (comp2FinalSeconds > comp1FinalSeconds){
            competitor2Points += 2;
            competitor1Points += 1;
        }
        else if (comp2FinalSeconds == comp1FinalSeconds){
            competitor2Points += 2;
            competitor1Points += 2;
        }
        else if (comp1FinalSeconds > comp2FinalSeconds){
            competitor1Points += 2;
            competitor2Points += 1;
        }
    }


}




void endProgram(){
    calcPoints();
    
    if (competitor1Points > competitor2Points && competitor1Points > competitor3Points){
        firstPlace = competitor1;
        if (competitor2Points > competitor3Points){
            secondPlace = competitor2;
            thirdPlace = competitor3;
        }
        else if (competitor2Points == competitor3Points){
            secondPlace = competitor2 + ", " + competitor3 + " *TIE*";
        }
        else if (competitor3Points > competitor2Points){
            secondPlace = competitor3;
            thirdPlace = competitor2;
        }
    }
    else if (competitor2Points > competitor1Points && competitor2Points > competitor3Points){
        firstPlace = competitor2;
        if (competitor1Points > competitor3Points){
            secondPlace = competitor1;
            thirdPlace = competitor3;
        }
        else if (competitor1Points == competitor3Points){
            secondPlace = competitor1 + ", " + competitor3 + " *TIE*";
        }
        else if (competitor3Points > competitor1Points){
            secondPlace = competitor3;
            thirdPlace = competitor1;
        }
    }
    else if (competitor3Points > competitor1Points && competitor1Points > competitor2Points){
        firstPlace = competitor3;
        if (competitor1Points > competitor2Points){
            secondPlace = competitor1;
            thirdPlace = competitor2;
        }
        else if (competitor1Points == competitor2Points){
            secondPlace = competitor1 + ", " + competitor2 + " *TIE*";
        }
        else if (competitor2Points > competitor1Points){
            secondPlace = competitor2;
            thirdPlace = competitor1;
        }
    }
    else if (competitor1Points == competitor2Points && competitor1Points > competitor3Points){
        firstPlace = competitor1 + ", " + competitor2 + " *TIE*";
        secondPlace = competitor3;
    }
    else if (competitor1Points == competitor3Points && competitor1Points > competitor2Points){
        firstPlace = competitor1 + ", " + competitor3 + " *TIE*";
        secondPlace = competitor2;
    }
    else if (competitor2Points == competitor3Points && competitor2Points > competitor1Points){
        firstPlace = competitor2 + ", " + competitor3 + " *TIE*";
        secondPlace = competitor1;
    }
    else if (competitor2Points == competitor3Points && competitor2Points == competitor1Points){
        firstPlace = competitor1 + ", " + competitor2 + ", " + competitor3 + ", * 3-WAY TIE *";
    }

    cout << "\n\n\n\n\n\n";
    cout << "PLACES" << endl;
    cout << "1st: " << firstPlace << endl;
    cout << "2nd: " << secondPlace << endl;
    cout << "3rd: " << thirdPlace << endl;
    cout << "****************************************************************************************" << endl;


    //*****************************DISPLAY*********************************
    cout << "*********************** Stone Over Bar ***********************" << endl;
    cout << setw(15) << "Competitors" << setw(18) << "Stones Lifted" << endl;
    cout << setw(13) << competitor1 << setw(14) << competitor1FinalStones << endl;
    cout << setw(13) << competitor2 << setw(14) << competitor2FinalStones << endl;
    cout << setw(13) << competitor3 << setw(14) << competitor3FinalStones << endl;

    //*****************************DISPLAY*********************************
    cout << "*********************** Farmers Frame Medley ***********************" << endl;
    cout << setw(15) << "Competitors" << setw(18) << "Seconds" << endl;
    cout << setw(13) << competitor1 << setw(19) << setprecision(2) << fixed << comp1FinalSeconds << endl;
    cout << setw(13) << competitor2 << setw(19) << setprecision(2) << fixed << comp2FinalSeconds << endl;
    cout << setw(13) << competitor3 << setw(19) << setprecision(2) << fixed << comp3FinalSeconds << endl;

    //*****************************DISPLAY*********************************
    cout << "*********************** Axle Deadlift ***********************" << endl;
    cout << setw(15) << "Competitors" << setw(18) << "Pounds" << endl;
    cout << setw(13) << competitor1 << setw(19) << comp1FinalPounds << endl;
    cout << setw(13) << competitor2 << setw(19) << comp2FinalPounds << endl;
    cout << setw(13) << competitor3 << setw(19) << comp3FinalPounds << endl;

    cout << "*********************** FINAL POINTS ***********************" << endl;
    cout << competitor1 << setw(8) << competitor1Points << endl;
    cout << competitor2 << setw(8) << competitor2Points << endl;
    cout << competitor3 << setw(8) << competitor3Points << endl;
    
    cout << "********************************************" << endl;
    cout << "PLACES" << endl;
    cout << "1st: " << firstPlace << endl;
    cout << "2nd: " << secondPlace << endl;
    cout << "3rd: " << thirdPlace << endl;
}

