/*
Filename: Comparison.cpp
Description: File streaming and function return methods to compare numbers.
Assignment: Streaming adv input loops.
*/
#include <iostream>
#include <fstream>
using namespace std;

//Function Prototypes
float avgInput(ifstream &);
float biggestNumber(ifstream &);
void displayFunc(float, float);

int main()
{
  //Variables
  float avgOfNumbers, biggestOfNumbers;
  ifstream dataFile;
  
  //File existance validation
  dataFile.open("numbers.txt");
  if (dataFile.fail())
  {
    dataFile.open("numbers.txt" , ios::out);
  }
  else
  {
    dataFile.close();
    cout << "numbers.txt already exists." << endl;
  }
  
  //Function calls
  avgOfNumbers=avgInput(dataFile);
  biggestOfNumbers=biggestNumber(dataFile);
  displayFunc(avgOfNumbers, biggestOfNumbers);
  
  return 0;
}

float avgInput(ifstream &file)
{
  //Variables
  float avg, variable, variable2;
  int stock = 1;
  
  //Input
  file.open("numbers.txt");
  
  //While Loop to coompare values and get avg
  while(file >> variable)
  {
    variable2 = variable2 + variable;
    stock++;
  }
  avg = variable2 / stock;
  
  //File end
  file.close();
  
  return avg;
}

float biggestNumber(ifstream &kuma)
{
  //Variables
  float newNumber,
  biggest = 0;
  int stock = 0;
  
  //Input
  kuma.open("numbers.txt" , ios::in);
  
  //While loops
  while(kuma >> newNumber)
  {
    if(stock < 1)
    {
      biggest = newNumber;
      stock++;
    }
    if(newNumber > biggest)
      biggest = newNumber;
    }
  
  //File end
  kuma.close();
  
  return biggest;
}

//Display Function
void displayFunc(float avgOfNumbers, float biggestOfNumbers)
{
  //Output
  cout << "Average of numbers is " << avgOfNumbers << endl;
  cout << "Biggest of numbers is " << biggestOfNumbers << endl;
}
/*
[dakpinar@hills Hw6-25]$ ./a.out
numbers.txt already exists.
Average of numbers is 248.167
Biggest of numbers is 670
[dakpinar@hills Hw6-25]$ cat numbers.txt
500 250 670 45 24
*/








