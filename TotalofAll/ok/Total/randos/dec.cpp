// file: dec05.cpp
// assignment: Decisions 05
// description: A program to compute
// whether people are between 18 and 65

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() //main function here
{
  //declare variables here
  string name1;
  string name2;
  int age1;
  int age2;
  bool determinant1;
  bool determinant2;
  
  //asks the user to input 2 different ages
  cout << "Please enter the first person's name: ";
  cin >> name1;
  cout << "Please enter the first person's age: ";
  cin >> age1;
  cout << "Please enter the second person's name: ";
  cin >> name2;
  cout << "Please enter the second person's age: ";
  cin >> age2;
  
  //determines whether the people inputted are between the age of 18 and 65
  if(age1 >= 18 && age1 <= 65)
  {
    determinant1 = true;
  }
  else
    determinant1 = false;
  if(age2 >= 18 && age2 <= 65)
  {
    determinant2 = true;
  }
  else
    determinant2 = false;
  
  //print out whether the poeple inputted are between 18 and 65
  if(determinant1 && determinant2)
    cout << name1 << " and " << name2 << " are between 18 and 65 years old" << endl;
  else if(determinant1 && !determinant2)
    cout << name1 << " is between 18 and 65 years old, but " << name2 << " is not" << endl;
  else if(!determinant1 && determinant2)
    cout << name2 << " is between 18 and 65 years old, but " << name1 << " is not" << endl;
  else
    cout << "Neither person is between 18 and 65 years old" << endl;
  return 0;
}
/*
[nbeard@hills june14]$ ./a.out
Please enter the first person's name: Nico
Please enter the first person's age: 19
Please enter the second person's name: Lucas
Please enter the second person's age: 19
Nico and Lucas are between 18 and 65 years old
[nbeard@hills june14]$
*/