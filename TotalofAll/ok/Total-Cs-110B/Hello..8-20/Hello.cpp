#include <iostream>
#include <ctime>
#include <cmath>

void displayHello ();
int executeOrder66 ();

int main ()
{
  int randomNumberOfFate, ultimateDecider;
  srand(time(0));

  ultimateDecider = 0;
  randomNumberOfFate = rand () % 2;

  if (randomNumberOfFate > 0)
    displayHello ();
  else if (randomNumberOfFate == 0)
    ultimateDecider = executeOrder66 ();

  if (ultimateDecider == 1201)
    std::cout << "You win!!\n";
  
     
  return 0;
}

void displayHello ()
{
  std::cout << "Hello World\n";
  std::cout << '\n';
}

int executeOrder66 ()
{
  int randomNumberOfDeath = 0;
  int numberHolder = 0;
  srand(time(0));
  
  std::cout << "The World will end!!!!!\n";
  std::cout << '\n';
  
  randomNumberOfDeath = rand () % 1241;
  numberHolder = randomNumberOfDeath;
  
  while (randomNumberOfDeath--)
    std::cout << "HAHAHAHA ";
  
  std::cout << '\n';
  std::cout << '\n' << numberHolder;
  std::cout << '\n';
  std::cout << '\n';
  
  return numberHolder;
}