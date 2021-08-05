//Filename: Blackjack.cpp
//Assignment: M40 BlackJack 7/10
//Description: A blackjack total card value calculator based on user input
#include <iostream>
#include <iomanip>
using namespace std;

int get_input(); //Get input from user and return score
bool verifyCardNum(int num); // Show error and return false if invalid # of cards
int get_card(int card_num, bool& ace_seen);  // get one card's value, returning it and setting ace_seen if necessary
void disp_results(int total); //Show score to user

int main()
{
  //Variables
  int total;
  char again;

  //Output
  cout << "\nWelcome to the Blackjack Counter.\n";

  //Repeat Menu
  do
  {
    total = get_input();

    disp_results(total);

    cout << "\n\nDo you wish to continue?\n";
    cout << "Enter 'Y' (Yes) or 'N' (No): ";
    cin  >> again;
  } while (again == 'Y' || again == 'y');

  return 0;
} //End of Main Function

int get_input ()
{
  //variables
  int card_num;
  int num;
  bool ace_seen = false;
  int cardTotal = 0, cardInitial = 0;
  
  //User input validation process
  do
  {
    cout << "How many cards do you have? ";
    cin >> card_num;
    
    num = card_num;
  
    if(verifyCardNum(num))
      cout << "You must have between 2 and 5 cards (inclusive)" << endl;
    
  }while (verifyCardNum(card_num));
  
  //Loop to calculate total score 
  for (int count = 0; count < card_num; count++)
  {
    cout << "Enter value of card # " << count + 1 << ": ";
    cardInitial = get_card(card_num, ace_seen);
    
    //Decision structure to determine if there is faulty card name -- see lines 106-109
    if (cardInitial == 0)
      count--;
    else
      cardTotal += cardInitial;
  }
  //Deciding if we add ace as 11 or 1
  if (ace_seen && cardTotal <= 11)
    cardTotal += 10;
   
  return cardTotal;
}

bool verifyCardNum (int num)
{
  //Flag function to detect invalid card amount
  bool invalidUserEntry;
  
  if (num > 5 || num < 2)
    invalidUserEntry = true;
  else 
    invalidUserEntry = false;
  
  return invalidUserEntry;
}

int get_card (int card_num, bool& ace_seen)
{
  //Variables
  char cardEntry;
  int cardValue = 0;
  
  //Input
  cin >> cardEntry;
  cardEntry = tolower(cardEntry);

  //Determining cards worth
  switch(cardEntry)
  {
    case '2' : case '3' : case '4' : case '5' : case '6' : case '7' : case '8' : case '9' :
      cardValue = cardEntry - '0';
      break;
    case 't' : case 'j' : case 'k' : case 'q' :
      cardValue = 10;
      break;
    case 'a' :
      cardValue = 1;
      ace_seen = true;
      break;
    default:
      cout << "Not a valid entry. Please try again." << endl;
      cardValue = 0;
      break;
  }
   
  return cardValue;
}

void disp_results (int total)
{
  //Output
  if (total <= 21)
    cout << "Your hand is " << total << endl;
  else
    cout << "You BUSTED with " << total << endl;
}
/*
dakpinar@hills Hw7-10]$ ./a.out

Welcome to the Blackjack Counter.
How many cards do you have? 1
You must have between 2 and 5 cards (inclusive)
How many cards do you have? 6
You must have between 2 and 5 cards (inclusive)
How many cards do you have? 3
Enter value of card # 1: a
Enter value of card # 2: g
Not a valid entry. Please try again.
Enter value of card # 2: k
Enter value of card # 3: a
Your hand is 12


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): n
*/