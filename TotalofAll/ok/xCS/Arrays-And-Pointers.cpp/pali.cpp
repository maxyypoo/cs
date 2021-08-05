#include <iostream>
#include <cstring>

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

void reverse (char* str)
{
  int len;
  char firstHolder, lastHolder;
  len = strlen(str);
  len--;
  
  for (int i = 0, j = len; i < j ; i++, j--)
  {
    firstHolder = str[i];
    lastHolder = str[j];
    str[i] = lastHolder;
    str[j] = firstHolder;
  }
}

//could be bool
void isPalindrome (char* str)
{
  int len;
  char* ptr;
  
  len = strlen(str);
  const int LEN = len;
  
  char temp[LEN];
  

  
  strcpy (temp, str);
  ptr = temp;
  reverse(str);
  
  
  if (strcmp(str, temp) == 0)
    cout << ptr << " is a palindrome" << endl; 
  else
    cout << ptr << " is not a palindrome" << endl;
}


int main ()
{
  char* ptr;
  char str1[] = "beed";
  char str2[] = "hooh";
  char str3[] = "abcdefggfedcba";
  char str4[] = "out out brief candle, time is but a walking shadow.";
  
  ptr = str1;
  
  isPalindrome(str1);
  
   ptr = str2;
  
  isPalindrome(str2);
  
   ptr = str3;
  
  isPalindrome(str3);
  
   ptr = str4;
  
  isPalindrome(str4);
  
  
  return 0;
}