#include <iostream>

using namespace std;

int recursiveAddition (int start, int end)
{
  if (start == end)
  {
    return start;
  }
  else 
  {
  
  return end + recursiveAddition (start, end - 1);
  }
}

int main ()
{
  int numContainer;
  
  numContainer = recursiveAddition (3, 6);
  cout << numContainer << endl;
  numContainer = recursiveAddition (4, 30);
  cout << numContainer << endl;
  numContainer = recursiveAddition (1, 1);
  cout << numContainer << endl;
  
  return 0;
}