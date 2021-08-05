//file: BlackJack.cpp
//assignment: CS110A, M40: BlackJack
//description: Using the following main function and output examples, your group is to create a blackjack counting tool by creating the functions described in the prototypes included. 

#include <iostream>

using namespace std;

int get_input(); //Get input from user and return score
bool verifyCardNum(int num); // Show error and return false if invalid # of cards
int get_card(int card_num, bool& ace_seen);  
// get one card's value, returning it and setting ace_seen if necessary
void disp_results(int total); //Show score to user

int main()
{
   int total;
   char again;

   do
   {
     cout << "\nWelcome to the Blackjack Counter.\n";
     
     total = get_input();

     disp_results(total);

     cout << "\n\nDo you wish to continue?\n";
     cout << "Enter 'Y' (Yes) or 'N' (No): ";
     cin  >> again;
   } while (again == 'Y' || again == 'y');

   return 0;
} //End of Main Function

int get_input()
{
  int num;
  char card_num;
  int total = 0;
  bool ace_seen = false;
  do
  {
    cout << "How many cards do you have? ";
    cin >> num;
    
    verifyCardNum(num);
    
    if(verifyCardNum(num) == false)
      cout << "You must have between 2 and 5 cards (inclusive)"<< endl;
    
  }while(verifyCardNum(num) == false);
    
  for(int i = 1; i <= num; i++)
  {
    cout << "Enter value of card # " << i <<": ";
    cin >> card_num;
    
    card_num = get_card(card_num, ace_seen);
    
    if(card_num == 0)
      i--;
    
    total += card_num;
  }
  
  if(total <= 11 && ace_seen == true)
    total += 10;
  
  return total;
}

bool verifyCardNum(int num)
{
  if(num >= 2 && num <=5)
    return true;
  else 
    return false;
}

int get_card(int card_num, bool& ace_seen)
{
  char lowercase_card_num;
  lowercase_card_num = tolower(card_num);
  switch(lowercase_card_num)
  {
    case 'a':
      ace_seen = true;
      card_num = 1;
      break;
    case 't': case 'j': case 'q': case 'k':
      card_num = 10;
      break;
    case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
      card_num = lowercase_card_num - '0';
      break;
    default:
      cout << "Not a valid entry. Please try again."<< endl;
      card_num = 0;
      break;
  }
  return card_num;
}

void disp_results(int total)
{
  if(total<=21)
    cout << "Your hand is:" << total << endl;
  else
    cout << "You BUSTED with " << total << "!" << endl;
}

/*
[yliu270@hills Hw]$ g++ BlackJack.cpp
[yliu270@hills Hw]$ ./a.out

Welcome to the Blackjack Counter.
How many cards do you have? 2
Enter value of card # 1: q
Enter value of card # 2: a
Your hand is:21


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y

Welcome to the Blackjack Counter.
How many cards do you have? 3
Enter value of card # 1: t
Enter value of card # 2: q
Enter value of card # 3: a
Your hand is:21


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y

Welcome to the Blackjack Counter.
How many cards do you have? 3
Enter value of card # 1: 8
Enter value of card # 2: 8
Enter value of card # 3: 8
You BUSTED with 24!


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y

Welcome to the Blackjack Counter.
How many cards do you have? 3
Enter value of card # 1: t
Enter value of card # 2: g
Not a valid entry. Please try again.
Enter value of card # 2: t
Enter value of card # 3: a
Your hand is:21


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y

Welcome to the Blackjack Counter.
How many cards do you have? 1
You must have between 2 and 5 cards (inclusive)
How many cards do you have? 7
You must have between 2 and 5 cards (inclusive)
How many cards do you have? 3
Enter value of card # 1: a
Enter value of card # 2: a
Enter value of card # 3: k
Your hand is:12


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): n
[yliu270@hills Hw]$
*/