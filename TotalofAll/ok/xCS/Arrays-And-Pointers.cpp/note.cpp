#include <iostream>

using namespace std;

int main ()
{
  const int MAX_SIZE = 5;
  int array [MAX_SIZE];
  int array2 [4];
  int holderFirst, holderLast;
  
  for (int i = 0; i < MAX_SIZE; i ++) 
    array[i] = i + 1;
  for (int i = 0; i < 4; i ++)
    array2[i] = i + 2;
  
  for (int i = 0; i < MAX_SIZE / 2; i++)
  {
    holderFirst = array[i];
    holderLast = array[(MAX_SIZE - 1) - i];
    array [i] = holderLast;
    array [(MAX_SIZE - 1) - i] = holderFirst;
  }
  
   for (int i = 0; i < 4 / 2; i++)
  {
    holderFirst = array2[i];
    holderLast = array2[(4 - 1) - i];
    array2 [i] = holderLast;
    array2 [(4 - 1) - i] = holderFirst;
  }
  
  cout << "array" << endl;
   for (int i = 0; i < MAX_SIZE; i ++)
    cout << array[i] << " ";
  cout << "\n" << "array 2 " << endl;
  for (int i = 0; i < 4; i ++)
    cout << array2[i] << " ";
  
  return 0;
}