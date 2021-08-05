#include <iostream>
using namespace std ;

/*
The function "computeLongestSequence" prints the longest sequence of a repeating number. If there is more than 1 repeating sequence then
any number can be the answer. The function should print the following for each invocation of the array and size.

Longest repeating number is:  ( repeating number)    with count   ( count of the number)

*/

void computeLongestSequence( int arrayOfNumbers[] , int size )
{
  int tempNum, counter = 0, counter1 = 0, num1;
  bool firstEnterance = true;
  for (int i = 0; i < size; i++)
  {
    tempNum = arrayOfNumbers[i];
      for (int k = 0; k < size; k++){
        if (tempNum == arrayOfNumbers[k] && k != i)
        {
          counter++;
          if (counter >= counter1)
          {
            counter1++;
            num1 = tempNum;
          }
        }
      }
    counter = 0;
  }
  if (counter1 == 0)
    num1 = arrayOfNumbers[0];
  cout << "Longest repeating number is: " << num1 <<   " with count " <<  counter1 << endl;
}


int main()
{
    /*
  int arr5[] = {1 , 2 , 3, 3 };
  computeLongestSequence( arr5 , 4 ) ;
  exit(0);
   */
  const int SIZE=10 ;

  int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
  int arr2[10] = { 1, 2, 3, 3, 3, 3, 7, 7, 9, 10 } ;
  int arr3[10] = { 2, 2, 3, 4, 5, 6, 3, 3, 3, 3 } ;
  int arr4[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 } ;



  computeLongestSequence( arr1 , SIZE ) ;
  computeLongestSequence( arr2 , SIZE ) ;
  computeLongestSequence( arr3 , SIZE ) ;
  computeLongestSequence( arr4 , SIZE ) ;




    return(0) ;
}