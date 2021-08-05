/*
Filename: BunnyStream.cpp
Description: A demo of file streaming and fstream output.
Assignment: Intro to files stream 6/25
*/
#include <iostream>
#include <fstream>
using namespace std;

void displaySmallBunny();

int main()
{
  displaySmallBunny();
  
  return 0;
}
void displaySmallBunny()
{
  ofstream bunnyFile;
  
  bunnyFile.open("output.txt");
  bunnyFile << "\n"; //Line break
  
  bunnyFile << "*Small Bunny*\n";
  bunnyFile << "How do you\n";
  bunnyFile << "get a letter\n";
  bunnyFile << "to a bunny?\n";
  bunnyFile << "\n"; //Line break for the rabbit
  
  bunnyFile << "(\\___/)\n";//Picture of the Rabbit.
  bunnyFile << "(='.'=)\n";
  bunnyFile << "(\")_(\")\n";
  
  bunnyFile << "\n"; // Line break for the rabbit
  bunnyFile << "Hare Mail.\n";
  bunnyFile << "************\n";
  bunnyFile << "\n";
  bunnyFile.close();
  
}
/*
[dakpinar@hills Hw6-25]$ g++ BunnyStream.cpp
[dakpinar@hills Hw6-25]$ ./a.out
[dakpinar@hills Hw6-25]$ cat output.txt

*Small Bunny*
How do you
get a letter
to a bunny?

(\___/)
(='.'=)
(")_(")

Hare Mail.
************
*/