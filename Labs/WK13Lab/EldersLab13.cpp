/*
Ethan Elders
00099962
eelders@my.athens.edu
Lab - Week 13 - 
April 5, 2024
*/

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;

//GLOBAL VARIABLES
string Name;
char stayHit;
double startAmount = 0.00;
double betPlaced = 0.00;
double totalMoney = 0.00;
bool firstGame = true;
int gameCounter = 0;
ofstream outputFile;
ifstream inFile;
int totalHand = 0;
int dealerHand = 0;


//Function Prototypes
void outputHeadingDisplay(); //Displays output file heading
void welcome(); // States welcome and get players name
void validateMinimumFunds(int);
int gameMenu();
void welcomeGuessing();
void screenHeadingDisplay();
void validateBetPlaced();
void blackjackGame(int, int); //need to send totalHand or dealerHand to be able to assign point
void welcomeBlackjack();
bool aceFlagCalc(int, int, int, int, int, int);
void gameResults(int, char, char, char, char, char, int, int, string, double, double);
string Results(int, int, double, string);

//functions called within the blackjack game.
int cardPointAssign(int); // return numerical value of a card
char cardValueAssign(int);
char hitStay(); //ask user if they want to hit or stay -- validation is included
void history(int);

void guessingGame(int);
void goodBye();

//MAIN PROGRAM
int main(){

    //variables
    int minimumStart = 10;
    int menuOption;



    outputFile.open("History.txt");

    outputHeadingDisplay();
    welcome();
    validateMinimumFunds(minimumStart);
    totalMoney = startAmount;
    srand(time(0));

    do{
        menuOption = gameMenu();
        switch(menuOption){
            case 1:
            firstGame = false;
            blackjackGame(totalHand, dealerHand);
            gameCounter++;
            break;

            case 2:
            history(gameCounter);
            break;

            case 3:
            firstGame = false;
            guessingGame(minimumStart);
            break;

            case 4:
            goodBye();
            break;

        }
    }
    while(menuOption!=4);







    cout << "Thank you for playing "<<Name<<endl;
    system("pause");


    return 0;
}

//Function Definitions
void outputHeadingDisplay(){
    outputFile<<"Hand#" << setw(15) << "Card1" << setw(15) << "Card2" << setw(15) << "Card3" << setw(15) << "Card4" << setw(15) << "Card5" << setw(15) << "Total" << setw(21) << "DealerTotal" << setw(13) << "W/L/P" << setw(13) << "Bet" << setw(14) << "Bank"<<endl;

} 

void welcome(){
    cout << "Please introduce yourself." << endl << endl;
    cin.ignore();
    getline(cin, Name);
}

void validateMinimumFunds(int minimum){
    cout << "How much money would you like to exchange for chips?" << endl << endl;
    cin >> startAmount;
    while (startAmount < minimum){
        cout << "You don't have enough to play. Please make sure to have at least " << minimum << endl << endl;
        cout << "Please enter the amount you would like to exchange for chips: ";
        cin >> startAmount;
    }
}

int gameMenu(){
    int choice;
    cout << "Welcome to Elders Game Day" << endl;
    cout << "Please choose one of the options from the menu below (1-3)."<<endl;
    cout << "1. Play Blackjack" << endl;
    cout << "2 Blackjack Game History"<<endl;
    cout << "3. Number Guessing" << endl;
    cout << "4. Walk Away" << endl;
    cin >> choice;

    while(choice<1||choice>4)
    {
        cout<<endl;
        cout<<"You have entered an invlaid menu option."<<endl;
        cout<<"Please enter a menu option 1-4"<<endl;
        cin>>choice;
    }
    return choice;
}

void welcomeGuessing(){
    cout << "Welcome to Elders' Guessing Game" << endl;
}

