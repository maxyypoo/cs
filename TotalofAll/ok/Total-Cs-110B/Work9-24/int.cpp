#include <iostream>

using namespace std;

int tenValueOfNumber (int);
void display (int, int);

int main ()
{
  int number, tensValueOfNumber;
  
  cout << "Please enter a number: ";
  cin >> number;
  
  tensValueOfNumber = tenValueOfNumber (number);
  display (number, tensValueOfNumber);
  
  return 0;
}

int tenValueOfNumber (int number)
{
  int tempHolder, sizeCounter = 0;
  
  tempHolder = number;
  
  if (tempHolder < 1)
    sizeCounter = 0;
  else
    while (tempHolder > 0)
    {
      tempHolder /= 10;
      sizeCounter++;
    }
  
  return sizeCounter;
}

void display (int number, int tensValueOfNumber)
{
  int tempHolder;
  static int counter = tensValueOfNumber - 1;
  
  if (tensValueOfNumber > 0)
  {
    tempHolder = number / (10 * counter);
    cout << tempHolder << endl;
    tempHolder -= number / (counter + 1);
    cout << tempHolder << endl;
   // display (number, counter);
  }
}