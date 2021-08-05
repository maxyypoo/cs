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
 
    maxNumber = getNumber();
    displayLetters (maxNumber);
  
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
  wchar_t w = L'.';
  //for loop to itirate through all ascii chars
  for (int i = 0; i < counter; i++)
  {
    std::cout << "\n";
    w += i;
    std::cout << i << ". is " << (wchar_t)w ; 
  }
  
  std::cout << '\n';
}

char getUserChoice ()
{
  char userChoice;
  
  std::cin >> userChoice;
  
  
  return std::tolower(userChoice);
}