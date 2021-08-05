/*
Filename: Fat2.cpp
Descripton: A nested if/else demo, that calculates fat percentage in your food.
Assignment: Hw 6/17 - Decisions04.
*/
#include <iostream>
using namespace std;

int main()
{
  //Variables
  int fatGrams, fatCal, totCal;               //Grams and calories are usually expressed in integer (except in scientific circumstances).
  float fatPerc;
  
  //Input
  cout << "Please enter the amount of calories in your food: ";
  cin >> totCal;
  cout << "Please enter the amount of fat grams in your food: ";
  cin >> fatGrams;
  
  //Calculations and assignment
  fatCal = fatGrams * 9;
  fatPerc = static_cast<float>(fatCal) / (totCal) * 100;          //Static_cast to do a proper integer division.
  
  //Boolian Proccesing
  if(totCal > 0)                 //Using a nest for clarity reasons.
  {
    if(fatGrams > 0) 
    {
      if(fatCal < totCal)
      {
        cout << "Total fat calories percentage in your food is: " << fatPerc << "%" << endl;
        if(fatPerc < 30)
          cout << "Your food is low on fat" << endl;
      }
      else 
        cout << "Invalid total or fat calories. Please enter a valid number." << endl;
    }
    else 
      cout << "Fat grams cannot be 0. Enter a valid number." << endl;
  }
  else
     cout << "Invalid total calories. Enter a number above 0." << endl;
  
  return 0;
}
/*
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the amount of calories in your food: 0
Please enter the amount of fat grams in your food: 100
Invalid total calories. Enter a number above 0.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the amount of calories in your food: 100
Please enter the amount of fat grams in your food: 0
Fat grams cannot be 0. Enter a valid number.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the amount of calories in your food: 100
Please enter the amount of fat grams in your food: 20
Invalid total or fat calories. Please enter a valid number.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter the amount of calories in your food: 2000
Please enter the amount of fat grams in your food: 20
Total fat calories percentage in your food is: 9%
Your food is low on fat
dakpinar@hills Hw6-14]$ ./a.out
Please enter the amount of calories in your food: 2000
Please enter the amount of fat grams in your food: 70
Total fat calories percentage in your food is: 31.5%
*/