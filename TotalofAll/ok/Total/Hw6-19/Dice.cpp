/*
Filename: Dice.cpp
Assignemtn: Streaming input adv 6/19
Description: A dice roller made with do and while loops
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int main()
{
  //Variables
  int rollsToDo = 0, stock = 0;
  char userChoice;
  srand(time(0));
  
  //Processing
    do{
      //Input Prompt for the dice amount
      cout << "Enter the amount of dice you would like to roll: ";
      cin >> rollsToDo;
      if(rollsToDo < 1)      //Validation
        cout << "Enter valid amount of dice rolls." << endl;
      else
      cout << "Your roll is: ";
      
      //Looping process to roll dies
      while (stock < rollsToDo)     
      {
        cout << rand() % 6 + 1 << ' ';
        stock++;
      }
      cout << endl;
      cout << "Want to play again? Y/N: ";
      stock = 0;
      cin >> userChoice;
    }while(tolower(userChoice) != 'n' || tolower(userChoice) == 'y');      //Loop all the way to start
 
    return 0;
}
/*
dakpinar@hills Hw6-19]$ ./a.out
Enter the amount of dice you would like to roll: 10
Your roll is: 6 3 5 5 3 3 2 1 6 2
Want to play again? Y/N: y
Enter the amount of dice you would like to roll: 2
Your roll is: 6 4
Want to play again? Y/N: n
*/