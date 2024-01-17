/*
Ethan Elders
00099962
eelders@my.athens.edu
Lab - Week 2 - Data Types and cout statements
January 16, 2024
*/

#include <iostream>
#include <string>
using namespace std;

//MAIN FUNCTION
int main(){
    //Variable Declarations
    string WL; //Win, lose or push message.

    //integer cards for both the dealer and the player, 5 card maximum.
    int dealerCard1, dealerCard2, dealerCard3, dealerCard4, dealerCard5;
    int card1;
    int card2;
    int card3;
    int card4;
    int card5;
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

    bool push=false;    //assume the result of the round will not be a push

    //Track the number of "hands" the user plays (game counter)
    int gameCounter=0;


    /*
    Start the game, questions to ask:
    1. How much money do you want to exchange to chips
    2. How much do you want to bet?
    3. Do you want to hit or stay?
    4. Do you want to play another hand or cash out?
    */

   cout << "Welcome to Elders' Blackjack Party"<<endl<<endl;
   cout << "How much money would you like to exchange for chips?\n"<<endl<<endl;
   cout<<"You currently have $ "<<totalMoney<<" to bet"<<endl<<endl;
   cout << "How much would you like to bet? (Minimum is $10.00, Max is $500.00)"<<endl<<endl;
   cout<<"Your first card is: "<<card1<<endl<<endl;
   cout<<"Dealers first card is -"<<endl; //We don't see dealers first card value until end.
   cout<<"Your second card is "<<card2<<endl<<endl;
   cout<<"Dealer's second card is: "<<dealerCard2<<endl<<endl;
   cout<<"Your total hand value is "<<totalHand<<endl<<endl;
   cout<<"Dealer's total hand value is "<<dealerHand<<endl<<endl;
   cout<<"Do you want to hit or stay?"<<endl<<endl;
   cout<<"Your third card is "<<card3<<endl<<endl;
   cout<<"The total hand value you have is "<<totalHand<<endl<<endl;
   cout<<"Do you want to hit or stay?"<<endl<<endl;

   cout<<"Your fourth card is "<<card4<<endl<<endl;
   cout<<"The total hand value you have is "<<totalHand<<endl<<endl;
   cout<<"Do you want to hit or stay?"<<endl<<endl;

   cout<<"Your fifth card is "<<card5<<endl<<endl;
   cout<<"The total hand value you have is "<<totalHand<<endl<<endl;
   //Once the user choses to stay, then the dealers turn begins with additional cards.
   //He flips the first card and we see his total.
   cout<<"The dealers first card is "<<dealerCard1<<endl<<endl;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   //The dealer draws cards automatically. House rules is that the dealers have to hit until they have a min of 17
   cout<<"The dealers third card is "<<dealerCard3<<endl<<endl;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   cout<<"The dealers fourth card is "<<dealerCard4<<endl<<endl;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   cout<<"The dealers fifth card is "<<dealerCard5<<endl<<endl;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   cout<<"You have WON, LOST, PUSHED"<<endl<<endl;


   //A lot more output...

   cout<<"************************************************************************"<<endl;
   cout<<"Hand #    Card1   Card2   Card3   Card4   Card5   Total   DealerTotal    W/L/P    Bet     Bank"<<endl;
   cout<<gameCounter<<" "<<cardValue1<<" "<<cardValue2<<" "<<cardValue3<<" "<<cardValue4<<" "<<cardValue4<<" "<<cardValue5<<" "
   <<totalHand<<" "<<dealerHand<<" "<<WL<<" "<<betPlaced<<" "<<totalMoney<<endl;
}