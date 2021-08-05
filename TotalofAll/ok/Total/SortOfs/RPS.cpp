//Filename: RPS.cpp
//Description: Rock paper scissors game
//Assignment:  For HW 6 -- Rock Paper Scissors
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
int getUserInput ();               //Gets the choice from the user and returns it as a number
int getComputerChoice ();          //Calculates the randomized computer choice and returns it 
void displayWinner (int, int);     //Finds out the winner and displays it
 
int main ()
{
  //Variables
  bool exitStatus = true;          //Bool for user validation
  srand(time(0));                  //Seed for randomizer
  int computerChoice, userChoice;
  
  //Do-while for user validation -- repeats unit valid input is entered
  do
  {
    exitStatus = true;
    
    //Menu like output -- given info and prompting input
    cout << "Welcome to a game of Rock, Paper Scissors." << endl;
    cout << setw(42) << setfill('-') << "-" << endl;
    cout << setfill(' ') << endl;
    cout << "Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit." << endl;

    //Function calling for user input
    userChoice = getUserInput();
    
    //To make sure do-while continues if invalid input is entered -- see lines 62-86
    if (userChoice == 99)
      exitStatus = false;
    
  }while (!(exitStatus));
  
  
  if(userChoice != 100 && exitStatus)
  {
    //Function calls for random conputer choice and displaying the results
    computerChoice = getComputerChoice();
    displayWinner (userChoice, computerChoice);
  }
  
  return 0;
}

int getUserInput ()
{
  //Variables
  char userChoice;
  int userChoiceConverted;
  
  //Input
  cout << "Please enter your choice: ";
  cin >> userChoice;
  
  //Re-assignment to lower case
  userChoice = tolower(userChoice);
  
  //Switch to determine what user wants and conversion of user input to an int
  switch (userChoice)
  {
    case 'r' :
      cout << "You entered Rock." << endl;
      userChoiceConverted = 1;
      break;
      
    case 'p' :
      cout << "You entered Paper." << endl;
      userChoiceConverted = 2;
      break;
    case 's' :
      cout << "You entered Scissors." << endl;
      userChoiceConverted = 3;
      break;
      
    case 'q' :
      cout << "Quitting..." << endl;
      userChoiceConverted = 100;
      break;
      
    default:
      cout << "Please enter 'R', 'P', 'S' or 'Q'." << endl;
      userChoiceConverted = 99;
  }
  
  return userChoiceConverted;
}

int getComputerChoice ()
{
  int computerChoice;
  
  computerChoice = rand() % 3 + 1;
  
  return computerChoice;
}

void displayWinner (int userChoice, int computerChoice)
{
  int resultOfGame, winningThrow;
  
  resultOfGame = userChoice - computerChoice;
  
  //Process for determining the outcome and outputting the results
  cout << "Computer chose";
   switch (computerChoice)
  {
    case 1 :
      cout << " Rock. ";
       break;
     case 2 :
       cout << " Paper. ";
       break;
     case 3 :
       cout << " Scissors. ";
       break;
  }
  
  switch (resultOfGame)
  {
    case 0 : 
      cout << "You tied!" << endl;
      break;
    case 1 : case -2 :
      cout << "You Win! ";
      winningThrow = userChoice;
      break;
    case -1 : case 2:
      cout << "Computer Wins! ";
      winningThrow = computerChoice;
      break;
  }
  
  switch (winningThrow)
  {
    case 1 :
      cout << "Rock crushes Scissor." << endl;
      break;
    case 2 :
      cout << "Paper covers Rock." << endl;
      break;
    case 3 :
       cout << "Scissors cuts paper." << endl;
      break;
  }
 
  cout << endl;
}
/*
[dakpinar@hills SortOfs]$ ./a.out
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: r
You entered Rock.
Computer chose Paper. Computer Wins! Paper covers Rock.

[dakpinar@hills SortOfs]$ ./a.out
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: s
You entered Scissors.
Computer chose Scissors. You tied!

[dakpinar@hills SortOfs]$ ./a.out
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: p
You entered Paper.
Computer chose Rock. User Wins! Paper covers Rock.

[dakpinar@hills SortOfs]$ ./a.out
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: h
Please enter 'R', 'P', 'S' or 'Q'.
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: q
Quitting...
*/