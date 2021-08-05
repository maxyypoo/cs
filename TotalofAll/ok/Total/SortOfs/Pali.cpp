#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int getUserEntry (char [], int);                  //Gets a word from the user
bool findPalindrome (const char [], int, int);          //Checks if the word entered is a palindrome, returns a bool based on findings
void displayPali (const char [], int, bool, int);       //Displays the final info, based on if there is a palindrome or not

int main ()
{
  //Variables
  //Array declaration and a boolian flag
  const int MAX_WORD_SIZE = 20;
  char wordString[MAX_WORD_SIZE];
  bool invalidPalindrome;
  int stringLength;
  
  //Function calls to get user entry and check if palindrome is found
  //If a palindrome is found, boolian flag is set to true as it is returned by the second function
  stringLength = getUserEntry (wordString, MAX_WORD_SIZE);
  invalidPalindrome = findPalindrome (wordString, MAX_WORD_SIZE, stringLength);
  
  //Displays if the entered word was a palindrome
  displayPali (wordString, MAX_WORD_SIZE, invalidPalindrome, stringLength);
  
  return 0;
}

int getUserEntry (char wordString[], int MAX_WORD_SIZE)
{
  int stringLength;
  
  //Input
  cout << "Please enter a word: ";
  cin >> wordString;
  
   stringLength = strlen(wordString);
  
  //Making every letter in the string to lower case
  for (int counter = 0; counter < MAX_WORD_SIZE && counter < stringLength; counter++)
    wordString[counter] = tolower(wordString[counter]);
  
 
  
  return stringLength;
}

bool findPalindrome (const char wordString[], int MAX_WORD_SIZE, int stringLength)
{
  //Variables
  char letterHolder;
  bool invalidPalindrome = false;
  
  //Calculation process
  stringLength--;
  
  //Checking for a palindrome, if the string length is odd the middle letter is ignored; as it doesn't contribute to a palindrome
  for (int counter = 0; counter < (stringLength + 1)/ 2; counter++)
  {
    letterHolder = wordString[counter];
    
    if (letterHolder != wordString[stringLength - counter])
      invalidPalindrome = true;
  }
  
  return invalidPalindrome;
}

void displayPali (const char wordString[], int MAX_WORD_SIZE, bool invalidPalindrome, int stringLength)
{
  //Output
  cout << "The word you entered: '";
  
  for (int counter = 0; counter < MAX_WORD_SIZE && counter < stringLength; counter++)
    cout << wordString[counter];
  
  cout << "' is";
  
  if (invalidPalindrome)
    cout << " not";
  else;
  
  cout << " a palindrome." << endl;
}
/*
[dakpinar@hills SortOfs]$ ./a.out
Please enter a word: daniel
The word you entered: 'daniel' is not a palindrome.
[dakpinar@hills SortOfs]$ ./a.out
Please enter a word: abcdefghijjihgfedcba
The word you entered: 'abcdefghijjihgfedcba' is a palindrome.
[dakpinar@hills SortOfs]$ ./a.out
Please enter a word: Radar
The word you entered: 'radar' is a palindrome.
*/