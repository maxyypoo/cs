/*
Filename: Receipt2.cpp
Description: Price total calculator, that takes sales tax into account.
Assignemnt: Expressions03 - 6/20
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Variables
  const float SALES_TAX_RATE = 0.07,
  ITEM_1 = 15.95,
  ITEM_2 = 24.95, 
  ITEM_3 = 6.95,
  ITEM_4 = 12.95,
  ITEM_5 = 3.95;
  float salesTaxTotal, itemSubTotal, totalBill;
  
  //Variable Assignment and necesarry calculations
  itemSubTotal = ITEM_1 + ITEM_2 + ITEM_3 + ITEM_4 + ITEM_5;
  salesTaxTotal = itemSubTotal * SALES_TAX_RATE;
  totalBill = itemSubTotal + salesTaxTotal;
  
  //Output of prices
  cout << setprecision(2) << fixed << showpoint << endl;
  cout << "Customer Total Bill" << endl;
  cout << setw(30) << setfill('.') << "" << endl;
  cout << setfill(' ') <<"Items" << setw(11) << "Cost" << endl;
  cout << "Item1" << setw(20) << "$" << ITEM_1 << endl;
  cout << "Item2" << setw(20) << "$" << ITEM_2 << endl;
  cout << "Item3" << setw(20) << "$" << ITEM_3 << endl;
  cout << "Item4" << setw(20) << "$" << ITEM_4 << endl;
  cout << "Item5" << setw(20) << "$" << ITEM_5 << endl;
  cout << setw(30) <<setfill('-') << "" << endl;
  cout << setfill(' ');
  cout << "Subtotal:" << setw(16) << "$" << itemSubTotal << endl;
  cout << "Sales Tax Rate:" << setw(13) << SALES_TAX_RATE * 100 << "%" << endl;
  cout << "Total Tax Amount:" << setw(8) << "$" << salesTaxTotal << endl;
  cout << "Total Amount Due:" << setw(8) << "$" <<  totalBill << endl;
  cout << endl;
  
  return 0;
}
/*
[dakpinar@hills Hw6-20]$ ./a.out

Customer Total Bill
..............................
Items       Cost
Item1                   $15.95
Item2                   $24.95
Item3                   $6.95
Item4                   $12.95
Item5                   $3.95
------------------------------
Subtotal:               $64.75
Sales Tax Rate:         7.00%
Total Tax Amount:       $4.53
Total Amount Due:       $69.28

*/