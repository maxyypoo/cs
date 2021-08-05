#include <iostream>

using namespace std;

void reverseInt (int target)
{
  int container;
  container = target;
  
  if (target == 0);
  else
  {
    cout << container % 10;
    reverseInt (container / 10);
  }
}


int main ()
{
  reverseInt (1984);
  cout << '\n';
  reverseInt (24);
  cout << '\n';
  reverseInt (879);
  cout << '\n';
  reverseInt (100);
  cout << '\n';
  
  return 0;
}