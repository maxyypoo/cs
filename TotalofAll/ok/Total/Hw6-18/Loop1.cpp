/*
Filename: Loop1.cpp
Description: calculating sequential integers using loop.
Assignment: Hw 6/18 Loop01
*/
#include <iostream>
using namespace std;

int main()
{
  //Variable Decleration
  int input, store = 0, startNumber = 1;
  
  //User Input
  cout << "Please enter a postive whole number: ";
  cin >> input;
  
   //Invalidation Process
  if(input > 1)
  {
    //Loop Process
    while (startNumber <= input)
    {
      store += startNumber;
      startNumber++;
    }
    cout << "Sum of integers that count up to your input is: " << store << endl;
  }
  else
    cout << "Please enter a valid number." << endl;
  
  return 0;
}
/*
dakpinar@hills Hw6-18]$ ./a.out
Please enter a postive whole number: 50
Sum of integers that count up to your input is: 1275
[dakpinar@hills Hw6-18]$ ./a.out
Please enter a postive whole number: 0
Please enter a valid number.
[dakpinar@hills Hw6-18]$ ./a.out
Please enter a postive whole number: -5
Please enter a valid number.
*/