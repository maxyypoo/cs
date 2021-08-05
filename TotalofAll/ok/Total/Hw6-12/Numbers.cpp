/*
Filename: Numbers.cpp
Description: A demo of the usage of mathematical operators and value storage.
Assignment: Hw6/12 - Expressions 01
*/

#include <iostream>
using namespace std;

int main()
{
  int N_low, N_high, Total;                       //Integer decleration. They are all decleared at once to shorten the code, and make it clear.
  N_low=50;                                       //Lower value integer: it is named N for being a number and low to deliante its value.
  N_high=100;
  Total= N_low+N_high;                            //Formula for storing both values.
  cout << "Var1=" << N_low << endl;               //Telling user what the values are and showing that, the values are indeed stored/initialized.
  cout << "Var2=" << N_high << endl;
  cout << "Total is " << Total << endl;
  cout << "Now all the values" << N_low << "," << N_high << "," << Total << endl;
  return 0;
}

/*
[dakpinar@hills Hw6-12]$ ./a.out
Var1=50
Var2=100
Total is 150
Now all the values50,100,150
[dakpinar@hills Hw6-12]$
*/