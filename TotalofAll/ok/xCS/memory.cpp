#include <iostream>

using namespace std;

int main ()
{
  int counter = 0;
  
  while (true)
  {
    try
    {
      int* ptr1 = new int[1000000000];
      cout << "Allocated block" << '\n';
      counter++;
    }
    catch (...)
    {
      cout << "Out of Memory: " << counter << '\n';
      break;
    }
  }
  return 0;
}