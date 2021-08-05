/*
Filename: sGame.cpp
Description: A demo of using cin function and multiple entries, and math operators.
Assignment: In-class 6/13 - Streaming input.Assignment
*/
#include <iostream>
using namespace std;

int main()
{
  int classA, classB, classC;
  cout << "Please enter the amount of tickets sold for class A, B and C:";
  cin >> classA >> classB >> classC;
  int income= (classA * 15) + (classB * 12) + (classC * 9);
  cout << "Total is $" << income << "." << endl;
  return 0;
}
/*
[dakpinar@hills Hw6-13]$ ./a.out
Please enter the amount of tickets sold for class A, B and C:15 63 98
Total is $1863.
*/