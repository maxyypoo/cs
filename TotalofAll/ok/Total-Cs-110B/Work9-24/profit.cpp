#include <iostream>
#include <cstring>

using namespace std;

int solution (int arrayOfStock[], int LARGEST_INT)
{
  int bigger, smaller, bigCounter = 0, smallerCounter = 0, profit = 0;
  
  smaller = arrayOfStock[0];
  
  for (int i = 1; i < 6; i++)
  {
     
    if (smaller > arrayOfStock[i]){
      smaller = arrayOfStock[i];
    }
    if (arrayOfStock[i] - smaller > profit)
      profit = arrayOfStock[i] - smaller;
    
  }
  if (profit > 0)
    return profit;
  else 
    return 0;
}


int main ()
{
  const int LARGEST_INT = 10000;
  int arrayOfStock [6], profit;
  
  arrayOfStock [0] = 71;
  arrayOfStock [1] = 11;
  arrayOfStock [2] = 23;
  arrayOfStock [3] = 66;
  arrayOfStock [4] = 13;
  arrayOfStock [5] = 16;
  
  
  profit = solution (arrayOfStock, LARGEST_INT);
  
  cout << "Profit is: $" << profit << endl;
  
  return 0;
}