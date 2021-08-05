/*
Filename: LoopDistance.cpp
Description: A distance calculator, utilizing loops to break down.
Assignment: Hw 6/18 Looping06
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int speed, time, timeInput, distance;
  
  cout << "Please enter the amount of speed you were traveling with: ";
  cin >> speed;
  cout << "Please enter the amount of time traveled in hours: ";
  cin >> timeInput;
  
  if (timeInput < 1)
    cout << "Please enter a valid time amount." << endl;
  else
  {
    cout << "Hour" << setw(30) << "Distance Traveled" << endl;
    cout << "---------------------------------------" << endl;
    for(time = 1; time <= timeInput; time++)
      cout << time << setw(20) << time * speed << endl;
  }
  
  return 0;
}
/*
[dakpinar@hills Hw6-18]$ ./a.out
Please enter the amount of speed you were traveling with: 40
Please enter the amount of time traveled in hours: 3
Hour             Distance Traveled
---------------------------------------
1                  40
2                  80
3                 120
*/