// This program uses a switch-case statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;
int main()
{
int testScore;
cout << "Enter your test score and I will tell you\n";
cout << "the letter grade you earned: ";
cin >> testScore;
switch (testScore)
    {
    case (testScore>50):
        cout << "Your grade is F.\n";
        break;
    case 2:
        cout << "Your grade is D.\n";
        break;
    case 3:
        cout << "Your grade is C.\n";
        break;
    case 4:
        cout << "Your grade is B.\n";
        break;
    case 5:
        cout << "Your grade is A.\n";
        break;
    default:
        cout << "That score isn't valid\n";
    }

return 0;
} 