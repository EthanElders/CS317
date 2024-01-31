/*
Ethan Elders
00099962
eelders@my.athens.edu
Lab - Week 4 - 
January 30, 2024
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
   cout<<"Please introduce yourself."<<endl<<endl;
   getline(cin, Name);
   cout << "How much money would you like to exchange for chips?\n"<<endl<<endl;
   cin >> startAmount;
   totalMoney = startAmount;
   cout<< "You currently have $ "<< setprecision(2)<<fixed<<showpoint<<totalMoney <<" to bet"<<endl<<endl;
   cout << "How much would you like to bet? (Minimum is $10.00, Max is $500.00)"<<endl<<endl;
   cin >> betPlaced;
   afterBet = totalMoney - betPlaced; //Make sure bet is covered by funds
    srand(time(0)); //set seed for random card assignments
    card1=rand()% 13 + 1;
    dealerCard1 = rand() % 13 + 1;
    card2= rand() % 13 + 1;
    dealerCard2 = rand() % 13 + 1;

   cout<<"Your first card is: "<<card1<<endl<<endl;
   cout<<"Dealers first card is: "<< dealerCard1 << endl<<endl;
   cout<<"Your second card is "<<card2<<endl<<endl;
   cout<<"Dealer's second card is: -"<<endl<<endl;
   totalHand = card1 + card2;
   dealerHand = dealerCard1;
   cout<<"Your total hand value is "<<totalHand<<endl<<endl;
   cout<<"Dealer's total hand value is "<<dealerHand<<endl<<endl;
   cout<<"Do you want to hit or stay? (h or s)"<<endl<<endl;
   cin>>stayHit; //character for hit or stay
   card3 = rand() % 13 + 1;
   cout<<"Your third card is "<<card3<<endl<<endl;
   totalHand += card3;
   cout<<"The total hand value you have is "<<totalHand<<endl<<endl;
   cout<<"Do you want to hit or stay? (h or s)"<<endl<<endl;
    cin>>stayHit; //character for hit or stay

    card4 = rand() % 13 + 1;
   cout<<"Your fourth card is "<<card4<<endl<<endl;
   totalHand+=card4;
   cout<<"The total hand value you have is "<<totalHand<<endl<<endl;
   cout<<"Do you want to hit or stay? (h or s)"<<endl<<endl;
   cin>>stayHit;

    card5 = rand() % 13 + 1;
   cout<<"Your fifth card is "<<card5<<endl<<endl;
   totalHand += card5;
   cout<<"The total hand value you have is "<<totalHand<<endl<<endl;
   //Once the user choses to stay, then the dealers turn begins with additional cards.
   //He flips the first card and we see his total.
   cout<<"The dealers second card is "<<dealerCard2<<endl<<endl;
   dealerHand = dealerCard1 + dealerCard2;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   //The dealer draws cards automatically. House rules is that the dealers have to hit until they have a min of 17
   dealerCard3 = rand() % 13 + 1;
   cout<<"The dealers third card is "<<dealerCard3<<endl<<endl;
   dealerHand+=dealerCard3;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   dealerCard4 = rand() % 13 + 1;
   cout<<"The dealers fourth card is "<<dealerCard4<<endl<<endl;
   dealerHand+=dealerCard4;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   dealerCard5 = rand() % 13 + 1;
   cout<<"The dealers fifth card is "<<dealerCard5<<endl<<endl;
   dealerHand+=dealerCard5;
   cout<<"The dealer's total hand value is "<<dealerHand<<endl<<endl;

   cout<<"You have WON, LOST, PUSHED"<<endl<<endl;
    totalMoney+=betPlaced; // if player wins
    totalMoney -= betPlaced; //if player loses
    //if push, no money is lost or won

   //A lot more output...

   cout<<"**********************************Game History**************************************"<<endl;
   cout<<"Hand #    Card1   Card2   Card3   Card4   Card5   Total   DealerTotal    W/L/P    Bet     Bank"<<endl;
   cout<<gameCounter<<" "<<cardValue1<<" "<<cardValue2<<" "<<cardValue3<<" "<<cardValue4<<" "<<cardValue4<<" "<<cardValue5<<" "
   <<totalHand<<" "<<dealerHand<<" "<<WL<<" "<<betPlaced<<" "<<totalMoney<<endl;

   cout<<"**********************************Game History**************************************"<<endl;
   cout<<"Hand #\t\tCard1\t\tCard2\t\tCard3\t\tCard4\t\tCard5\t\tTotal\t\tDealerTotal\t\tW/L/P\t\tBet\t\tBank"<<endl;
   cout<<gameCounter<<" "<<cardValue1<<" "<<cardValue2<<" "<<cardValue3<<" "<<cardValue4<<" "<<cardValue4<<" "<<cardValue5<<" "
   <<totalHand<<" "<<dealerHand<<" "<<WL<<" "<<betPlaced<<" "<<totalMoney<<endl;

    cout<<"**********************************Game History**************************************"<<endl;
    cout<<"Hand #"<<setw(15)<<"Card1"<<setw(15)<<"Card2"<<setw(15)<<"Card3"<<setw(15)<<"Card4"<<setw(15)<<"Card5"<<setw(15)<<"Total"<<setw(21)<<"DealerTotal"<<setw(15)<<"W/L/P"<<setw(13)<<"Bet"<<setw(14)<<"Bank"<<endl<<endl;
    cout<<setw(3)<<right<<gameCounter<<setw(16)<<cardValue1<<setw(15)<<cardValue2<<setw(15)<<cardValue3<<setw(15)<<cardValue4<<setw(15)<<cardValue5<<setw(16)<<totalHand<<setw(17)<<dealerHand<<setw(19)<<WL<<setw(16)<<betPlaced<<setw(13)<<totalMoney<<endl;

    cout<<"Thank you for playing "<<Name<<endl<<endl;
    system("pause");
}