// Filename: LoopDice.cpp
// Description: A random dice roller that utilizes loops
// Assignment: Looping 07 In-Class 6.26
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
  //Variables
  char repeat;
  int rolls, die, subtotal;
  //int timesRolled = 0;          //Uncomment to keep track of total times dice is rolled -- need to uncomment line 50-54 as well
  int grandTotal = 0;
  unsigned seed = time(0);
  
  //Random seed
  srand (seed);
  
  //Do loop process
  do
  {
    //Input
    cout << "How many rolls?: ";
    cin >> rolls;
    
    //User entry validation
    if(rolls < 1)
      cout << "Enter valid number." << endl;
    else{
      
      //Subtotal variable initialization for later use
      subtotal = 0;
      
      //For loop for rolling random dice
      for(int stock = 0; stock < rolls; stock++) 
      {
        die = (rand() % 6) + 1;
        cout << die << " ";
        subtotal = subtotal + die; 
      }
      
      //Grandtotal calculation
      grandTotal += subtotal;
      
      cout << endl;
      
      // Uncomment to keep track of number of times dice is rolled -- Need to uncomment line 14 as well
      /*
      cout << "You have rolled " << rolls << " this time." << endl;
      timesRolled += rolls;
      cout << "You have rolled " << timesRolled << " times in total." << endl; 
      */
      
      //Output
      cout << "Subtotal: \t" << subtotal << endl;
      cout << "Grand total: \t" << grandTotal << endl;
      
      //Repeat prompt
      cout << "Would you like to roll again? Y/N ";
      cin >> repeat;
     }
  } while(repeat == 'Y' || repeat == 'y');
  
  return 0;
}
/*
dakpinar@hills Hw6-26]$ ./a.out
How many rolls?: 5
1 1 5 1 3
Subtotal:       11
Grand total:    11
Would you like to roll again? Y/N y
How many rolls?: 9
6 6 2 3 6 4 4 6 2
Subtotal:       39
Grand total:    50
Would you like to roll again? Y/N y
How many rolls?: 4
5 5 2 4
Subtotal:       16
Grand total:    66
Would you like to roll again? Y/N n
*/