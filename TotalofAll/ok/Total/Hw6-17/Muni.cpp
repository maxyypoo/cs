/*
Student ID#: W12512202
Filename: Muni.cpp
Description: Muni Average rider calculator, based on input.
Assignment: Hw 6/15 - Expressions Muni Adv.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Variables
  int daySurveyed, numberOfRides;
  float rideAvg;
  string muniLine;
  
  //Input
  cout << "Welcome to Muni Ridership Calculator" << endl;
  cout << "-------------------------------------" << endl;
  cout << "Which Muni line did you survey?  ";
  cin >> muniLine;
  cout << "How many days did you survey it?  ";
  cin >> daySurveyed;
  cout << "How many riders did you count?  ";
  cin >> numberOfRides;
  
  //Assignment
  rideAvg = numberOfRides / static_cast<float>(daySurveyed);
  
  //Process
  cout << "According to your survey, an average of " << rideAvg << " people rode the "; 
  cout << muniLine << " per day." << endl;
  
  return 0;
}
/*
[dakpinar@hills Hw6-17]$ ./a.out
Welcome to Muni Ridership Calculator
-------------------------------------
Which Muni line did you survey?  K-Ingelside
How many days did you survey it?  25
How many riders did you count?  41026
According to your survey, an average of 1641.04 people rode the K-Ingelside per day.
[dakpinar@hills Hw6-17]$ ./a.out
Welcome to Muni Ridership Calculator
-------------------------------------
Which Muni line did you survey?  N-Judah
How many days did you survey it?  61
How many riders did you count?  98705
According to your survey, an average of 1618.11 people rode the N-Judah per day.
*/