/*
Filename: AnnualPay.cpp
Description: A demo of holding variables.
Assignment: Hw 6/14 Expressions 01.
*/
#include <iostream>
using namespace std;

int main()
{
  //Variables
  float payAmount, annualPay;
  int payPeriods;
  
  //Assignment
  payAmount = 2200.0;
  payPeriods = 26; 
  annualPay = payAmount * payPeriods ;
  
  //Process
  cout << "Your annual pay is: $" << annualPay << endl;
  
  return 0;
}
/*
Your annual pay is: $57200
*/