/*
Ethan Elders
00099962
eelders@my.athens.edu
Lab - Week 6 - 
February 13, 2024
*/

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip> //IO Manipulation
using namespace std;

//MAIN FUNCTION
int main(){
    //Variable Declarations
    string WL = "Def"; //Win, lose or push message.
    string Name;

    //integer cards for both the dealer and the player, 5 card maximum.
    int dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5;
    int card1, card2, card3, card4, card5;
    char dealerValue1, dealerValue2, dealerValue3, dealerValue4, dealerValue5;
    char cardValue1, cardValue2, cardValue3, cardValue4, cardValue5;

    //init the card values
    dealerCard1=dealerCard2=dealerCard3=dealerCard4=dealerCard5=card1=card2=card3=card4=card5=0;

    //init face cards
    dealerValue1=dealerValue2=dealerValue3=dealerValue4=dealerValue5='-';
    cardValue1=cardValue2=cardValue3=cardValue4=cardValue5='-';

    char stayHit; //variable for hit or stay
    int totalHand=0;
    int dealerHand=0;

    double startAmount=0.00;
    double betPlaced=0.00;
    double totalMoney=0.00;
    double afterBet = 0.00; //the result of my current funds minus the bet im placing

    bool push=false;    //assume the result of the round will not be a push
    bool aceFlag=false;

    //Track the number of "hands" the user plays (game counter)
    int gameCounter=1;


    //variables for menu and new game play
    int menuOption; //stores menuy option that the user chooses
    int numberGuessed;
    int numberGenerated;
    bool correct = true;

    do{

    cout << "Welcome to Elders Game Day" << endl;
    cout << "Please choose one of the options from the menu below (1-3)."<<endl;
    cout << "1. Play Blackjack" << endl;
    cout << "2. Number Guessing" << endl;
    cout << "3. Walk Away" << endl;
    cin >> menuOption;
    cin.ignore();

    while(menuOption<1||menuOption>3)
    {
        cout<<endl;
        cout<<"You have entered an invlaid menu option."<<endl;
        cout<<"Please enter a menu option 1-3"<<endl;
        cin>>menuOption;
    }


    switch(menuOption){
        case 1: 
            

            

            //**************************************************************************************************************************************************************


            /*
            Start the game, questions to ask:
            1. How much money do you want to exchange to chips
            2. How much do you want to bet?
            3. Do you want to hit or stay?
            4. Do you want to play another hand or cash out?
            */

            cout << "Welcome to Elders' Blackjack Party"<<endl<<endl;
            cout<<"Please introduce yourself."<<endl<<endl;
             getline(cin, Name);
            cout << "How much money would you like to exchange for chips?\n"<<endl<<endl;
             cin >> startAmount;
/*
        if(startAmount<10){
                cout << "You don't have enough to play." << endl;
                cout << "Please go to an ATM and come back." << endl;
                return 0;
        }
        */
       while(startAmount<10)
       {
        cout << "You don't have enough to play. Please make sure to have at least $10.00" << endl;
        cout << "Please enter the amount you would like to exchange for chips: " << endl;
        cin>>startAmount;
       }
        
        totalMoney = startAmount;
        cout<< "You currently have $ "<< setprecision(2)<<fixed<<showpoint<<totalMoney <<" to bet"<<endl<<endl;
        cout << "How much would you like to bet? (Minimum is $10.00, Max is $500.00)"<<endl<<endl;
        cin >> betPlaced;
        /*
        if(betPlaced<10 || betPlaced>500){
                cout << "You have made an invalid bet." << endl;
                return 0;
        }
        */
       while(betPlaced<10 || betPlaced>500)
       {
        cout<<"You have entered an invalid bet. PLease re-enter your bet."<<endl;
        cin>>betPlaced;
       }


        afterBet = totalMoney - betPlaced; //Make sure bet is covered by funds
            if(afterBet<=0){
                cout << "You don't have enough to cover your bet" << endl;
                //Give the user the option to change bet OR change startAmount
                char choice;
                cout << "Would you like to change your bet (B or b) or exchange more for chips (C or c)?" << endl;
                cin >> choice;
                switch(choice)
                {
                    case 'b':
                    cout<<"Please enter your new bet."<<endl;
                    cin>>betPlaced;
                    case 'B':
                    cout<<"Please enter your new bet."<<endl;
                    cin>>betPlaced;
                    while(betPlaced<10 || betPlaced>500)
                    {
                        cout<<"You have netered an invalid bet. Please re-enter your bet."<<endl;
                        cin>>betPlaced;
                    }
                    afterBet=totalMoney-betPlaced;
                    while(afterBet<0)
                    {
                        cout << "You don't have enough to cover your bet, please enter a lower bet"<<endl;
                        cin>>betPlaced;
                        afterBet = totalMoney-betPlaced;
                    }
                    break;
                    case 'c':
                    case 'C':
                    //code needed here
                    break;
                    default:
                    cout<<"You haven't chosen to increase your funds or decrease your bet."<<endl;
                    cout<<"You must leave the table."<<endl;
                    return 0;

                }
            }

            srand(time(0)); //set seed for random card assignments

            card1=rand() % 13 + 1;
            cout << "TEST CARD 1 " << card1 << endl;
            /*if(card1 == 1){
                cardValue1='A';
                card1=11;
            }
            else if(card1==2){
                cardValue1='2';
            }
            else if(card1==3){
                cardValue1='3';
            }
            else if(card1==4){
                cardValue1='4';
            }
            else if(card1==5){
                cardValue1='5';
            }
            else if(card1==6){
                cardValue1='6';
            }
            else if(card1==7){
                cardValue1='7';
            }
            else if(card1==8){
                cardValue1='8';
            }
            else if(card1==9){
                cardValue1='9';
            }
            else if(card1==10){
                cardValue1='T';
            }
            else if(card1==11){
                cardValue1='J';
                card1=10;
            }
            else if(card1==12){
                cardValue1='Q';
                card1=10;
            }
            else{
                cardValue1='K';
                card1=10;
            }*/

            switch(card1)
            {
                case 1:
                cardValue1='A';
                card1=11;
                break;

                case 2:
                cardValue1='2';
                break;
                
                case 3:
                cardValue1='3';
                break;

                case 4:
                cardValue1='4';
                break;

                case 5:
                cardValue1='5';
                break;

                case 6:
                cardValue1='6';
                break;

                case 7:
                cardValue1='7';
                break;

                case 8:
                cardValue1='8';
                break;

                case 9:
                cardValue1='9';
                break;

                case 10:
                cardValue1='T';
                break;

                case 11:
                cardValue1='J';
                card1 = 10;
                break;

                case 12:
                cardValue1='Q';
                card1=10;
                break;

                case 13:
                cardValue1='K';
                card1=10;
                break;
            }

            dealerCard1 = rand() % 13 + 1;

            if(dealerCard1 == 1){
                dealerValue1='A';
                dealerCard1=11;
            }
            else if(dealerCard1==2){
                dealerValue1='2';
                dealerCard1=2;
            }
            else if(dealerCard1==3){
                dealerValue1='3';
                dealerCard1=3;
            }
            else if(dealerCard1==4){
                dealerValue1='4';
                dealerCard1=4;
            }
            else if(dealerCard1==5){
                dealerValue1='5';
                dealerCard1=5;
            }
            else if(dealerCard1==6){
                dealerValue1='6';
                dealerCard1=6;
            }
            else if(dealerCard1==7){
                dealerValue1='7';
                dealerCard1=7;
            }
            else if(dealerCard1==8){
                dealerValue1='8';
                dealerCard1=8;
            }
            else if(dealerCard1==9){
                dealerValue1='9';
                dealerCard1=9;
            }
            else if(dealerCard1==10){
                dealerValue1='T';
                dealerCard1=10;
            }
            else if(dealerCard1==11){
                dealerValue1='J';
                dealerCard1=10;
            }
            else if(dealerCard1==12){
                dealerValue1='Q';
                dealerCard1=10;
            }
            else{
                dealerValue1='K';
                dealerCard1=10;
            }


            card2= rand() % 13 + 1;

            if(card2 == 1){
                cardValue2='A';
                if(card1==11){
                    card2=1;
                }
                else{
                    card2=11;
                }
            }
            else if(card2==2){
                cardValue2='2';
            }
            else if(card2==3){
                cardValue2='3';
            }
            else if(card2==4){
                cardValue2='4';
            }
            else if(card2==5){
                cardValue2='5';
            }
            else if(card2==6){
                cardValue2='6';
            }
            else if(card2==7){
                cardValue2='7';
            }
            else if(card2==8){
                cardValue2='8';
            }
            else if(card2==9){
                cardValue2='9';
            }
            else if(card2==10){
                cardValue2='T';
            }
            else if(card2==11){
                cardValue2='J';
                card2=10;
            }
            else if(card2==12){
                cardValue2='Q';
                card1=10;
            }
            else{
                cardValue2='K';
                card2=10;
            }

            dealerCard2 = rand() % 13 + 1;

            if(dealerCard2 == 1){
                dealerValue2='A';
                if(dealerCard1=='A'){
                    dealerCard2=1;
                }
                else{
                    dealerCard2=11;
                }
            }
            else if(dealerCard2==2){
                dealerValue2='2';
                dealerCard2=2;
            }
            else if(dealerCard2==3){
                dealerValue2='3';
                dealerCard2=3;
            }
            else if(dealerCard2==4){
                dealerValue2='4';
                dealerCard2=4;
            }
            else if(dealerCard2==5){
                dealerValue2='5';
                dealerCard2=5;
            }
            else if(dealerCard2==6){
                dealerValue2='6';
                dealerCard2=6;
            }
            else if(dealerCard2==7){
                dealerValue2='7';
                dealerCard2=7;
            }
            else if(dealerCard2==8){
                dealerValue2='8';
                dealerCard2=8;
            }
            else if(dealerCard2==9){
                dealerValue2='9';
                dealerCard2=9;
            }
            else if(dealerCard2==10){
                dealerValue2='T';
                dealerCard2=10;
            }
            else if(dealerCard2==11){
                dealerValue2='J';
                dealerCard2=10;
            }
            else if(dealerCard2==12){
                dealerValue2='Q';
                dealerCard2=10;
            }
            else{
                dealerValue2='K';
                dealerCard2=10;
            }

        cout<<"Your first card is: "<<cardValue1<<endl<<endl;
        cout<<"Dealers first card is: "<< dealerValue1 << endl<<endl;
        cout<<"Your second card is "<<cardValue2<<endl<<endl;
        cout<<"Dealer's second card is: -"<<endl<<endl;

        totalHand = card1 + card2;
        dealerHand = dealerCard1;

        cout<<"Your total hand value is "<<totalHand<<endl<<endl;
        cout<<"Dealer's total hand value is "<<dealerHand<<endl<<endl;
        cout<<"Do you want to hit or stay? (h or s)"<<endl<<endl;
        cin>>stayHit; //character for hit or stay
        while(stayHit!='h' && stayHit!='H' && stayHit!='s' && stayHit!='S'){
            cout<<"You have not entered a valid option please choose h, H for hit OR s, S for stay."<<endl;
            cin >> stayHit;
        }

            if(stayHit=='h' || stayHit=='H'){
                    card3 = rand() % 13 + 1;
                    if(card3 == 1){
                        cardValue3='A';
                        if(card1==11 || card2 ==11 || totalHand+11>21){
                            card3=1;
                        }
                        else{
                            card3=11;
                        }
                    }
                    else if(card3==2){
                        cardValue3='2';
                    }
                    else if(card3==3){
                        cardValue3='3';
                    }
                    else if(card3==4){
                        cardValue3='4';
                    }
                    else if(card3==5){
                        cardValue3='5';
                    }
                    else if(card3==6){
                        cardValue3='6';
                    }
                    else if(card3==7){
                        cardValue3='7';
                    }
                    else if(card3==8){
                        cardValue3='8';
                    }
                    else if(card3==9){
                        cardValue3='9';
                    }
                    else if(card3==10){
                        cardValue3='T';
                    }
                    else if(card3==11){
                        cardValue3='J';
                        card3=10;
                    }
                    else if(card3==12){
                        cardValue3='Q';
                        card3=10;
                    }
                    else{
                        cardValue3='K';
                        card3=10;
                    }


                        cout<<"Your third card is "<<cardValue3<<endl<<endl;
                        totalHand += card3;
                        cout<<"The total hand value you have is "<<totalHand<<endl<<endl;

                        if(totalHand>32){
                            if(card1==11)
                            {
                                card1=1;
                                aceFlag=true;
                            }
                            else if(card2==1)
                            {
                                card2=1;
                                aceFlag=true;
                            }
                            else if(card3==1)
                            {
                                card3=1;
                                aceFlag=true;
                            }

                            if(aceFlag)
                            {
                                totalHand=card1+card2+card3;
                                cout << "There was an ace at value 11, it was changed to 1."<<endl;
                                cout << "New hand total is: "<<totalHand<<endl;
                            }
                        }

                        if (totalHand < 21) {
                            cout << "Do you want to hit or stay? (h or s)" << endl << endl;
                            cin >> stayHit; //character for hit or stay
                            while(stayHit!='h' && stayHit!='H' && stayHit!='s' && stayHit!='S'){
                             cout<<"You have not entered a valid option please choose h, H for hit OR s, S for stay."<<endl;
                             cin >> stayHit;
                             }
                            if (stayHit == 'h' || stayHit == 'H') {
                                card4 = rand() % 13 + 1;
                                if (card4 == 1) {
                                    cardValue4 = 'A';
                                    if (totalHand > 10) {
                                        card4 = 1;
                                    }
                                    else {
                                        card4 = 11;
                                    }
                                }
                                else if (card4 == 2) {
                                    cardValue4 = '2';
                                }
                                else if (card4 == 3) {
                                    cardValue4 = '3';
                                }
                                else if (card4 == 4) {
                                    cardValue4 = '4';
                                }
                                else if (card4 == 5) {
                                    cardValue4 = '5';
                                }
                                else if (card4 == 6) {
                                    cardValue4 = '6';
                                }
                                else if (card4 == 7) {
                                    cardValue4 = '7';
                                }
                                else if (card4 == 8) {
                                    cardValue4 = '8';
                                }
                                else if (card4 == 9) {
                                    cardValue4 = '9';
                                }
                                else if (card4 == 10) {
                                    cardValue4 = 'T';
                                }
                                else if (card4 == 11) {
                                    cardValue4 = 'J';
                                    card4 = 10;
                                }
                                else if (card4 == 12) {
                                    cardValue4 = 'Q';
                                    card4 = 10;
                                }
                                else {
                                    cardValue4 = 'K';
                                    card4 = 10;
                                }

                                cout << "Your fourth card is " << cardValue4 << endl << endl;
                                totalHand += card4;

                                if(totalHand>32){
                                    if(card1==11)
                                    {
                                        card1=1;
                                        aceFlag=true;
                                    }
                                    else if(card2==1)
                                    {
                                        card2=1;
                                        aceFlag=true;
                                    }
                                    else if(card3==1)
                                    {
                                        card3=1;
                                        aceFlag=true;
                                    }
                                    else if(card4==1)
                                    {
                                        card4=1;
                                        aceFlag=true;
                                    }

                                    if(aceFlag)
                                    {
                                        totalHand=card1+card2+card3;
                                        cout << "There was an ace at value 11, it was changed to 1."<<endl;
                                        cout << "New hand total is: "<<totalHand<<endl;
                                    }


                                }
                                cout << "The total hand value you have is " << totalHand << endl << endl;
                                if(totalHand<21)
                                {
                                cout << "Do you want to hit or stay? (h or s)" << endl << endl;
                                cin >> stayHit;
                                while(stayHit!='h' && stayHit!='H' && stayHit!='s' && stayHit!='S'){
                                     cout<<"You have not entered a valid option please choose h, H for hit OR s, S for stay."<<endl;
                                     cin >> stayHit;
                                     }
                                if (stayHit == 'h' || stayHit == 'H') {
                                    card5 = rand() % 13 + 1;
                                    if (card5 == 1) {
                                        if (totalHand > 10) {
                                            card5 = 1;
                                        }
                                        else {
                                            card5 = 11;
                                        }
                                    }
                                    else if (card5 == 2) {
                                        cardValue5 = '2';
                                    }
                                    else if (card5 == 3) {
                                        cardValue5 = '3';
                                    }
                                    else if (card5 == 4) {
                                        cardValue5 = '4';
                                    }
                                    else if (card5 == 5) {
                                        cardValue5 = '5';
                                    }
                                    else if (card5 == 6) {
                                        cardValue5 = '6';
                                    }
                                    else if (card5 == 7) {
                                        cardValue5 = '7';
                                    }
                                    else if (card5 == 8) {
                                        cardValue5 = '8';
                                    }
                                    else if (card5 == 9) {
                                        cardValue5 = '9';
                                    }
                                    else if (card5 == 10) {
                                        cardValue5 = 'T';
                                        card5 = 10;
                                    }
                                    else if (card5 == 11) {
                                        cardValue4 = 'J';
                                        card5 = 10;
                                    }
                                    else if (card5 == 12) {
                                        cardValue5 = 'Q';
                                        card5 = 10;
                                    }
                                    else {
                                        cardValue5 = 'K';
                                        card5 = 10;
                                    }
                                    cout << "Your fifth card is " << cardValue5 << endl << endl;
                                    totalHand += card5;

                                    if(totalHand>32){
                                    if(card1==11)
                                    {
                                        card1=1;
                                        aceFlag=true;
                                    }
                                    else if(card2==1)
                                    {
                                        card2=1;
                                        aceFlag=true;
                                    }
                                    else if(card3==1)
                                    {
                                        card3=1;
                                        aceFlag=true;
                                    }
                                    else if(card4==1)
                                    {
                                        card4=1;
                                        aceFlag=true;
                                    }
                                    else if(card5==1)
                                    {
                                        card5=1;
                                        aceFlag=true;
                                    }

                                    if(aceFlag)
                                    {
                                        totalHand=card1+card2+card3;
                                        cout << "There was an ace at value 11, it was changed to 1."<<endl;
                                        cout << "New hand total is: "<<totalHand<<endl;
                                    }


                                }


                                }
                                else if (stayHit == 's' || stayHit == 'S') {
                                    cout << "The dealers second card is " << dealerCard2 << endl << endl;
                                    dealerHand = dealerCard1 + dealerCard2;
                                    cout << "The dealer's total hand value is " << dealerHand << endl << endl;
                                    if (dealerHand < 17) {
                                        dealerCard3 = rand() % 13 + 1;
                                            if (dealerCard3==1) {
                                                dealerCard3 = 1;
                                                dealerValue3 = 'A';
                                            }
                                            else {
                                                dealerCard3 = 11;
                                                dealerValue3 = 'A';
                                            }
                                    }
                                    else if (dealerCard3 == 2) {
                                            dealerValue3 = '2';
                                    }
                                    else if (dealerCard3 == 3) {
                                        dealerValue3 = '3';
                                    }
                                    else if (dealerCard3 == 4) {
                                        dealerValue3 = '4';
                                    }
                                    else if (dealerCard3 == 5) {
                                            dealerValue3 = '5';
                                    }
                                    else if (dealerCard3 == 6) {
                                        dealerValue3 = '6';
                                    }
                                    else if (dealerCard3 == 7) {
                                        dealerValue3 = '7';
                                    }
                                    else if (dealerCard3 == 8) {
                                            dealerValue3 = '8';
                                    }
                                    else if (dealerCard3 == 9) {
                                        dealerValue3 = '9';
                                    }
                                    else if (dealerCard3 == 10) {
                                        dealerValue3 = 'T';
                                        dealerCard3 = 10;
                                    }
                                    else if (dealerCard3 == 11) {
                                            dealerValue3 = 'J';
                                            dealerCard3 = 10;
                                    }
                                    else if (dealerCard3 == 12) {
                                            dealerValue3 = 'Q';
                                            dealerCard3 = 10;
                                    }
                                    else {
                                            dealerValue3 = 'K';
                                            dealerCard3 = 10;
                                    }
                                        cout << "The dealers third card is " << dealerValue3 << endl << endl;
                                        dealerHand += dealerCard3;
                                        cout << "The dealer's total hand value is " << dealerHand << endl << endl;
                                        if (dealerHand < 17) {
                                            dealerCard4 = rand() % 13 + 1;
                                            if (dealerCard3 == 1) {
                                                if (totalHand > 10) {
                                                    dealerCard4 = 1;
                                                    dealerValue4 = 'A';
                                                }
                                                else {
                                                    dealerCard4 = 11;
                                                    dealerValue4 = 'A';
                                                }
                                            }
                                            }
                                            else if (dealerCard4 == 2) {
                                                dealerValue4 = '2';
                                            }
                                            else if (dealerCard4 == 3) {
                                                dealerValue4 = '3';
                                            }
                                            else if (dealerCard4 == 4) {
                                                dealerValue4 = '4';
                                            }
                                            else if (dealerCard4 == 5) {
                                                dealerValue4 = '5';
                                            }
                                            else if (dealerCard4 == 6) {
                                                dealerValue4 = '6';
                                            }
                                            else if (dealerCard4 == 7) {
                                                dealerValue4 = '7';
                                            }
                                            else if (dealerCard4 == 8) {
                                                dealerValue4 = '8';
                                            }
                                            else if (dealerCard4 == 9) {
                                                dealerValue4 = '9';
                                            }
                                            else if (dealerCard4 == 10) {
                                                dealerValue4 = 'T';
                                                dealerCard4 = 10;
                                            }
                                            else if (dealerCard4 == 11) {
                                                dealerValue4 = 'J';
                                                dealerCard4 = 10;
                                            }
                                            else if (dealerCard4 == 12) {
                                                dealerValue4 = 'Q';
                                                dealerCard4 = 10;
                                            }
                                            else {
                                                dealerValue4 = 'K';
                                                dealerCard4 = 10;
                                            }
                                            cout << "The dealers fourth card is " << dealerValue4 << endl << endl;
                                            dealerHand += dealerCard4;
                                            cout << "The dealer's total hand value is " << dealerHand << endl << endl;

                                            if (dealerHand < 17) {
                                                dealerCard5 = rand() % 13 + 1;
                                                if (dealerHand < 17) {
                                                    if (totalHand > 10) {
                                                        dealerCard5 = 1;
                                                        dealerValue5 = 'A';
                                                    }
                                                    else {
                                                        dealerCard5 = 11;
                                                        dealerValue5 = 'A';
                                                    }
                                                }
                                                else if (dealerCard5 == 2) {
                                                    dealerValue5 = '2';
                                                }
                                                else if (dealerCard5 == 3) {
                                                    dealerValue5 = '3';
                                                }
                                                else if (dealerCard5 == 4) {
                                                    dealerValue5 = '4';
                                                }
                                                else if (dealerCard5 == 5) {
                                                    dealerValue5 = '5';
                                                }
                                                else if (dealerCard5 == 6) {
                                                    dealerValue5 = '6';
                                                }
                                                else if (dealerCard5 == 7) {
                                                    dealerValue5 = '7';
                                                }
                                                else if (dealerCard5 == 8) {
                                                    dealerValue5 = '8';
                                                }
                                                else if (dealerCard5 == 9) {
                                                    dealerValue5 = '9';
                                                }
                                                else if (dealerCard5 == 10) {
                                                    dealerValue5 = 'T';
                                                    dealerCard5 = 10;
                                                }
                                                else if (dealerCard5 == 11) {
                                                    dealerValue5 = 'J';
                                                    dealerCard5 = 10;
                                                }
                                                else if (dealerCard5 == 12) {
                                                    dealerValue5 = 'Q';
                                                    dealerCard5 = 10;
                                                }
                                                else {
                                                    dealerValue5 = 'K';
                                                    dealerCard5 = 10;
                                                }
                                                cout << "The dealers fifth card is " << dealerValue5 << endl << endl;
                                                dealerHand += dealerCard5;
                                                cout << "The dealer's total hand value is " << dealerHand << endl << endl;
                                            }

                                        }
                                    }
                                }
                            }
            }
                        
/*WILL FINISH THIS WEEK AND GET CODE UP TO DATE WITH CURRENT CLASS VERSION*/



            



        

            cout<<"You have WON, LOST, PUSHED"<<endl<<endl;
                totalMoney+=betPlaced; // if player wins
                totalMoney -= betPlaced; //if player loses
                //if push, no money is lost or won

        //cout<<"**********************************Game History**************************************"<<endl;
        // cout<<"Hand #    Card1   Card2   Card3   Card4   Card5   Total   DealerTotal    W/L/P    Bet     Bank"<<endl;
        // cout<<gameCounter<<" "<<cardValue1<<" "<<cardValue2<<" "<<cardValue3<<" "<<cardValue4<<" "<<cardValue4<<" "<<cardValue5<<" "
        //<<totalHand<<" "<<dealerHand<<" "<<WL<<" "<<betPlaced<<" "<<totalMoney<<endl;

        //cout<<"**********************************Game History**************************************"<<endl;
        //cout<<"Hand #\t\tCard1\t\tCard2\t\tCard3\t\tCard4\t\tCard5\t\tTotal\t\tDealerTotal\t\tW/L/P\t\tBet\t\tBank"<<endl;
        //cout<<gameCounter<<" "<<cardValue1<<" "<<cardValue2<<" "<<cardValue3<<" "<<cardValue4<<" "<<cardValue4<<" "<<cardValue5<<" "
        //<<totalHand<<" "<<dealerHand<<" "<<WL<<" "<<betPlaced<<" "<<totalMoney<<endl;

            cout<<"**********************************Game History**************************************"<<endl;
            cout<<"Hand #"<<setw(15)<<"Card1"<<setw(15)<<"Card2"<<setw(15)<<"Card3"<<setw(15)<<"Card4"<<setw(15)<<"Card5"<<setw(15)<<"Total"<<setw(21)<<"DealerTotal"<<setw(15)<<"W/L/P"<<setw(13)<<"Bet"<<setw(14)<<"Bank"<<endl<<endl;
            cout<<setw(3)<<right<<gameCounter<<setw(16)<<cardValue1<<setw(15)<<cardValue2<<setw(15)<<cardValue3<<setw(15)<<cardValue4<<setw(15)<<cardValue5<<setw(16)<<totalHand<<setw(17)<<dealerHand<<setw(19)<<WL<<setw(16)<<betPlaced<<setw(13)<<totalMoney<<endl;

            cout<<"Thank you for playing "<<Name<<endl<<endl;
            gameCounter++;
            break;
            //BLACKJACK ENDS*********************************************************************************************************************************
        case 2: //JUST HERE FOR MENU LAB WILL NOT CONTINUE TO BUILD OUT

        cout << "Welcome to Elder's Guessing Game" << endl;
        cout << "How much money would you like to exchange for chips?" << endl;
        cin >> startAmount;
        totalMoney=startAmount;
        cout << "You currently have $" << setprecision(2)<<fixed<<showpoint<<totalMoney<<" to bet."<<endl;
        cout<<"How much would you like to bet? Minimum bet is $10.00 and maximum is $500.00."<<endl;

        cin >> betPlaced;
        if (betPlaced<10||betPlaced>500) //CHANGE TO WHILE
        {
            cout << "ERROR: You have made an unacceptable bet. Please run the program again"<<endl;
            return 0;
        }
        //validate that the user has enough funds to cover bet placed == included in blackjack game
        numberGenerated=rand()%10+1;
        cout << "Please guess a number between 1 and 10, where 1 and 10 are inclusive."<<endl;
        cin>>numberGuessed;
        if(numberGuessed<1 || numberGuessed>10) //CHANGE TO WHILE
        {
            cout<<"ERROR: You have guessed a value out of the range. Please retry." << endl;
            return 0;
        }
        if(numberGuessed != numberGenerated)
        {
            correct=false;
            cout<<"You did not win!"<<endl;
            cout <<"The number was: "<<numberGenerated<<endl;
            totalMoney-=betPlaced;
            cout<<"You have "<<totalMoney<<"Left"<<endl;
        }
        else
        {
            cout<<"Congratulations: You Won!"<<endl;
            totalMoney+=betPlaced;
            cout<<"You have "<<totalMoney<<"left"<<endl;
        }
        break;
        
        case 3:
            cout<<"Thank you for joining us." << endl;
            cout << "Best of luck with your other games." << endl;
            cout << "GoodBye" << endl;
            break;

        
       /* default:
            cout<<"You have enetered an invalid menu option. Please start the program again and select correctly."<<endl;
            break;*/
    }
    
}
while(menuOption!=3);
cout << "Thank you for playing "<<Name<<endl;
system("pause");
return 0;
}

