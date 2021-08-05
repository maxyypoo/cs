/*
Filename: SalesPrediction.cpp
Description: A sales predictor based on a constant rate.
Assignment: Hw 6/13 - Expressions 02.
*/

#include <iostream>
using namespace std;

int main()
{
  float salesInMillions, gainsRate, gainsInMillions;
  cout << "Please enter this years sales, expressed in millions of dolars: ";
  cin >> salesInMillions;
  gainsRate = 58.0 / 100.0 ;
  gainsInMillions = salesInMillions * gainsRate;
  cout << "Total income generated from gains for the company will be $" << gainsInMillions << " million. Predicted based on last years gains rate." << endl;
  return 0;
}

/* 
dakpinar@hills Hw6-13]$ ./a.out
Please enter this years sales, expressed in millions of dolars: 8.6
Total income generated from gains for the company will be $4.988 million. Predicted based on last years gains rate.
*/