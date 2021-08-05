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
  long long int totalTempVal = 1,pastVal = 1, tempHolder = 0;
  
  for (int i = 0; i < numberOfItiretion; i++)
  {
    
    totalTempVal = tempHolder + pastVal;
    pastVal = tempHolder;
    tempHolder = totalTempVal;
    
    cout << totalTempVal << " ";
  }
}