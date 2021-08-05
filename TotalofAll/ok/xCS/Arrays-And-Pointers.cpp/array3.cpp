#include <iostream>
#include <stdlib.h>
using namespace std ;


int main(int argc, char** args)
{
    int** TwoDimArray ;
    const int ROW_COUNT = 5 ;
    int counter = 0, total = 0;

    TwoDimArray = new int*[ROW_COUNT] ;

    for(int i1=0 , i2=1, k1=1 ;        i1<ROW_COUNT ;    i1++, i2++ )
      {
         TwoDimArray[i1] =  new int[i2] ;
          for( int j1=0 ; j1<i2 ; j1++ )
            {
                TwoDimArray[i1][j1] = k1++ ;
            }

      } //for

   //print contents  of the 2 dimensional array
  
  for (int i = 0; i < ROW_COUNT; i++)
  {
    while (counter <= i) {
      cout << TwoDimArray[i][counter] << " ";
      
      counter++;
    }
    cout << endl;
    counter = 0;
  }
  
  cout << endl;
  
   //Print row sums
  
  for (int i = 0; i < ROW_COUNT; i++)
  {
    while (counter <= i) {
      total += TwoDimArray[i][counter];
    
      counter++;
    }
    cout << total << " ";
    cout << endl;
    counter = 0;
    total = 0;
  }
  
  cout << endl;
  
  //Print column sums
  
  for (int i = 0; i < ROW_COUNT; i++)
  {
    while (counter < ROW_COUNT) {
      total += TwoDimArray[counter][i];

      counter++;
    }
    cout << total << " ";
    cout << endl;
    counter = 0;
    total = 0;
  }

  delete[] TwoDimArray;

  return(0) ;
}