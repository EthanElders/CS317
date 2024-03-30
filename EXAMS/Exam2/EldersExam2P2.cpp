/*
Ethan Elders
00099962
eelders@my.athens.edu
CS317 - Exam 2
Problem 2
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    /*
    This is the only way I can think of doing this without using a ton 
    of if statements which would be extremely inefficientand is bad practice.
    */

    string color[5], placeHolder;
    cout << "Enter 5 different colors: " << endl;
    for (int i = 0; i<5; ++i){
        getline(cin, color[i]);
    }
    for(int i = 0; i<5; ++i)
        for(int j=i+1; j<5; ++j){
            if(color[i]>color[j]){
                placeHolder=color[i];
                color[i]=color[j];
                color[j]=placeHolder;
            }
        }
        cout << endl;
        cout << endl;
        for (int i = 0; i<5; ++i){
            cout << color[i]<<endl;
        }
    
    return 0;
}