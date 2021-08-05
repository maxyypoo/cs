#include <iostream>
#include <iomanip>

//This function displays numbers and equivelant ascii chars
void displayLetters (int);

//This function gets the number to count up to it, from the user
int getNumber ();

//This function gets a choice from the user
//If the user wants to display the entire ASCII board, they will say 'Y'
char getUserChoice ();

int main ()
{
  //It holds the counter number
  int maxNumber;
  
  //Output to help user
  std::cout << "This program shows ascii characters up to a number.\n";
  std::cout << "Would you like to display all ascii ? Y/N ";
  
  //Determines if user wants to see a particular ASCII or the whole list
  if (getUserChoice() == 'y')
  {
    //Assigned 126 to display all ASCII
    maxNumber = 126;
    
    displayLetters(maxNumber);
  }

  else
  {
    //Gets user number
    maxNumber = getNumber();

    //Verifies users choice of number
    while (maxNumber > 126 || maxNumber < 0)
    {
      std::cout << "Please enter a number between 0 and 127\n";
      maxNumber = getNumber();
    }

    //If the number user choose is less than the first ascii character
    //Then add 33 to count to that ascii, taking the 33rd character as the first one
    if (maxNumber < 33)
    {
      maxNumber += 33;
    }

    //displays ascii table
    displayLetters (maxNumber);
  }
  return 0;
}

int getNumber ()
{
  int numberHolder;
  
  //gets user's number to count up to
  std::cout << "Please enter the number you'd like to count up to: ";
  std::cin >> numberHolder;
  
  return numberHolder;
}

void displayLetters (int counter)
{
  //for loop to itirate through all ascii chars
  for (int i = 33; i < counter + 1 && i < 127; i++)
  {
    std::cout << "\n";
    std::cout << i << ". is " << static_cast<char>(i); 
  }
  
  std::cout << '\n';
}

char getUserChoice ()
{
  char userChoice;
  
  std::cin >> userChoice;
  
  
  return std::tolower(userChoice);
}