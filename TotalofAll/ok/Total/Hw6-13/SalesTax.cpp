/*
Filename: SalesTax.cpp
Description: Simple Tax calculator.
Assignment: Hw 6/13 - Expressions 03.
*/

#include <iostream>
using namespace std;

int main()
{
  float item, ctySales, stSales, tTax, fPrice;
  cout << "Please enter the item price: ";
  cin >> item;
  ctySales = (item * 2) / 100;
  stSales = (item * 4) / 100;
  tTax = ctySales + stSales;
  fPrice = tTax + item;
  cout << "Your total is: $" << fPrice << " Thank you for shopping." << endl;
  return 0;
}

/*
[dakpinar@hills Hw6-13]$ ./a.out
Please enter the item price: 95
Your total is: $100.7 Thank you for shopping.
*/