void screenHeadingDisplay(){
    cout<<"**********************************************GAME HISTORY********************************************"<<endl;    
    cout<<"Hand #"<<setw(15)<<"Card1"<<setw(15)<<"Card2"<<setw(15)<<"Card3"<<setw(15)<<"Card4"<<setw(15)<<"Card5"<<setw(15)<<"Total"<<setw(21)<<"DealerTotal"<<setw(15)<<"W/L/P"<<setw(13)<<"Bet"<<setw(14)<<"Bank"<<endl<<endl;
}

void validateBetPlaced(){
    double afterBet = 0.00;
    cout<< "You currently have $ "<< setprecision(2)<<fixed<<showpoint<<totalMoney <<" to bet"<<endl<<endl;
    cout << "How much would you like to bet? (Minimum is $10.00, Max is $500.00)"<<endl<<endl;
    cin >> betPlaced;
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
                exit(1);
            }
        }
}

void blackjackGame(int handPoints, int dealerPoints){
    int dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5;
    int card1, card2, card3, card4, card5;

    char dealerValue1, dealerValue2, dealerValue3, dealerValue4, dealerValue5;
    char cardValue1, cardValue2, cardValue3, cardValue4, cardValue5;

    //init the card values
    dealerCard1=dealerCard2=dealerCard3=dealerCard4=dealerCard5=card1=card2=card3=card4=card5=0;

    //init face cards
    dealerValue1=dealerValue2=dealerValue3=dealerValue4=dealerValue5='-';
    cardValue1=cardValue2=cardValue3=cardValue4=cardValue5='-';

    string WL = "DEF";

    welcomeBlackjack();
    validateBetPlaced();
    cout << "Current bet is: " << betPlaced << endl;

    card1 = cardPointAssign(handPoints);
    cardValue1 = cardValueAssign(card1);
    dealerCard1 = cardPointAssign(dealerPoints);
    dealerValue1 = cardValueAssign(dealerCard1);

    card2 = cardPointAssign(handPoints);
    cardValue2 = cardValueAssign(card2);
    dealerCard2 = cardPointAssign(dealerPoints);
    dealerValue2 = cardValueAssign(dealerCard2);

    cout<<"Your first card is: "<<cardValue1<<endl<<endl;
    cout<<"Dealers first card is: "<< dealerValue1 << endl<<endl;
    cout<<"Your second card is "<<cardValue2<<endl<<endl;
    cout<<"Dealer's second card is: -"<<endl<<endl;

    handPoints = card1 + card2;
    dealerPoints = dealerCard1;

    cout<<"Your total hand value is "<<handPoints<<endl<<endl;
    cout<<"Dealer's total hand value is "<<dealerPoints<<endl<<endl;

    stayHit = hitStay();
    if(stayHit == 'h' || stayHit == 'H'){
        card3 = cardPointAssign(handPoints);
        cardValue3 = cardValueAssign(card3);

        cout<<"Your third card is "<<cardValue3<<endl<<endl;
        totalHand += card3;
        cout<<"The total hand value you have is "<<handPoints<<endl<<endl;

        handPoints = aceFlagCalc(handPoints, card1, card2, card3, card4, card5);

        if (handPoints < 21){
            stayHit=hitStay();
            if (stayHit == 'h' || stayHit == 'H'){
                card4 = cardPointAssign(handPoints);
                cardValue4 = cardValueAssign(card4);

                cout<<"Your fourth card is "<<cardValue4<<endl<<endl;
                handPoints += card4;
                cout<<"The total hand value you have is "<<handPoints<<endl<<endl;
                handPoints = aceFlagCalc(handPoints, card1, card2, card3, card4, card5);

                if (handPoints < 21){
                    stayHit = hitStay();
                    if (stayHit == 'h' || stayHit == 'H'){
                        card5 = cardPointAssign(handPoints);
                        cardValue5 = cardValueAssign(card5);

                        cout<<"Your fifth card is "<<cardValue5<<endl<<endl;
                        handPoints += card5;
                        cout<<"The total hand value you have is "<<handPoints<<endl<<endl;
                        handPoints = aceFlagCalc(handPoints, card1, card2, card3, card4, card5);
                    }

                    else if(stayHit == 's' || stayHit == 'S'){
                        dealerPoints += dealerCard2;
                        cout << "The Dealers total hand value is " << dealerPoints << endl << endl;

                        if (dealerPoints < 17){
                            dealerCard3 = cardPointAssign(dealerPoints);
                            dealerValue3 = cardValueAssign(dealerCard3);

                            cout << "The dealers third card is " << dealerValue3 << endl << endl;
                            dealerPoints += dealerCard3;
                            cout << "The dealer's total hand value is " << dealerPoints << endl << endl;

                            dealerPoints = aceFlagCalc(dealerPoints, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5);

                            if(dealerPoints<17){
                                dealerCard4 = cardPointAssign(dealerPoints);
                                dealerValue4 = cardValueAssign(dealerCard4);

                                cout << "The dealers fourth card is " << dealerValue4 << endl << endl;
                                dealerPoints += dealerCard4;
                                cout << "The dealer's total hand value is " << dealerPoints << endl << endl;

                                dealerPoints = aceFlagCalc(dealerPoints, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5);

                                if (dealerPoints < 17){
                                    dealerCard5 = cardPointAssign(dealerPoints);
                                    dealerValue5 = cardValueAssign(dealerCard4);

                                    cout << "The dealers fifth card is " << dealerValue5 << endl << endl;
                                    dealerPoints += dealerCard5;
                                    cout << "The dealer's total hand value is " << dealerPoints << endl << endl;

                                    dealerPoints = aceFlagCalc(dealerPoints, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5);
                                }//close fifth
                            }// close 4
                        }//close 3
                    }//whatever
                }
            }
            else if(stayHit == 's' || stayHit == 'S'){
                        dealerPoints += dealerCard2;
                        cout << "The Dealers total hand value is " << dealerPoints << endl << endl;

                        if (dealerPoints < 17){
                            dealerCard3 = cardPointAssign(dealerPoints);
                            dealerValue3 = cardValueAssign(dealerCard3);

                            cout << "The dealers third card is " << dealerValue3 << endl << endl;
                            dealerPoints += dealerCard3;
                            cout << "The dealer's total hand value is " << dealerPoints << endl << endl;

                            dealerPoints = aceFlagCalc(dealerPoints, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5);

                            if(dealerPoints<17){
                                dealerCard4 = cardPointAssign(dealerPoints);
                                dealerValue4 = cardValueAssign(dealerCard4);

                                cout << "The dealers fourth card is " << dealerValue4 << endl << endl;
                                dealerPoints += dealerCard4;
                                cout << "The dealer's total hand value is " << dealerPoints << endl << endl;

                                dealerPoints = aceFlagCalc(dealerPoints, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5);

                                if (dealerPoints < 17){
                                    dealerCard5 = cardPointAssign(dealerPoints);
                                    dealerValue5 = cardValueAssign(dealerCard4);

                                    cout << "The dealers fifth card is " << dealerValue5 << endl << endl;
                                    dealerPoints += dealerCard5;
                                    cout << "The dealer's total hand value is " << dealerPoints << endl << endl;

                                    dealerPoints = aceFlagCalc(dealerPoints, dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5);
                                }//close fifth
                            }// close 4
                        }//close 3
                    }

            WL = Results(handPoints, dealerPoints, betPlaced, WL);
            gameResults(gameCounter, cardValue1, cardValue2, cardValue3, cardValue4, cardValue5, handPoints, dealerPoints, WL, betPlaced, totalMoney);
        }

}
}

