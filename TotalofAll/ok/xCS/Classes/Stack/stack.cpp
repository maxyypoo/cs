#include "stack.h"

using namespace std;

stack::stack()
{
 // holder = new char [size1];
  index = -1;
  size = 0;
}

void stack::push( char ch)
{
  index++;
  size++;
  holder[index] = ch;
}

char stack::pop()
{
  if (size == 0)
    cout << "No elements to pop " << endl;
  else
  {
    char ret = holder[index] ;
    index--;
    size--;
    return ret;
  }
}