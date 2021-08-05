#include <iostream>

using namespace std;


int binarySearch(const int array[], int numElems, int value)
 {
  int first = 0, // First array element
  last = numElems - 1, // Last array element
  middle, // Midpoint of search
  position = -1; // Position of search value
  bool found = false; // Flag
  while (!found && first <= last)
  {
    middle = (first + last) / 2; // Calculate midpoint
    if (array[middle] == value) // If value is found at mid
    {
      found = true;
      position = middle;
    }
    else if (array[middle] > value) // If value is in lower half
      last = middle − 1;
    else
      first = middle + 1; // If value is in upper half
  }
 return position;
 } 

int main ()
{
  
  return 0;
}