string Results(int handPoints, int dealerPoints, double betPlaced, string WL){
    if (totalHand == 21 && dealerHand != 21){
        cout << "BLACKJACK!" << endl << endl;
        cout << "Player wind. " << endl;
        totalMoney +=(betPlaced*1.5);
        WL = "WIN";
    }
    else if(totalHand!=21 && dealerHand == 21){
        cout << "BLACKJACK!" << endl << endl;
        cout << "House wins!" << endl;
        totalMoney -= betPlaced;
        WL = "LOSE";
    }
    else if (totalHand == dealerHand){
        cout << "You and the house have the same hand. We PUSH." << endl << endl;
        WL = "PUSH";
    }
    else if (totalHand>21 && dealerHand <=21){
        cout << "You BUST" << endl << endl;
        totalMoney -= betPlaced;
        WL = "LOSE";
    }
    else if (dealerHand>21 && totalHand <=21){
        cout << "Dealer BUST. you WIN" << endl << endl;
        totalMoney += betPlaced;
        WL="WIN";
    }
    else if (totalHand > dealerHand){
        cout << "You WIN" << endl << endl;
        totalMoney += betPlaced;
        WL = "WIN";
    }
    else if (dealerHand>totalHand){
        cout << "You LOSE" << endl << endl;
        totalMoney -= betPlaced;
        WL = "LOSE";
    }
    else{
        cout << "You and the house have BUST" << endl << endl;
        totalMoney -= betPlaced;
        WL = "LOSE";
    }
    return WL;
}

