/*
Filename: Retail.cpp
Description: Using Functions to calculate retail prices.
Assingment: Functions 01 Hw 6/20
*/
#include <iostream>
using namespace std;

//Function Prototype
float calculateRetail(float, float);

//Main Function
int main()
{
  //Variable Declaration
  float markUpPercent, wholeSalePrice, total;
  bool validUserInput = false;
  
  //Inquiring for user input
  cout << "Please enter the whole sale price:";
  cin >> wholeSalePrice; 
  cout << "Please enter the mark up percentage: ";
  cin >> markUpPercent;
  
  //Bool data to check for invalid entry
  validUserInput = wholeSalePrice < 1 || markUpPercent < 1;
  
  //If proccessing for invalid entry
  if(validUserInput)
    cout << "Please enter a postive number." << endl;
  else
  {  
    //Using the total variable acquired from calling the calculateRetail fucntion to display total price
    cout << "Total price of the item is: $" << calculateRetail(markUpPercent, wholeSalePrice) << endl;
  }
  
  return 0;
}
  
//Retail calculation fucntion
float calculateRetail(float markUpPercent, float wholeSalePrice)
{
  //total var declaration
  float total;
  
  //Calculation and return process for displaying price results
  total  = (markUpPercent * wholeSalePrice / 100) + wholeSalePrice;
  
  return total;
}
/*
dakpinar@hills Hw6-20]$ ./a.out
Please enter the whole sale price:0
Please enter the mark up percentage: 0
Please enter a postive number.
[dakpinar@hills Hw6-20]$ ./a.out
Please enter the whole sale price:50
Please enter the mark up percentage: 25
Total price of the item is: $62.5
*/