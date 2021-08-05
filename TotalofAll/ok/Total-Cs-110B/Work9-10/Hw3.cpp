//FileName: Hw3.cpp
//Description: A program that utilizes arrays and for loops to find prime numbers through 2 to 100
//Assignment: Hw3
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>

//Displays which function is doing which process
void displayFunctionName ();

//Uses for loops and modulus to print prime numbers
//Prints prime numbers from 2 to 100
void printPrimeNumbersModulusVer ();

//Uses arrays to mark prime numbers
void printPrimeNumbersSieveOfEratosthenes ();

int main()
{
 
  //Output sequence to display functions and their outputs
  displayFunctionName ();
  
  printPrimeNumbersModulusVer();
  
  std::cout << '\n';
  
  displayFunctionName ();
  
  printPrimeNumbersSieveOfEratosthenes();
  
  std::cout << '\n';
  
  return 0;
}

void displayFunctionName ()
{
  //static int to remember which function is which
  static int functionDecider = 1;
  
  if (functionDecider == 1)
  {
    std::cout << "This is the non Array method for finding prime numbers: " << '\n';
    functionDecider++;
  }
  
  else
    std::cout << "This is the Array method for finding prime numbers: " << '\n';
}





void printPrimeNumbersModulusVer ()
{
  //Bools to set flags -- primeNumberFound checks if there are any prime numbers
  //nonPrimeNumberFound checks if there was any prime numbers found
  //start of sequence bool checks of 0 and 1
  bool primeNumberFound = false, nonPrimeNumberFound = false, startOfSequence = true;
  //highest int this program is supposed to count up to
  int maximumNumber = 100;
  
  //For loop to find Prime numbers through the use of modulus and bool flags
  for (long long int i = 2; i < maximumNumber + 1; i++)
  {
    //resetting bool flags
    primeNumberFound = false;
    nonPrimeNumberFound = false;
    
    for (int k = 2; k < i && !primeNumberFound && !nonPrimeNumberFound || startOfSequence; k++)
    {
      if (i == 2)
      {
        startOfSequence = false;
        std::cout << i << " ";
      }
      else if (i % k != 0)
      {
        if (k == (i - 1))
        {
          primeNumberFound = true;
          std::cout << i << " ";
        }
      }
      else if (i % k == 0)
        nonPrimeNumberFound = true;
    }
  }
}

void printPrimeNumbersSieveOfEratosthenes ()
{
  //Array declaration and setting bool flags
  const int MAX_ARRAY_SIZE = 101;
  int primeNumberLocater[MAX_ARRAY_SIZE];
  bool zeroOrOneFound = false;
  
  //array initialization -- all elements to 0
  for (int i = 0; i < MAX_ARRAY_SIZE; i++)
    primeNumberLocater[i] = 0;
  
  //for loop to find prime numbers
  for (int i = 0; i < MAX_ARRAY_SIZE; i++)
  {
    //bool flag reset
    zeroOrOneFound = false;
    
    //if structure to check off 1 and 0
    if (i == 0 || i == 1)
    {
      primeNumberLocater[i] = 1;
      zeroOrOneFound = true;
    }
    
    //finds and initializes non prime numbers to 1
    for (int k = 2; i * k < MAX_ARRAY_SIZE && k < MAX_ARRAY_SIZE && !zeroOrOneFound; k++)
      primeNumberLocater[k * i] = 1;
  }
  
  //Weeds out all non prime numbers by checking only 0's
  //Prints the prime numbers to screen
  for (int i = 0; i < MAX_ARRAY_SIZE; i++)
    if (primeNumberLocater[i] == 0)
      std::cout << i << " ";
}
/*
[dakpinar@hills Work9-10]$ ./a.out
This is the non Array method for finding prime numbers:2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
This is the Array method for finding prime numbers:2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/