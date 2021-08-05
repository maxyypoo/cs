#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main ()
{
  int number, counter = 0, numberHolder, tempLoopHolder = 0;
  
  cout << "Enter number: " << endl;
  cin >> number;
  
  numberHolder = number;
  
  while (numberHolder > 0)
  {
    numberHolder /= 10;
    
    counter++;
  }
  
  counter--;
  
  numberHolder = number;
  tempLoopHolder = number;
  
  for (int i = counter; i >= 0; i--)
  {
    tempLoopHolder = (numberHolder / (std::pow (10, i)));
    cout << tempLoopHolder << endl;
    numberHolder -= (tempLoopHolder * (std::pow (10, i)));
  }
  
  return 0;
}