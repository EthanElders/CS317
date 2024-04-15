/*
Ethan Elders
00099962
eelders@my.athens.edu
ASG 6 Problem 2
*/

#include <iostream>



using namespace std;

float maxValue(float [], int);
float minValue(float [], int);
float avgValue(float [], int);
float modeValue(float [], int);
void display(float, float, float, float);



int main(){
    int maximum;
    float totalStudents;
    cout << "Enter number of students: ";
    cin >> totalStudents;
    const int totalStudents2 = totalStudents;

    float studentScores[totalStudents2];
    
    for (int i = 0; i<totalStudents; i++){
        float temporary;
        cout << "Enter the overall class score for student " << i+1 << ": ";
        cin >> temporary;
        while (temporary < 0 || temporary > 100){
            cout << "You have entered an invalid score, please enter a number between 0 and 100." << endl;
            cout << "Enter the overall class score for student " << i+1 << ": ";
            cin >> temporary;
        }

        studentScores[i] = temporary;
    }

    maximum = maxValue(studentScores, totalStudents);
    cout << maximum;
}

float maxValue(float studentScores[], int totStudents){
    int max = studentScores[0];

    for (int i = 1; i < totStudents; i++)
        if (studentScores[i] > max)
            max = studentScores[i];
 
    return max;
}

float minValue(float studentScores[], int totStudents){
    int min = studentScores[0];

    for (int i = 1; i < totStudents; i++)
        if (studentScores[i] < min)
            min = studentScores[i];
 
    return min;
}

float avgValue(float studentScores[], int totStudents){
    int tnum;
    float average, sum = 0;
    for(tnum = 0; tnum < totStudents; tnum++)
        sum += studentScores[tnum];
    
    average = sum/totStudents;
    return average;
}

float modeValue(float studentScores[], int totStudents){
    float mode;
    int number = studentScores[0];
    mode = number;
    int count = 1;
    float countMode = 1;

for (int i=1; i<totStudents; i++)
{
      if (studentScores[i] == number) 
      {
         ++count;
      }
      else
      { 
            if (count > countMode) 
            {
                  countMode = count;
                  mode = number;
            }
           count = 1;
           number = studentScores[i];
  }
}
    return mode;
}

void display(float min, float max, float avg, float mode){

}