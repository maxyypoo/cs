#include <iostream>

using namespace std;

int strlen (char* arr)
{
  int length = 0;
  
  
  for (int i = 0; arr[i] != '\0'; i++)
    length++;
  
  
  /*
  while (*(arr++) ) 
    length++;
    
  */
  
  return length;
}

void displayFunc (int size)
{
  static int arrayNumber = 1;
  cout << "Size of the string " << arrayNumber << " is: " << size << endl;
  arrayNumber++;
}

int main ()
{
  char arr[15] = {'a', 'b', 'c', 'd'};
  char string[] = "CodeForGeeks";
  
  displayFunc(strlen(arr));
  displayFunc(strlen(string));
  
  return 0;
}