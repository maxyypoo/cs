//Filename: Order.cpp
//Assignment: In class Module 45 7/11
//Description: A program that displays 10 integers that are multiplies based on user entry and swaps the location of 2 of them
#include <iostream>
using namespace std;

void arrayMultiplied (int[], int);    //Takes a multiplier and initializes array
void arrayDisplay (int[], int);       //Displays the contents of the array
void arraySwap (int[], int);          //Swaps the idx positions

int main ()
{
  //Array declaration
  const int Max_Size_Numbers = 10;
  int numbers[Max_Size_Numbers];
  
  //Function calls to initialize, display, shuffle, display
  arrayMultiplied (numbers, Max_Size_Numbers);
  arrayDisplay (numbers, Max_Size_Numbers);
  arraySwap (numbers, Max_Size_Numbers);
  arrayDisplay (numbers, Max_Size_Numbers);
  
  return 0;
}

void arrayMultiplied (int numbers[], int Max_Size_Numbers)
{
  int multiplier;
  
  //Input for the multiplier
  cout << "Enter Multiplier: ";
  cin >> multiplier;
  
  //Initializing the array
  //Every element number gets multiplied by the multiplier and are stored in the array sequentially
  for (int counter = 0; counter < Max_Size_Numbers; counter++)
    numbers[counter] = counter * multiplier;
}

void arrayDisplay (int numbers[], int Max_Size_Numbers)
{
  //Display process -- using a range based for loop
  for (int counter = 0; counter < Max_Size_Numbers; counter++)
    cout << numbers[counter] << " ";
  cout << endl;
}

void arraySwap (int numbers[], int Max_Size_Numbers)
{
  //Variables that hold indx and indx location based on user entry
  int holdIdx1, holdIdx2;
  int swapIdx1, swapIdx2;
  
  //User location entry
  cout << "Enter 2 indexes to swap: ";
  cin >> swapIdx1 >> swapIdx2;
  
  //Turning user entry into array element numbers
  swapIdx1 -= 1;
  swapIdx2 -= 1;
  
  //Swapping process
  holdIdx1 = numbers[swapIdx1];
  holdIdx2 = numbers[swapIdx2];
  
  numbers[swapIdx1] = holdIdx2;
  numbers[swapIdx2] = holdIdx1;
}
/*
dakpinar@hills Hw7-11]$ ./a.out
Enter Multiplier: 3
0 3 6 9 12 15 18 21 24 27
Enter 2 indexes to swap: 1 6
15 3 6 9 12 0 18 21 24 27
*/