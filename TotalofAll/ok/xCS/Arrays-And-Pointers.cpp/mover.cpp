#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void pointerMover (int *);

int main ()
{
  int xVAlue;
  
  xVAlue = 10;
  
  cout << "xVAlue: " << xVAlue << '\n';
  cout << "xVAlue adress: " << &xVAlue << '\n';
  
  pointerMover (&xVAlue);
  
  cout << "xVAlue: " << xVAlue << '\n';
  cout << "xVAlue adress: " << &xVAlue << '\n';
  
  return 0;
}


void pointerMover (int *xAdress)
{
  int randomMemoryLoc;
  
  *xAdress = randomMemoryLoc;
  
  cout << "xVAlue: " << *xAdress << '\n';
  cout << "xVAlue adress: " << xAdress << '\n';
}