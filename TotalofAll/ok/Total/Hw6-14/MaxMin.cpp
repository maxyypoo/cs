/*
Filename: MaxMin.cpp
Description: A demo of boolian data and operators.
Assignment: In-class 6/14 - Decisions01
*/
#include <iostream>
using namespace std;

int main()
{
  //variables
  int number1, number2;
  
  //input
  cout << "Please enter number 1: ";
  cin >> number1;
  cout << "Please enter number 2: ";
  cin >> number2;
  
  //process
  if(number1 > number2) 
    cout << "First number is bigger than second.";
  if(number1 < number2)
    cout << "Second number is bigger.";
  if(number1 == number2)
    cout << "They are equal.";
  
  return 0;
}
/*
dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 0
You can't buy 0 products. Please enter an actual value.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 100
There aren't enough products in this store. Please enter a valid amount.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 10
The cost of purchase is: $792
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 20
The cost of purchase is: $1584
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 40
The cost of purchase is: $3168
*/