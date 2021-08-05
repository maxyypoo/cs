#include <iostream>
using namespace std;

int main()
{
  const int size = 6;
  
  int positionValHolder = 0, smallestHolder, biggestHodler, positionValHolderL, counter = 1;
  int arr[size] = {5, 6, 8, 11, 2, 7};
  int sizeTemp = size;
  
  for (int i = 0; i < (sizeTemp - 1); i++)
  {
    positionValHolder = i;
    smallestHolder = arr[i];
    biggestHodler = arr[i];
    positionValHolderL = i;
    

  for (int k = i + 1; k < sizeTemp; k++)
  {
    if (arr[k] < smallestHolder)
    {
      smallestHolder = arr[k];
      positionValHolder = k;
    }
    if (arr[k] > biggestHodler)
    {
      biggestHodler = arr[k];
      positionValHolderL = k;
    }
  }
    arr[positionValHolder] = arr[i];
    arr[i] = smallestHolder;
    arr[positionValHolderL] = arr[sizeTemp - counter];
    arr[sizeTemp - counter] = biggestHodler;
    counter++;
    sizeTemp--;
  }
  
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  
  return 0;
}