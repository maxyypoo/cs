/*
Filename: Currency.cpp
Description: Basic currency convertor. Uses constants.
Assignment: Hw 6/13 - Expressions Formating intro.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float dollars, yenAmount, euroAmount;
  const float YEN_PER_DOLLAR = 110.18;
  const float EUROS_PER_DOLLAR = 0.85;
  cout << "Please enter the amount of money you'd like to convert: $";
  cin >> dollars;
  yenAmount = dollars * YEN_PER_DOLLAR;
  euroAmount = dollars * EUROS_PER_DOLLAR;
  cout << setprecision(2) << fixed;
  cout << "Your money is worth " << yenAmount << " in japanese yen and it's worth " << euroAmount << " in euros." << endl;
  return 0;
}
/*
dakpinar@hills Hw6-13]$ ./a.out
Please enter the amount of money you'd like to convert: $10
Your money is worth 1101.80 in japanese yen and it's worth 8.50 in euros.
*/