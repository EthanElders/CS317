/*
Ethan Elders
00099962
eelders@my.athens.edu
February 11, 2024
CS317
Exam 1 P2

This program uses the partial code provided to us.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int VOLTAGE1=20;
	const int VOLTAGE2=35;
	const int VOLTAGE3=15;
	const int VOLTAGE4=6;
	
	const int RES1=10;
	const int RES2=1000;
	
	const double TIME1=0.16;
	const double TIME2=0.55;
	const double TIME3=2.6;
	const double TIME4=0.044;
	
	const double EULER=2.71828;
	
	double t1, t2, t3, t4, t5, t6, t7, t8, t9, i1, i2, i3, i4, i5, i6, i7, i8, i9;

	cout << "Enter the value for the First data run time in seconds: ";
	cin >> t1;
	cout << "Enter the value for the Second data run time in seconds: ";
	cin >> t2;
	cout << "Enter the value for the Third data run time in seconds: ";
	cin >> t3;
	cout << "Enter the value for the Fourth data run time in seconds: ";
	cin >> t4;
	cout << "Enter the value for the Fifth data run time in seconds: ";
	cin >> t5;
	cout << "Enter the value for the Sixth data run time in seconds: ";
	cin >> t6;
	cout << "Enter the value for the Seventh data run time in seconds: ";
	cin >> t7;
	cout << "Enter the value for the Eighth data run time in seconds: ";
	cin >> t8;
	cout << "Enter the value for the Final data run time in seconds: ";
	cin >> t9;

	/******************CALCULATIONS*****************
	In this next section you should write the 
	statements required to calculate  the current.
	Keep in mind that you are completing nine data
	runs, and therefore will need to perform the
	calculation nine different times with the 
	appropriate variables.
	***********************************************/
    i1 = (VOLTAGE1/RES1)*pow(EULER, ((-t1/TIME4)));
    i2 = (static_cast <float> (VOLTAGE2)/RES1)*pow(EULER, ((-t2/TIME1)));
    i3 = (static_cast <float> (VOLTAGE2)/RES1)*pow(EULER, ((-t3/TIME1)));
    i4 = (static_cast <float> (VOLTAGE2)/RES1)*pow(EULER, ((-t4/TIME1)));
    i5 = (static_cast <float> (VOLTAGE2)/RES1)*pow(EULER, ((-t5/TIME1)));
    i6 = (static_cast <float> (VOLTAGE3)/RES1)*pow(EULER, ((-t6/TIME2)));
    i7 = (static_cast <float> (VOLTAGE3)/RES1)*pow(EULER, ((-t7/TIME2)));
    i8 = (static_cast <float> (VOLTAGE3)/RES1)*pow(EULER, ((-t8/TIME2)));
    i9 = (static_cast <float> (VOLTAGE4)/RES2)*pow(EULER, ((-t9/TIME3)));

	
	//cin.ignore();//needed for MS C++ Express users
	cout<<endl<<endl;
  
  cout<<"Voltage V"<<setw(15)<<"Resistance R"<<setw(10)<<"RC"<<setw(20)<<"Time t"<<setw(15)<<"Current i"<< endl;
  cout<<setw(5)<<"(Volts)"<<setw(13)<<"(Ohms)"<<setw(21)<<"(Time Constant)"<<setw(14)<<"(Seconds)"<<setw(13)<<"(Amps)"<<endl;
  cout<<fixed<<setprecision(3);
  
  /*******************OUTPUT DISPLAY***************
  Based on the heading that has been provided 
  above for the output to be in a tabular format, 
  print out each of the nine data runs so that 
  they align as close to centered in each of their
  respective columns.
  ************************************************/
    cout << setw(4) << VOLTAGE1 << setw(14) << RES1 << setw(18) << TIME4 << setw(17) << t1 << setw(15) << setprecision(3) << fixed << i1 << endl;
    cout << setw(4) << VOLTAGE2 << setw(14) << RES1 << setw(18) << TIME1 << setw(17) << t2 << setw(15) << setprecision(3) << fixed << i2 << endl;
    cout << setw(4) << VOLTAGE2 << setw(14) << RES1 << setw(18) << TIME1 << setw(17) << t3 << setw(15) << setprecision(3) << fixed << i3 << endl;
    cout << setw(4) << VOLTAGE2 << setw(14) << RES1 << setw(18) << TIME1 << setw(17) << t4 << setw(15) << setprecision(3) << fixed << i4 << endl;
    cout << setw(4) << VOLTAGE2 << setw(14) << RES1 << setw(18) << TIME1 << setw(17) << t5 << setw(15) << setprecision(3) << fixed << i5 << endl;
    cout << setw(4) << VOLTAGE3 << setw(14) << RES1 << setw(18) << TIME2 << setw(17) << t6 << setw(15) << setprecision(3) << fixed << i6 << endl;
    cout << setw(4) << VOLTAGE3 << setw(14) << RES1 << setw(18) << TIME2 << setw(17) << t7 << setw(15) << setprecision(3) << fixed << i7 << endl;
    cout << setw(4) << VOLTAGE3 << setw(14) << RES1 << setw(18) << TIME2 << setw(17) << t8 << setw(15) << setprecision(3) << fixed << i8 << endl;
    cout << setw(4) << VOLTAGE4 << setw(14) << RES2 << setw(18) << TIME3 << setw(17) << t9 << setw(15) << setprecision(3) << fixed << i9 << endl;


	return 0;
}