/*
Ethan Elders
00099962
eelders@my.athens.edu
CS317 - Exam 2
Problem 1
*/

#include <iostream>
#include<cstdlib>
#include<time.h>
#include <fstream>

using namespace std;

int main(){
    ofstream outfile;
    srand(time(NULL));
    
    outfile.open("Numbers.txt");
    for(int i=0; i<100; i++){
        int random = rand()%100+1;
        outfile << random << endl;
        cout << random << endl;
    }
    outfile.close();
    cout << "File 'Numbers.txt' created" << endl;
    
    return 0;
}