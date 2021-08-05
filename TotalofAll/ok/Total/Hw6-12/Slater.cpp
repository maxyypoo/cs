/*
Filename: Slater.ccp
Description: A file that demonstrates the combined use of int and string datatypes, and iostream (cout) and string libraries.
Assignment: Hw6/12 - variables strings 02-intro.
*/

#include <iostream>
#include <string>                                               //Appropriate libraries for the datatypes and functions needed.
using namespace std;

int main()
{
  string fName, lName;                                          //Declearing the string variables for first and last name, respectively.
  int age;                                                      //Age identifier is used with int datatype, because age is usually treated as an integer.
  fName= "Joe";
  lName= "Slater";                                              //Joe Slater is a characther from Lovecraft short story called 'Beyond the Wall of Sleep', which was inspired by Shakespeare.
  age= 42;
  cout << "His name was " << lName << "," << fName;             //In the same vein with lines 6&7, I broke this line to divide names and ages.
  cout << ". His age was " << age << "." << endl;              
  return 0;
}

/*
[dakpinar@hills Hw6-12]$ ./a.out
His name was Slater,Joe. His age was 42.
*/