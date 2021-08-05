#include <iostream>
using namespace std;

// Sets all of the elements of the array to blank spaces
void clear(char b[][3]);

// Display the current status of the board on the
// screen, using hyphens (-) for horizontal lines
// and pipes (|) for vertical lines.
void display(const char b[][3]);

// Allow the nextPlayer to take a turn.
// Send output to screen saying whose turn
// it is and specifying the format for input.
// Read user's input and verify that it is a
// valid move.  If it's invalid, make them
// re-enter it.  When a valid move is entered,
// put it on the board.
void takeTurn(char b[][3], char& nextPlayer);

// Examines the board and returns one of the following:
// ' ' (a space) meaning the game is not yet over
// 'X' meaning that player X has won
// 'O' meaning that player O has won
// '?' meaning that the game is over because the board
//     is full, but no one won.
char winner(char board[][3]);

int main()
{
  char board[3][3];
  char nextPlayer;
  char winningPlayer;

  clear(board);
  nextPlayer = 'X';
  display(board);
  do
  {
    takeTurn(board, nextPlayer);
    display(board);
    winningPlayer = winner(board);
  }while(winningPlayer == ' ');

  if (winningPlayer == '?')
    cout << "Nobody won. Please play again.\n";
  else
    cout << "Congratulations, " << winningPlayer << " YOU WON!\n";

  return 0;
}

void clear (char b[][3])
{
  //For loop to 'clear' the board
  //Sets all elements to empty spaces
  for (int counter = 0; counter < 3; counter++)
    for (int subCounter = 0; subCounter < 3; subCounter++)
      b[counter][subCounter] = ' ';
}

void display(const char b[][3])
{
  cout << endl;
  
  //Displays the current status of the board
  for (int counter = 0; counter < 3; counter++)
  {
    cout << b[counter][0] << '|' << b[counter][1] << '|' << b[counter][2] << endl;
    cout << endl;
    if (counter % 2 != 0 || counter == 0)
      cout << "-----" << endl;
    cout << endl;
  }
}

void takeTurn(char b[][3], char& nextPlayer)
{
  //Variables
  //positionAlreadyOccupied and invalidUserInput flags
  //make sure the user enters a valid input
  //idxRow and idxCol hold the initial entries until it is determined
  //that user entered a valid input
  bool invalidUserInput, positionAlreadyOccupied;
  int idxRow, idxCol;
  
  do
  {
    cout << "It is now " << nextPlayer << "'s turn." << endl;
    cout << "Please enter your move in the form row column." << endl;
    cout << "So 1 1 would be the top left, and 1 3 would be the top right." << endl;
    cout << "Your entry : ";
    cin >> idxRow >> idxCol;
    
    idxRow -= 1;
    idxCol -= 1;
    
    positionAlreadyOccupied = b[idxRow][idxCol] != ' ';
    invalidUserInput = idxRow < 0 || idxRow > 2 || idxCol < 0 || idxCol > 2;
    
    cout << endl;
    
    if(invalidUserInput)
    {
      cout << "Invalid entry: row and column must both be between 1 and 3 (inclusive)." << endl;
      cout << "Please try again." << endl;
    }
    else if (positionAlreadyOccupied)
    {
      cout << "Invalid entry: Row " << idxRow + 1 <<  " at Column " << idxCol + 1 <<  " already contains: " << b[idxRow][idxCol] << endl;
      cout << "Please try again." << endl;
    }
    
     cout << endl;
    
    
  }while (invalidUserInput || positionAlreadyOccupied);
  
  b[idxRow][idxCol] = nextPlayer;
  
  //Changes the symbol of the player based on the current symbol
  //Preparing for the nextplayers turn
  if (b[idxRow][idxCol] == 'X')
    nextPlayer = 'O';
  else if (b[idxRow][idxCol] == 'O')
    nextPlayer = 'X';
}

char winner(char board[][3])
{
  bool spaceFound = false;
  char winningPlayer = '?';

  //Checks linear winner
  //First one checks the winner by row
  //Second one checks columns
  for(int i = 0; i < 3 && winningPlayer == '?'; i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
      winningPlayer = board[i][0];
      
    else if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
      winningPlayer = board[0][i];  
  }
  
  //If blanks are found, change it to initial set up
  if (winningPlayer == ' ')
    winningPlayer = '?';
  
  //Checks diagonal winner
  if((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
      winningPlayer = board[1][1];
  
  //If blanks are found, change it to initial set up
  if (winningPlayer == ' ')
    winningPlayer = '?';
  
  
  //Checks all the spaces for a possible move
  //Does it by checking if there are any empty spaces
  for (int counter = 0; counter < 3 && winningPlayer == '?'; counter++)
  {
    for (int subCounter = 0; subCounter < 3 && winningPlayer == '?'; subCounter++)
      if (board[counter][subCounter] == ' ')
        winningPlayer = ' ';
  }
  
  //Returns if the winner is found
  //else if there is any space
  //or no possible moves are left
  return winningPlayer;
 }
/*
[dakpinar@hills SortOfs]$ ./a.out

 | |

-----

 | |

-----

 | |


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 1 1



X| |

-----

 | |

-----

 | |


It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 1 2



X|O|

-----

 | |

-----

 | |


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 2 1



X|O|

-----

X| |

-----

 | |


It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 2 2



X|O|

-----

X|O|

-----

 | |


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 3 1



X|O|

-----

X|O|

-----

X| |


Congratulations, X YOU WON!
[dakpinar@hills SortOfs]$ ./a.out

 | |

-----

 | |

-----

 | |


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 3 1



 | |

-----

 | |

-----

X| |


It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 3 1

Invalid entry: Row 3 at Column 1 already contains: X
Please try again.

It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 23 4

Invalid entry: row and column must both be between 1 and 3 (inclusive).
Please try again.

It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 2 2



 | |

-----

 |O|

-----

X| |


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 3 3



 | |

-----

 |O|

-----

X| |X


It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 3 2



 | |

-----

 |O|

-----

X|O|X


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 2 1



 | |

-----

X|O|

-----

X|O|X


It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 2 3



 | |

-----

X|O|O

-----

X|O|X


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 1 2



 |X|

-----

X|O|O

-----

X|O|X


It is now O's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 1 1



O|X|

-----

X|O|O

-----

X|O|X


It is now X's turn.
Please enter your move in the form row column.
So 1 1 would be the top left, and 1 3 would be the top right.
Your entry : 1 3



O|X|X

-----

X|O|O

-----

X|O|X


Nobody won. Please play again.
*/