/*
Filename: Discount.cpp
Description: A demo of if/else and else if statements.
Assignment: Hw 6/14 - Decisions 03.
*/
#include <iostream>
using namespace std;

int main()
{
  //Variables
  int price = 99, quantity;
  
  
  //Input
  cout << "Please enter the quantity sold: ";
  cin >> quantity;
  float total = quantity * price;
  
  //Process
  if (quantity <= 0)
    cout << "You can't buy 0 products. Please enter a different value." << endl;
  if (quantity > 99)
    cout << "There aren't enough products in this store. Please enter a valid amount." << endl;
  else if(10 <= quantity)
    cout << "The cost of purchase is: $" << total - (20 * total / 100) << endl;
  else if(19 < quantity) 
     cout << "The cost of purchase is: $" << total - (30 * total / 100) << endl;
  else if(50 < quantity)
      cout << "The cost of purchase is: $" << total - (40 * total / 100) << endl;
  
  return 0;
}
/*
dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 18
The cost of purchase is: $1425.6
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 25
The cost of purchase is: $1980
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 55
The cost of purchase is: $4356
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 0
You can't buy 0 products. Please enter a different value.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the quantity sold: 150
There aren't enough products in this store. Please enter a valid amount.
*/