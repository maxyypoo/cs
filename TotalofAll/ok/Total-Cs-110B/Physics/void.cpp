#include <iostream>

main ()
{
 enum COLORS {Elchup, Nanananan, nu};
  
  COLORS mein = nu;
  
  if (mein == Elchup)
    std::cout << "yos";
  else 
    std::cout << "plx";
}