/*
Filename: Recipe.cpp
Assignemnt: Expressions Adv 02
Description: A recipe for cookies that calculates ingredient amount based on cookie amount.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Variable Declaration
  const float CUPS_OF_SUGAR = 1.5, CUP_OF_BUTTER = 1, CUPS_OF_FLOUR = 2.75;
  const int COOKIE_PRODUCED_IN_STD_RECIPE = 48;
  int cookieAmountInput;
  
  //User input
  cout << "Please enter the amount of cookie you would like to bake: ";
  cin >> cookieAmountInput;
  
  //Out Process
  if(cookieAmountInput > 0)
  {
    cout << "Ingredient" << setw(30) << "Cups" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Sugar" <<"..............................." << setprecision(3) << fixed << showpoint << CUPS_OF_SUGAR * (static_cast<float>(cookieAmountInput) / COOKIE_PRODUCED_IN_STD_RECIPE) << endl;        //Static cast is used here because the initial cookie amount needs to be an integer, even if user entered a float, after that to make an integer division static_cast is used.
    cout << "Butter" <<".............................." << CUP_OF_BUTTER * (static_cast<float>(cookieAmountInput) / COOKIE_PRODUCED_IN_STD_RECIPE) << endl;
    cout << "Flour" << "..............................." << CUPS_OF_FLOUR * (static_cast<float>(cookieAmountInput) / COOKIE_PRODUCED_IN_STD_RECIPE) << endl;
  }
  else               //To invalidate any negative number, since you can't bake negative cookies.
    cout << "Enter a valid amount of cookies that you would like to bake." << endl;
  
  return 0;
}
/*
[dakpinar@hills Hw6-19]$ ./a.out
Please enter the amount of cookie you would like to bake: 69
Ingredient                          Cups
------------------------------------------
Sugar...............................2.156
Butter..............................1.438
Flour...............................3.953
[dakpinar@hills Hw6-19]$ ./a.out
Please enter the amount of cookie you would like to bake: 48
Ingredient                          Cups
------------------------------------------
Sugar...............................1.500
Butter..............................1.000
Flour...............................2.750
[dakpinar@hills Hw6-19]$ ./a.out
Please enter the amount of cookie you would like to bake: 24
Ingredient                          Cups
------------------------------------------
Sugar...............................0.750
Butter..............................0.500
Flour...............................1.375
[dakpinar@hills Hw6-19]$ ./a.out
Please enter the amount of cookie you would like to bake: -5
Enter a valid amount of cookies that you would like to bake.
*/