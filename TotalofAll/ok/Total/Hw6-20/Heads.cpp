/*
Filename: Heads.cpp
Description: Coin tosser, utilizing void data type and for loop.
Assignment: Functions 03 6/20.
*/
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Funcion Prototype
void randDiceRoller(int);

//Main Function
int main()
{
  //Variables
  int coinToss, stockNumber, coinValue;
  bool headsOrTails = false;
  //Random Seed
  srand(time(0));
  
  //Asking for user input
  cout << "How many times would you like to roll the dice? ";
  cin >> coinToss;
  
  //Boolian Flag for validation
  headsOrTails = coinToss < 1;
  
  //If validation
  if (headsOrTails)
    cout << "Please enter a positive number." << endl;
  else
  {
    //For loop for outputting randomized coin toss
    for (stockNumber = 0; stockNumber < coinToss; stockNumber++)
    {
      randDiceRoller(coinValue);
    }
  }
  //Line break
  cout << endl;
  
  return 0;
}

//Randomizer function
void randDiceRoller(int coinValue)
{ 
  coinValue = (rand() % 2 + 1);
  if (coinValue == 1)
    cout << "Heads ";
  else if (coinValue == 2)
    cout << "Tails ";
  //Trailing else to check for error
  else 
    cout << "Error " << coinValue;
}
/*
dakpinar@hills Hw6-20]$ ./a.out
How many times would you like to roll the dice? 0Please enter a positive number.

[dakpinar@hills Hw6-20]$ ./a.outHow many times would you like to roll the dice? 10
Heads Heads Heads Tails Tails Tails Heads Tails Heads Heads
*/




