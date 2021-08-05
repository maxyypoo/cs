// Filename: Ages.cpp
// Assignment: In-Class 7/2 Arrays Intro
// Description: A simple demo of arrays, outputing text with for loop.
#include <iostream>
using namespace std;

int main()
{
  const int SIZE_OF_ARRAY = 5;
  int agesInputFromUser[SIZE_OF_ARRAY];
  
  cout << "Please enter 5 ages: ";
  
  for (int count = 0; count < SIZE_OF_ARRAY; count++)
   cin >> agesInputFromUser[count];
  
  cout << "Ages you entered are: ";
  
  for (int count = SIZE_OF_ARRAY; count > 0; count--)
  {
    cout << agesInputFromUser[count-1] << " ";
  }
  
  cout << endl;
  
  return 0;
}
/*
dakpinar@hills Hw7-2]$ ./a.out
Please enter 5 ages: 3 6 9 8 7
Ages you entered are: 7 8 9 6 3
*/