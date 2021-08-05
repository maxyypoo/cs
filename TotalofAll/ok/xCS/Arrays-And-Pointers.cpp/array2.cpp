#include <iostream>
using namespace std ;

/*
The function "computeLongestSequence" prints the longest sequence of a repeating number. If there is more than 1 repeating sequence then
any number can be the answer. The function should print the following for each invocation of the array and size.

Longest repeating number is:  ( repeating number)    with count   ( count of the number)

*/

void computeLongestSequence( int arrayOfNumbers[] , int size )
{
  int tempNum, counter = 1, longNum, totalCount = 1;
  
  tempNum = longNum = arrayOfNumbers[0];
  
  for (int i = 1; i < size; i++)
  {
    if (tempNum == arrayOfNumbers[i])
    {
      counter++;
    }
    else{
      tempNum = arrayOfNumbers[i];
      counter = 1;
    } 
    if (counter > totalCount)
    {
      longNum = tempNum;
      totalCount = counter;
    }
    
  }
   cout << "Longest repeating number is: " << longNum <<   " with count " <<  totalCount << endl;
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
  int arr3[10] = { 2, 2, 2, 2, 5, 6, 6, 3, 3, 3 } ;
  int arr4[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 } ;



  computeLongestSequence( arr1 , SIZE ) ;
  computeLongestSequence( arr2 , SIZE ) ;
  computeLongestSequence( arr3 , SIZE ) ;
  computeLongestSequence( arr4 , SIZE ) ;




    return(0) ;
}