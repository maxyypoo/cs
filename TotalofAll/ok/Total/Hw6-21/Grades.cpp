#include <iostream>
using namespace std;

int main()
{
  int gradePoint;
  bool invalidUserInput = false;
  
  cout << "Please enter your grade:";
  cin >> gradePoint;
  
  invalidUserInput = gradePoint < 0;
  
  if (invalidUserInput)
    cout << "Enter a number equal or above 0.\n";
  else
 { 
    if (gradePoint >= 90)
      cout << "Your letter grade is A\n";
    else if (gradePoint >= 80 && gradePoint < 90)
      cout << "Your letter grade is B\n";
    else if (gradePoint >= 70 && gradePoint < 80)
      cout << "Your letter grade is C\n";
    else if (gradePoint >= 60 && gradePoint < 70)
      cout << "Your letter grade is D\n";
    else
      cout << "Your letter grade is F\n";
 }
  
  return 0;
}