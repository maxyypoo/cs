//Filename: DeDup.cpp
//Assignment: Hw 12 De-Dup
//Description: Takes in 10 numbers, and displays all the unique entries
#include <iostream>
#include <cstring>
using namespace std;

int getArray (int [], int);                //Gets the 10 numbers and only stores non duplicates
void displayArray (int [], int, int);      //Displays the unique numbers and amount of unique numbers

int main ()
{
  const int MAX_ARRAY_SIZE = 10;
  int numbers[MAX_ARRAY_SIZE];
  int arrayLength;
  
  arrayLength = getArray (numbers, MAX_ARRAY_SIZE);
  displayArray (numbers, MAX_ARRAY_SIZE, arrayLength);

  return 0;
}

int getArray (int numbers [], int MAX_ARRAY_SIZE)
{
  //Variables
  int numberHolder;
  bool duplicateFound;
  int rangeHolder;
  int arrayLength = 0;
  
  cout << "Please enter 10 integers, hitting return after each one: " << endl;
  
  rangeHolder = MAX_ARRAY_SIZE;
  
  //For process to check all entries and compare to user input
  //Try to find if there is any duplicates
  for (int counter = 0; counter < rangeHolder; counter++)
  {
    duplicateFound = false;
    cin >> numberHolder;
    
    for (int subCounter = 0; subCounter < counter; subCounter++)
      if (numberHolder == numbers[subCounter])
        duplicateFound = true;
    
    if (!duplicateFound)
    {
      //As long as unique numbers are entered, it writes the number to array
      //It also counts how many unique numbers were entered
      numbers[counter] = numberHolder;
      arrayLength++;
    }
    else
    {
      //If a duplicate is entered, it stays in the same iteration and reduces the range by one
      //This is to create a backspace like effect, removing a space from the array which is now uninitialized
      //Of course no space is actually removed, it simply makes sure the arrayLength variable has its potential highest value lessened by one
      counter--;
      rangeHolder--;
    }
  }
  
  return arrayLength;
}

void displayArray (int numbers [], int MAX_ARRAY_SIZE, int arrayLength)
{
  //Output
  cout << "You entered " << arrayLength << "" << " distinct numbers: " << endl;
  
  for (int counter = 0; counter < arrayLength; counter++)
    cout << numbers[counter] << " ";
  
  cout << endl;
}
/*
[dakpinar@hills SortOfs]$ ./a.out j
Please enter 10 integers, hitting return after each one:
1
2
3
4
5
6
8
5
2
3
You entered 7 distinct numbers:
1 2 3 4 5 6 8
[dakpinar@hills SortOfs]$ ./a.out j
Please enter 10 integers, hitting return after each one:
100
56
34
89
0
23
45
34
100
98
You entered 8 distinct numbers:
100 56 34 89 0 23 45 98
*/