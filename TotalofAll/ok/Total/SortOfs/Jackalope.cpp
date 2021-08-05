//Filename: Jackalope.cpp
//Description: Calculates the population for a mythical creature
//Assignment: HW7 Jack
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  //Variables
  int jackalopePopulation;
  const float JACKALOPE_BIRTH_RATE_PER_GEN = 0.03;
  const float JACKALOPE_DEATH_RATE_PER_GEN = 0.01;
  int generationsWaited;
  char userChoiceRepeat;
  bool exitStatus = false;
  bool userValidEntry = true;
  
  //Do - while loop for giving the user choice of repeating the process
  do
  {
    //Input
    cout << "How many Jackalope do you have? ";
    cin >> jackalopePopulation;
    cout << "How man generations do you want to wait? ";
    cin >> generationsWaited;
    
    //If Else statement to check if user entered a positive number for both variables
    if (jackalopePopulation < 1 || generationsWaited < 1)
      cout << "Please enter a positive number." << endl;
    else
    {
      //Output
      cout << "If you start with " << jackalopePopulation << " Jackalope and wait " << generationsWaited << " generation(s)," << endl;

      //For loop for calculating new jackpole population after time has passed
      for (int timePassed = 0; timePassed < generationsWaited; timePassed++)
      {
        jackalopePopulation += static_cast<int>(jackalopePopulation * JACKALOPE_BIRTH_RATE_PER_GEN);
        jackalopePopulation -= static_cast<int>(jackalopePopulation * JACKALOPE_DEATH_RATE_PER_GEN);
      }

      cout << "You will end up with " << jackalopePopulation << " Jackalope." << endl;

      //Loop to make sure user has entered Y or N
      do 
      { 
        userValidEntry = true;
        
        //Prompt to repeat
        cout << "Do you want to calculate another population? (Y/N): ";
        cin >> userChoiceRepeat;

        userChoiceRepeat = tolower(userChoiceRepeat);

        if (userChoiceRepeat == 'n')
          exitStatus = true;
        else if (userChoiceRepeat == 'y')
          exitStatus = false;
        //To make sure user enters Y or N, and they don't accidentally enter a random letter
        else
        {
          userValidEntry = false;
          
          cout << "Please enter 'Y' or 'y' for yes, or, 'N' or 'n' for no." << endl;
        }
      }while (!(userValidEntry));
      
    }
    
  }while (!(exitStatus));
  
  return 0;
}
/*
[dakpinar@hills SortOfs]$ ./a.out
How many Jackalope do you have? 200
How man generations do you want to wait? 1
If you start with 200 Jackalope and wait 1 generation(s),
You will end up with 204 Jackalope.
Do you want to calculate another population? (Y/N): y
How many Jackalope do you have? 132
How man generations do you want to wait? 2
If you start with 132 Jackalope and wait 2 generation(s),
You will end up with 137 Jackalope.
Do you want to calculate another population? (Y/N): y
How many Jackalope do you have? 40
How man generations do you want to wait? 100
If you start with 40 Jackalope and wait 100 generation(s),
You will end up with 291 Jackalope.
Do you want to calculate another population? (Y/N): h
Please enter 'Y' or 'y' for yes, or, 'N' or 'n' for no.
Do you want to calculate another population? (Y/N): n
*/