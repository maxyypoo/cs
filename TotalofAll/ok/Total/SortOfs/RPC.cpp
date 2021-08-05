//For HW 6 -- Rock Paper Scissors
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Function Prototypes
int getUserInput ();
int getComputerChoice ();
void displayWinner (int, int);

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
  
  //Function calls for random conputer choice and displaying the results
  computerChoice = getComputerChoice();
  displayWinner (userChoice, computerChoice);
  
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
      exit(0);
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
  //Process for determining the outcome and outputting the results
  switch (computerChoice)
  {
    case 1 :
      cout << "Computer chose Rock.";
      if (userChoice == 1)
        cout << " You tied!!";
      else if (userChoice == 2)
        cout << " You win!! Paper Covers Rock!!";
      else if (userChoice == 3)
        cout << " You lose! Rock crushes Scissors!!";
      break;
      
    case 2 :
      cout << "Computer chose Paper.";
      if (userChoice == 1)
        cout << " You lose!! Paper Covers Rock!!";
      else if (userChoice == 2)
        cout << " You tied!!";
      else if (userChoice == 3)
        cout << " You Win!! Scissors tears the Paper apart!!";
      break;
      
    case 3 :
      cout << "Computer chose Scissors.";
      if (userChoice == 1)
        cout << " You win! Rock crushes Scissors!!";
      else if (userChoice == 2)
        cout << " You lose! Scissors tears the Paper apart!!";
      else if (userChoice == 3)
        cout << " You tied!!";
      break;
      
    default:
      cout << "ERROR!!!!" << endl;
  }
  
  cout << endl;
}
/*
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: r
You entered Rock.
 Computer chose Rock. You tied!!
[dakpinar@hills SortOfs]$ ./a.out
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: s
You entered Scissors.
 Computer chose Rock. You lose! Rock crushes Scissors!!
[dakpinar@hills SortOfs]$ ./a.out
Welcome to a game of Rock, Paper Scissors.
------------------------------------------

Enter 'R' for Rock, 'P' for Paper, 'S' for Scissors or 'Q' to quit.
Please enter your choice: q
Quitting...
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