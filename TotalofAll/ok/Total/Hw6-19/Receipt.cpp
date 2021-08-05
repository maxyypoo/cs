#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const float TAX_RATE = 0.0675;
  float totalBill, afterTax, tipRate, mealCost;
  
  mealCost = 88.67;
  tipRate = 0.20;
  afterTax = (mealCost * TAX_RATE) + mealCost;
  totalBill = (afterTax * tipRate) + afterTax;
  
  cout << "Meal cost:" << setw(16) << left << "$" << setprecision(2) << fixed << mealCost << endl;
  cout << "Tax amount:" << setw(15) << left << "$" << mealCost * TAX_RATE << endl;
  cout << "Tip amount:" << setw(15) << left << "$" << afterTax * tipRate << endl;
  cout << "Total bill:" << setw(15) << left << "$" << totalBill << endl;
  
  return 0;
}