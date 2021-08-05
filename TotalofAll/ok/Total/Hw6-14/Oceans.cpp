/*
Filename: Oceans.cpp
Description: Using expressions to calculate ocean level changes.
Assignment: Hw 6/14 - Expressions 02 adv.
*/
#include <iostream>
using namespace std;

int main()
{
  //Variables
  float riseRate, deltaHeight5, deltaHeight7, deltaHeight10;      //Delta is a greek letter, stands for change in Math.
  
  //Assignment
  riseRate = 1.5;
  deltaHeight5 = riseRate * 5;
  deltaHeight7 = riseRate * 7;
  deltaHeight10 = riseRate * 10;
  
  //Process
  cout << "Ocean levels will be  " << deltaHeight5 << "mm higher in 5 years, "
    << deltaHeight7 << "mm higher in 7 years and " << deltaHeight10 << "mm higher in 10 years.\n";
  
  return 0;
}
/*
dakpinar@hills Hw6-14]$ ./a.out
Ocean levels will be  7.5mm higher in 5 years, 10.5mm higher in 7 years and 15mm higher in 10 years.
*/