/*
Filename: Echo.cpp
Description: In this file, I use string library in order to store a word. This is done with the use of string data type.
Assignment: Hw6/12 - Variable strings-intro.
*/
#include <iostream>
#include <string>                       //This library is included since the char data type can only hold one letter; String data type can hold sentences.
using namespace std;

int main()
{
  string Phrase;                        //Declearing variable, Phrase, to store a word.
  Phrase= "Echo ";
  cout << Phrase;                       //This design of breaking line and creating 2 extra lines, is for clarity purposes.
  cout << Phrase;
  cout << Phrase << endl;
  return 0;
}

/*
[dakpinar@hills Hw6-12]$ ./a.out
Echo Echo Echo
*/