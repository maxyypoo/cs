/*
Filename: LoopCC.cpp
Description: Using loops to calculate yearly raise on a country club.
Assignment: Hw 6/18 Looping05
*/
#include <iostream>
using namespace std;

int main()
{
  const float FEE_PER_YEAR = 2500, RATE_OF_INC = 0.04;
  int timeYears = 0;
  
  for(timeYears = 1; timeYears <= 6; timeYears++)
    cout << "Fees for the country club " << timeYears << " year(s) after will be $" << (timeYears * RATE_OF_INC * FEE_PER_YEAR) + FEE_PER_YEAR << ".\n";
  
  return 0;
}
/*
[dakpinar@hills Hw6-18]$ ./a.out
Fees for the country club 1 year(s) after will be $2600.
Fees for the country club 2 year(s) after will be $2700.
Fees for the country club 3 year(s) after will be $2800.
Fees for the country club 4 year(s) after will be $2900.
Fees for the country club 5 year(s) after will be $3000.
Fees for the country club 6 year(s) after will be $3100.
*/