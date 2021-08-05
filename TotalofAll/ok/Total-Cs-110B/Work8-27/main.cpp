#include <iostream>
#include "prototype.h"
#include "nameSpace.hh"
#include "math.hh"


int main ()
{ 
  int y, x;
  
  y = numeros::numeroUno;
  x = numeros::numeroDos;
  
  float result = meanOfNumbers::mean (y, x);
  
  std::cout << result;
  
  std::cout << '\n';
  
  return 0;
}