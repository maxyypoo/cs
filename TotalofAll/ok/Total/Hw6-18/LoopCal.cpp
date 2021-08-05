/*
Filename: LoopCal.cpp
Description: Using loops to calculate calorie burn over 30 mins, with 5 min intervals.
Assignment: Hw 6/18 Looping04
*/
#include <iostream>
using namespace std;

int main()
{
  const float CAL_BURN_PER_MIN = 3.6;
  int timeMin = 0;
  
  for(timeMin = 5; timeMin < 31; timeMin++, timeMin++, timeMin++, timeMin++, timeMin++)
    cout << "You will burn " << CAL_BURN_PER_MIN * timeMin << " in " << timeMin << "mins." << endl;
  
  return 0;
}
/*
dakpinar@hills Hw6-18]$ ./a.out
You will burn 18 in 5mins.
You will burn 36 in 10mins.
You will burn 54 in 15mins.
You will burn 72 in 20mins.
You will burn 90 in 25mins.
You will burn 108 in 30mins.
*/