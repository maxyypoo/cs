#include <iostream>
using namespace std;

int main()
{
  const int NUMBER_OF_JALAPENO_CRATES = 5;
  int numberOfJalapenos[NUMBER_OF_JALAPENO_CRATES];
  
  for (int count = 0; count < NUMBER_OF_JALAPENO_CRATES; count++)
  {
    cout << "Please enter the amount of jalapenos for crate #" << count + 1 << " ";
    cin >> numberOfJalapenos[count];
  }
  
  cout << "You entered the numbers: ";
  
  for (int count = 0; count < NUMBER_OF_JALAPENO_CRATES; count++)
    cout << numberOfJalapenos[count] << " ";
  
  for (int count = 0; count < NUMBER_OF_JALAPENO_CRATES; count++)
    cout << "Number of jalapenos in crate #" << count + 1 << " is " << numberOfJalapenos[count] << endl;
  
  return 0;
}