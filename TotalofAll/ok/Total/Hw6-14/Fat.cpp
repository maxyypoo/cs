#include <iostream>
using namespace std;

int main()
{
  int fatGrams, fatCal, totCal;
  float fatPerc;
  
  cout << "Please enter the amount of calories in your food: ";
  cin >> totCal;
  cout << "Please enter the amount of fat grams in your food: ";
  cin >> fatGrams;
  
  fatCal = fatGrams * 9;
  fatPerc = static_cast<float>(fatCal) / static_cast<float>(totCal) * 100;
  
  if(totCal <= 0)
    cout << "Please enter a valid amount of calories." << endl;
  else if(fatGrams < 0)
    cout << "Fat grams cannot be 0. Enter a valid number." << endl;
  else if (fatCal > totCal)
    cout << "Invalid total calories." << endl;
  else
    cout << "Total fat calories percentage in your food is: " << fatPerc << "%" << endl;
  if(fatPerc < 30)
     cout << "Your food is low on fat" << endl;
    
  
  
  return 0;
  
}