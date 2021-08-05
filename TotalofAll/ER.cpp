// Doga Akpinaroglu
//CS-110C
//Assignment 9 ER
//ER.ccp

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
  const int MAX_HEAP = 100;

class Heap
{
  string heapObj[MAX_HEAP];
  int position = 0;
  
  public:
  
  void insertionSort()
  {
    for (int i = 1; i < position; i++)
    {
      string nextItem = heapObj[i];
      int index = i;
      while ((index > 0) && (heapObj[index - 1] < nextItem))
      {


      heapObj[index] = heapObj[index - 1];
      index--;
      }



        heapObj[index] = nextItem;
    } 
  
  } 

 bool add (string newPatient)
 {
   if (position < MAX_HEAP)
   {
     heapObj[position] = newPatient;
     insertionSort();
     position++;
     
     return true;
   }
   else
     return false;
   
 }
  string peekTop ()
  {
    if (position > 0)
      return heapObj[0];
    else
    {
      cout << "Invalid search, the queue is empty. Exiting the program";
      exit(0);
    }
  }
  
  bool remove ()
  {
    if (position > 0)
    {
      heapObj[0] = heapObj[position];
      heapObj[position] = '\0';
      position--;
      insertionSort();
      return true;
    }
    else
      return false;
  }
  
  
  
  
};




int main ()
{
  Heap ER;


ER.add("5 Bob");

ER.add("9 Mary");

ER.add("1 Max");

cout << ER.peekTop() << " will now see the doctor.\n";

ER.remove();

ER.add("3 Julio");

ER.add("7 Stacy");

ER.add("4 Paul");

ER.add("2 Reiko");

ER.add("6 Jennifer");

ER.add("5 Chang");

cout << ER.peekTop() << " will now see the doctor.\n";

ER.remove();

cout << ER.peekTop() << " will now see the doctor.\n";

ER.remove();

cout << ER.peekTop() << " will now see the doctor.\n";

ER.remove();
}

/*
[dakpinar@hills TotalofAll]$ ./a.out
9 Mary will now see the doctor.
7 Stacy will now see the doctor.
6 Jennifer will now see the doctor.
5 Chang will now see the doctor.
*/