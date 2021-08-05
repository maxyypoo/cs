/*
Filename: Seconds.cpp
Description: A time calculator using if commands.
Assignment: In-class 6/14 Desicions02
*/
#include <iostream>
using namespace std;

int main()
{
  //variables
  int seconds;
  
  //input
  cout << "Enter amount of seconds: ";
  cin >> seconds;
  
  //process
  if(seconds >= 60)
    cout << seconds / 60 << " minute(s)" << endl;
  if(seconds >= 3600)
    cout << seconds / 3600 << " hour(s)" << endl;
  if (seconds >= 86400)
    cout << seconds / 86400 << " day(s)" << endl;
 
  return 0;
}
/*
Enter amount of seconds: 90000
1500 minute(s)
25 hour(s)
1 day(s)
*/