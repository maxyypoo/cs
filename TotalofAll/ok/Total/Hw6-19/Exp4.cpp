#include <iostream>
using namespace std;

int main()
{
  const float TAX_RATE = 0.0675;
  float mealCharge = 88.67, tipRate = .20, afterTaxAmount, totalBill, taxAmount, tipAmount;
  
  taxAmount = (mealCharge * TAX_RATE);
  afterTaxAmount = taxAmount + mealCharge;
  tipAmount = (afterTaxAmount * tipRate);
  totalBill = tipAmount + afterTaxAmount;
  
  cout << "Your meals menu cost was $" << mealCharge << ", and you tipped the garson $" << tipAmount;
  cout << " and you paid $" << taxAmount << " for taxes." << endl;
  cout << "Your total expenses for this meal was $" << totalBill << " hope you enjoyed." << endl;
  
  return 0;
}