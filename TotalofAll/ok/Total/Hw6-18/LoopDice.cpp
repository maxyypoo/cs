#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  char repeat;
  int rolls, die, stock = 0, timesRolled = 0;
  const int MIN_VALUE = 1, MAX_VALUE = 6;
  unsigned seed = time(0);
  srand (seed);
  
  do
  {
    cout << "How many rolls?: ";
    cin >> rolls;
  
    if(rolls < 1)
      cout << "Enter valid number." << endl;
    else{
      while(stock < rolls) 
      {
        die = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        cout << die << " ";
        stock++;
      }
      timesRolled += rolls;
      cout << endl;
      cout << "You have rolled " << rolls << " this time." << endl;
      cout << "You have rolled " << timesRolled << " times in total." << endl;
      cout << "Would you like to roll again? Y/N ";
      cin >> repeat;
      stock = 0;
     }
  } while(repeat != 'N' || repeat != 'n');
  
  return 0;
}
/*
How many rolls?: 6
2 1 2 1 3 6
You have rolled 6 this time.
You have rolled 6 times in total.
Would you like to roll again? Y/N y
How many rolls?: 4
2 2 4 1
You have rolled 4 this time.
You have rolled 10 times in total.
Would you like to roll again? Y/N y
How many rolls?: 9
5 5 3 3 5 5 5 1 6
You have rolled 9 this time.
You have rolled 19 times in total.
Would you like to roll again? Y/N n
*/