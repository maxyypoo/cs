#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int swapped, swappeld;
  int* swapper;
  
  swapped = 10;
  swappeld = 15;
  swapper = &swappeld;
  
  printf ("%d, %d, %p \n" , swapped, swappeld, swapper);
  
  int* const  PTR_CONST = &swapped;
  
  *PTR_CONST = 347;
  
  printf ("%d, %d, %p \n" , swapped, swappeld, swapper);
  
  
  const int*  PTR_CONST2 = &swapped;
  
  swapped = *swapper;
  
  printf ("%d, %d, %p, %d \n" , swapped, swappeld, swapper, *PTR_CONST2);
  
  return 0;
}