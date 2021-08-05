//Filename: DoubleLetter.cpp
//Assignment: In-class 7/2 processing Arrays
//Description: Demo of processing arrays and checking inside of them using for and if statements
#include <iostream>
using namespace std;

int main ()
{
  //Variables
  const int MAX_ARRAY_SIZE = 50;      //Longest word in the english dictionary is 49 words, according to oxford dictionary
  char words[MAX_ARRAY_SIZE];
  bool checkDoubleWords = false;
  
  //Input
  cout << "Enter Word: ";
  cin >> words;
  
  //For loop to go through the Array
  for (int count = 0; count < MAX_ARRAY_SIZE; count++)
  {
    //if statement to check for double words
    if ((words[count] == words[count + 1]) && words[count + 1] != '\0') 
    {
      //bool flag to check off if a double word is found
      checkDoubleWords = true;
      
      //Stop loop if null terminator is reached // Still checks of, if the last two words are doubles but then terminates the loop
      if (words[count] == '\0')
        break;
      
      //Stop loop if double word is found
      if (checkDoubleWords)
        break;
    }
  }
  
  //output
  if (checkDoubleWords)
    cout << "Double word found." << endl;
  else 
    cout << "Double word not found." << endl;
  
  return 0;
}
/*
dakpinar@hills Hw7-2]$ ./a.out
Enter Word: Global
Double word not found.
[dakpinar@hills Hw7-2]$ ./a.out
Enter Word: Bool
Double word found.
[dakpinar@hills Hw7-2]$ ./a.out
Enter Word: Bob
Double word not found.
*/