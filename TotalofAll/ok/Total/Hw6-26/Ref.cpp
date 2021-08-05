#include <iostream>
using namespace std;

void referanceFunc (float &);

int main()
{
  float value;
  
  do
  {
  cout << value << endl;
  cout << "Enter value ";
  cin >> value;
  
  referanceFunc(value);
  
  cout << "Value " << value << endl;
  }while (value != 90);
  
  return 0;
}

void referanceFunc (float &valueRef)
{
  valueRef = valueRef * 2;
  
  cout << "Change value " << valueRef << endl;
  cin >> valueRef;
}