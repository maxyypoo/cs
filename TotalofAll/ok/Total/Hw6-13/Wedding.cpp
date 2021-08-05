/* 
Filename: Wedding.cpp
Description: A demo of <cmath> and ceil function.
Assignemnt: Hw6/12 - expressions integer
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int guests, exSpc, busses;                                                                
  const int MAX_BUS = 40;                                                                              //Maximum number of guests allowed in a bus is constant, so it is denoted as such.
  cout << "Please enter the number of guests: ";
  cin >> guests;
  busses = ceil(static_cast<float>(guests) / static_cast<float>(MAX_BUS));                             //Ceil function is a round up function. This is used here instead of just round because you can't take invitations back (as round also tries to round down).
  exSpc = (busses * MAX_BUS) - guests;
  cout << "You will need " << busses << " amount of busses." << endl;
  cout << "You will have " << exSpc << " extra space for guests." << endl;
  return 0;
}
/*
[dakpinar@hills Hw6-13]$ ./a.out
Please enter the number of guests: 52
You will need 2 amount of busses.
You will have 28 extra space for guests.
*/