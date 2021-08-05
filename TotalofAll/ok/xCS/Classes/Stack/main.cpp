#include <iostream>
#include "stack.h"

using namespace std;

const char LEFT = '{';
const char RIGHT = '}';


void isValid( string str1)
{
  stack stackObj;
  for (int i = 0; i < str1.length() ; i++)
  {
    if (str1[i] == LEFT)
      stackObj.push (LEFT) ; 
    else
    {
      if (stackObj.size == 0)
      {
        cout << "Invalid String." << endl;
        return ;
      }
      if (stackObj.pop() != LEFT)
      {
        cout << "Invalid String." << endl;
        return ;
      }
    }
  }
  
  if (stackObj.size != 0)
    cout << "Invalid String." << endl;
  else
    cout << "Valid String." << endl;
  
}



int main ()
{
  stack lol;
  lol.push ('A');
  lol.push ('B');
  
  int count = 0;
  
  while (count < 2)  
  {
    cout << lol.pop() << endl;
    count++;
  }
  
  
  
  return 0;
}