/*
Student ID#: W12512202
Filename: Ages.cpp
Description: A program that checks if 2 people are between a certain age group, using boolean operators and flags.
Assignment: Hw 6/14 - Decisions 5&6
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Variables and Flags
  unsigned int age1, age2;
  string name1, name2;
  bool isAge1Between = false;
  bool isAge2Between = false;
  bool age1OvAge2Bet = false;
  
  //Input
  cout << "Please enter first persons name: ";
  cin >> name1;
  cout << "Please enter first persons age: ";
  cin >> age1;
  cout << "Please enter second persons name: ";
  cin >> name2;
  cout << "Please enter second persons age: ";
  cin >> age2;
  
  //Initializiation
  if(age1 < 65 && age1 > 18) 
    isAge1Between = true;
  if(age2 < 65 && age2 > 18)
    isAge2Between = true;
  if(age1 > 65 && isAge2Between)    //This was to test if this is an easier way of setting if statements or not. Inconclusive.
    age1OvAge2Bet = true;
  
  //If proccessing
  if(age1 < 18 && age2 < 18)
    cout << "Neither person is between ages of 18 and 65." << endl;
  else if(age1 > 65 && age2 < 18)
    cout << "Neither person is between ages of 18 and 65." << endl;
  else if(age1 < 18 && age2 > 65)
    cout << "Neither person is between ages of 18 and 65." << endl;
  else if(age1 > 65 && age2 > 65)
    cout << "Neither person is between ages of 18 and 65." << endl;
  else if(isAge2Between && isAge1Between)
    cout << "Both of them are between ages of 18 and 65" << endl;
  else if(age1OvAge2Bet)
    cout << name2 << " is between ages of 18 and 65 but " << name1 << " is not." << endl;
  else if(isAge1Between && age2 > 65)
    cout << name1 << " is between ages of 18 and 65 but " << name2 << " is not." << endl;
  else if(isAge2Between && age1 < 18)
    cout << name2 << " is between ages of 18 and 65 but " << name1 << " is not." << endl;
  else if(isAge1Between && age2 < 18)
    cout << name1 << " is between ages of 18 and 65 but " << name2 << " is not." << endl;
 
  return 0;
}
/*
[dakpinar@hills Hw6-14]$ ./a.out
Please enter first persons name: John
Please enter first persons age: 17
Please enter second persons name: Greg
Please enter second persons age: 69
Neither person is between ages of 18 and 65.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter first persons name: Joann
Please enter first persons age: 24
Please enter second persons name: Kumba
Please enter second persons age: 26
Both of them are between ages of 18 and 65
[dakpinar@hills Hw6-14]$ ./a.out
Please enter first persons name: Zack
Please enter first persons age: 69
Please enter second persons name: Karson
Please enter second persons age: 25
Karson is between ages of 18 and 65 but Zack is not.
[dakpinar@hills Hw6-14]$ ./a.out
Please enter first persons name: Egg
Please enter first persons age: 28
Please enter second persons name: Dustin
Please enter second persons age: 78
Egg is between ages of 18 and 65 but Dustin is not.
*/