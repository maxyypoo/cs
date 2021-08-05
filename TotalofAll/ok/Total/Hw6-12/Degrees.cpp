/* 
Filename: Degrees.cpp
Description: A simple converter, that converts Celcius to Fahrenheit.
Assignment: Hw for 6/12 - Expressions operators.
*/

#include <iostream>
using namespace std;

int main()
{
  float Celcius, Fahrenheit;                                    //Using float since the temparature is often expressed in ratios as well as the function to convert contains one.
  Celcius= 24;
  Fahrenheit=((Celcius*9)/5)+32;                                //Conversion function. The seemingly excessive use of paranthesis is to seperate the awkward ratio in to multiplication and division.                                                 
  cout << "It's 24 degrees celcius outside.\n";                 //Telling the user what the temparature is (which happens to be room temp.)                                              
  cout << "Which is " << Fahrenheit << " in fahrenheit.";       
  cout << "\n";                                                 
  return 0;
}

/*
dakpinar@hills Hw6-12]$ ./a.out

It's 24 degrees celcius outside.
Which is 75.2 in fahrenheit.
[dakpinar@hills Hw6-12]$
*/