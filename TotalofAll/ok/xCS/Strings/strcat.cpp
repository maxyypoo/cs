#include <iostream>

using namespace std;

void showArray(const char array[])
  {
  for (int count = 0; array[count] != '\0'; count++)
    cout << array[count];
  cout << endl;
  }


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

/*
bool checkStringAppend (char * str1, char* str2)
{
  if (sizeof(str1) >= (strlen(str1) + strlen(str2) + 1))
    return 1;
  else 
    return 0;
}
*/

void strcat (char* str1, char* str2)
{
  int len;
  bool falsePositive = 1;
  
  if (checkStringAppend(str1, str2) || falsePositive)
  {
  
  len = strlen(str1);
  
  str1 += len;
  
  for (int  j = 0; str2[j] != '\0'; str1++, j++)
    *str1 = str2[j];
  }
  else
    cout << "String1 is not large enough for both strings " << endl;
}

int main ()
{
  char str1[11] = "Hello ";
  char str2[] = "World";
  
  strcat(str1, str2);
  
  showArray(str1);
  
  return 0;
}