//Filename: Deck.cpp
//Assignment: In class Module 44 - 7/11
//Description: Shuffles the contents of a description
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void viewDeck (const char[]);        //prints the current output of deck
void shuffle (char[]);               //Shuffles the contents of the deck

int main ()
{
  //Deck Array
  char deck[] = {'2','3','4','5','6','7','8','9','t','j','q', 'k', 'a'};
  
  //Function calls to view deck, shuffle it and view again 
  viewDeck(deck);
  shuffle(deck);
  viewDeck(deck);
  
  return 0;
}

void viewDeck (const char deck[])
{
  //loop to view contents of the array
  //since the range is known to us I use an integer literal
  for (int counter = 0; counter < 13; counter++)
    cout << deck[counter] << ", ";
  
  cout << endl;
}

void shuffle (char deck[])
{
  //Variables to hold the contents of array elements
  char holdIdx1, holdIdx2;
  int idxRndPosition;           //This variable holds a random loation to be used in the shuflle process
  
  srand(time(0));              //Randomizer
  
  //Shuffle Process
  for (int counter = 0; counter < 13; counter++)
  {
    idxRndPosition = rand() % 13;
    
    holdIdx1 = deck[counter];
    holdIdx2 = deck[idxRndPosition];
    
    deck[counter] = holdIdx2;
    deck[idxRndPosition] = holdIdx1;
  } 
}
/*
dakpinar@hills Hw7-11]$ ./a.out
2, 3, 4, 5, 6, 7, 8, 9, t, j, q, k, a,
q, 4, 9, 5, t, j, 8, k, 6, 2, 3, a, 7,
[dakpinar@hills Hw7-11]$ ./a.out
2, 3, 4, 5, 6, 7, 8, 9, t, j, q, k, a,
6, 9, t, 7, 4, k, a, q, 3, 8, 5, 2, j,
[dakpinar@hills Hw7-11]$ ./a.out
2, 3, 4, 5, 6, 7, 8, 9, t, j, q, k, a,
k, 7, 9, 8, j, 4, a, 2, 5, q, 6, 3, t,
*/