bool aceFlagCalc(int playerTotal, int c1, int c2, int c3, int c4, int c5){
    bool aceFlag = false;
    if(totalHand>21){
    if(c1==11)
    {
        c1=1;
        aceFlag=true;
    }
    else if(c2==11)
    {
        c2=1;
        aceFlag=true;
    }
    else if(c3==11)
    {
        c3=1;
        aceFlag=true;
    }
    else if(c4==11)
    {
        c4=1;
        aceFlag=true;
    }
    else if(c5==11)
    {
        c5=1;
        aceFlag=true;
    }
    if(aceFlag)
    {
        totalHand=c1+c2+c3+c4+c5;
        cout << "There was an ace at value 11, it was changed to 1."<<endl;
        cout << "New hand total is: "<<playerTotal<<endl;
    }
    }
    return playerTotal;
}
void welcomeBlackjack(){
    cout << "Welcome to Elders' Blackjack" << endl;
}

void gameResults(int count, char cv1, char cv2, char cv3, char cv4, char cv5, int player, int dealer, string WL, double bet, double money){
    cout<<"**********************************Game History**************************************"<<endl;
    cout<<"Hand #"<<setw(15)<<"Card1"<<setw(15)<<"Card2"<<setw(15)<<"Card3"<<setw(15)<<"Card4"<<setw(15)<<"Card5"<<setw(15)<<"Total"<<setw(21)<<"DealerTotal"<<setw(15)<<"W/L/P"<<setw(13)<<"Bet"<<setw(14)<<"Bank"<<endl<<endl;
    cout<<setw(3)<<right<<count+1<<setw(16)<<cv1<<setw(15)<<cv2<<setw(15)<<cv3<<setw(15)<<cv4<<setw(15)<<cv5<<setw(16)<<player<<setw(17)<<dealer<<setw(19)<<WL<<setw(16)<<bet<<setw(13)<<money<<endl;
    outputFile<<setw(3)<<right<<count+1<<setw(16)<<cv1<<setw(15)<<cv2<<setw(15)<<cv3<<setw(15)<<cv4<<setw(15)<<cv5<<setw(16)<<player<<setw(17)<<dealer<<setw(19)<<WL<<setw(16)<<bet<<setw(13)<<money<<endl;
}


int cardPointAssign(int Points){
    int cardGenerated;
    cardGenerated = rand()%13+1;
    switch(cardGenerated){
        case 1:
            if (Points <= 10)
                cardGenerated = 11;
            else
                cardGenerated = 1;
            break;
        case 11:
        case 12:
        case 13:
            cardGenerated = 10;
            break;
    }
    return cardGenerated;
}

