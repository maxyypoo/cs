//Filename: Arrays.cpp
//Assignment: M44 Arrays as function arguments - 7/9
//Description: A program that finds duplicates by using arrays and functions
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getUserInput (char [], int);          //Gets the word from the user
bool findFirstDuplicate (char [], int);    //Finds if the first letter is ever repeated
bool findAnyDuplicate (char[], int);       //Finds if any word is repeated

int main ()
{
  //Variables
  const int MAX_ARRAY_SIZE = 49;
  char userWordInput[MAX_ARRAY_SIZE];
  bool duplicateFound = false;
  
  //Function call -- gets a c string from the user
  getUserInput(userWordInput, MAX_ARRAY_SIZE);
  
  //Output
  cout << endl;
  cout << "Duplicate ";
  
  //Decision process for determining if there is duplicates
  if (findFirstDuplicate (userWordInput, MAX_ARRAY_SIZE) || findAnyDuplicate (userWordInput, MAX_ARRAY_SIZE));
  else 
    cout << "not ";
  cout << "found." << endl;
  
  return 0;
}

void getUserInput (char userWordInput[], int MAX_ARRAY_SIZE)
{
  //Input
  cout << "Enter a Word: ";
  cin >> userWordInput;
  cout << "You entered the Word: ";
  
  //Outputting the word user entered
  for (int count = 0; count < MAX_ARRAY_SIZE && userWordInput[count] != '\0'; count++)
    cout << userWordInput[count];
  
  //Making all letters lower case to compare them
  for (int count = 0; count < MAX_ARRAY_SIZE && userWordInput[count] != '\n'; count ++)
    userWordInput[count] = tolower(userWordInput[count]);
}

  bool findFirstDuplicate (char userWordInput[], int MAX_ARRAY_SIZE)
  {
    //Variables and flags
    char firstLetter;
    
    bool duplicateFound = false;
    
    //Setting a variable that holds the first letter
    firstLetter = userWordInput[0];
    
    //Loop to find duplicates
    for(int count = 1; userWordInput[count] != '\0' && !duplicateFound && count < MAX_ARRAY_SIZE; count++)
      duplicateFound = userWordInput[count] == firstLetter;
    
    
    return duplicateFound;
  }

bool findAnyDuplicate (char userWordInput[], int MAX_ARRAY_SIZE)
{
  //variables and flags
  bool duplicateFound = false;
  int count = 0;
  int nextElement;
  
  //Loop to find duplicates
  while (userWordInput[count] != '\0' && !duplicateFound)
  {
    nextElement = count + 1;
    
    while (!duplicateFound && userWordInput[nextElement] != '\0')
    {
      duplicateFound = userWordInput[count] == userWordInput[nextElement];
      nextElement++;
    }
    count++;
  }
          
  return duplicateFound;
}
/*
dakpinar@hills Hw7-9]$ ./a.out
Enter a Word: Chimichanga
You entered the Word: Chimichanga
Duplicate found.
[dakpinar@hills Hw7-9]$ ./a.out
Enter a Word: Hayir
You entered the Word: Hayir
Duplicate not found.
[dakpinar@hills Hw7-9]$ ./a.out
Enter a Word: Kulak
You entered the Word: Kulak
Duplicate found.
*/