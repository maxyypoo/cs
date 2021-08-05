#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int getVal ();
void displayFibo (int);

int main ()
{
  int numberOfItiretion;
  
  cout << "Please enter the amount of sequence numbers you'd like to see: ";
  numberOfItiretion = getVal ();
  
  displayFibo (numberOfItiretion);
  cout << endl;
  
  return 0;
}

int getVal ()
{
  int tempVal;
  
  cin >> tempVal;
  
  return tempVal;
}

void displayFibo (int numberOfItiretion)
{
  static int counter = numberOfItiretion;
  static unsigned long long int totalTempVal = 1,pastVal = 1, tempHolder = 0;
  
  if (counter > 0)
  {
    totalTempVal = pastVal + tempHolder;
    
    cout << totalTempVal << " ";
    
    pastVal = tempHolder;
    tempHolder = totalTempVal;
    counter--;
    
    displayFibo (counter);
  }
  else;
  
}