char cardValueAssign(int cardPoint){
    char cardGeneratedValue;
    switch(cardPoint){
        case 1:
        cardGeneratedValue='A';
        break;

        case 2:
        cardGeneratedValue='2';
        break;
        
        case 3:
        cardGeneratedValue='3';
        break;

        case 4:
        cardGeneratedValue='4';
        break;

        case 5:
        cardGeneratedValue='5';
        break;

        case 6:
        cardGeneratedValue='6';
        break;

        case 7:
        cardGeneratedValue='7';
        break;

        case 8:
        cardGeneratedValue='8';
        break;

        case 9:
        cardGeneratedValue='9';
        break;

        case 10:
        cardGeneratedValue='T';
        break;

        case 11:
        cardGeneratedValue='J';
        break;

        case 12:
        cardGeneratedValue='Q';
        break;

        case 13:
        cardGeneratedValue='K';
        break;
    }
    return cardGeneratedValue;
}

char hitStay(){
    cout << "Do you want to hit or stay?" << endl << endl;
    cin >> stayHit;

    while (stayHit != 'h' && stayHit != 'H' && stayHit != 's' && stayHit != 'S'){
        cout << "You have not entered a valid stay hit option. Please choose h, H for hit or s, S for stay." << endl;
        cin >> stayHit;
    }
    return stayHit;
}

void history(int gameCounter){
    string value1, value2, value3, value4, value5, value6, value7, value8, value9, value10, value11;
    if(gameCounter==0){
        cout<<endl;
        cout<<"You have not yet played a game to have a history."<<endl;
        cout<<"Please play at least one hand before selecting to view history."<<endl;
    }
    else{
        outputFile.close();
        inFile.open("History.txt");
        if(!inFile)
        {
            cout<<"Unable to open file."<<endl;
            exit(1);
        }
        
        screenHeadingDisplay();

        inFile>>value1>>value2>>value3>>value4>>value5>>value6>>value7>>value8>>value9>>value10>>value11;
        while(inFile>>value1>>value2>>value3>>value4>>value5>>value6>>value7>>value8>>value9>>value10>>value11)
        {
            cout<<setw(3)<<right<<value1<<setw(15)<<value2<<setw(15)<<value3<<setw(15)<<value4<<setw(15)<<value5<<setw(15)<<value6<<setw(15)<<value7<<setw(19)<<value8<<setw(20)<<value9<<setw(13)<<value10<<setw(14)<<value11<<endl<<endl;
        }
        cout<<"Thank you for playing."<<endl;
        exit(1);
    }
}

void guessingGame(int minimum){
    int numberGenerated;
    int numberGuessed;
    bool correct = true;
    welcomeGuessing();

    if(firstGame)
    {
        validateMinimumFunds(minimum);
        totalMoney = startAmount;
    }

    validateBetPlaced();

    numberGenerated=rand()%10+1;
        cout << "Please guess a number between 1 and 10, where 1 and 10 are inclusive."<<endl;
        cin>>numberGuessed;
        while (numberGuessed<1 || numberGuessed>10)
        {
            cout<<"ERROR: You have guessed a value out of the range. Please retry." << endl;
            cin >> numberGuessed;
        }
        if(numberGuessed != numberGenerated)
        {
            correct=false;
            cout<<"You did not win!"<<endl;
            cout <<"The number was: "<<numberGenerated<<endl;
            totalMoney-=betPlaced;
            cout<<"You have $"<<totalMoney<<" Left"<<endl;
        }
        else
        {
            cout<<"Congratulations: You Won!"<<endl;
            totalMoney+=betPlaced;
            cout<<"You have $"<<totalMoney<<" left"<<endl;
        }

}

void goodBye(){
    cout<<"Thank you for joining us." << endl;
    cout << "Best of luck with your other games." << endl;
    cout << "GoodBye" << endl;
}