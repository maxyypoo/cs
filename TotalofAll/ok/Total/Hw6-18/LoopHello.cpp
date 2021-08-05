/*
Filename: LoopHello.cpp
Description: Using while to create an alternating text that loops based on input.
Assignment: Hw 6/18 Looping Intro
*/
#include <iostream>
using namespace std;

int main()
{
  int helloAmount, stock = 0, stockRemainder;
  
  cout << "How many times should I say hello? ";
  cin >> helloAmount;
  
  if (helloAmount < 1)
    cout << "Enter a valid amount.";
  else 
  {  
    while (stock < helloAmount)
    {
      stockRemainder = stock % 2;
      if (stockRemainder == 0)
        cout << "hello.";
      else 
        cout << "HELLO.";
      stock++;
    }
  }
  return 0;
}
/*
dakpinar@hills Hw6-18]$ ./a.out
How many times should I say hello? 5
hello.HELLO.hello.HELLO.hello.
*/