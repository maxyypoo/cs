#include <iostream>
#include <cstring>

using namespace std;
//Prints the characters in the string str1 from beginIndex
//and including endIndex
void printSubString( const char* str1 , int beginIndex, int endIndex )
{ 
  for (int i = beginIndex; i < endIndex; i++)
  {
    cout << str1[i];
  }
  cout << ":";
}


void printWordsInAString( const char* str1 )
{
  int beginIndex;
  int len;
  bool wordFound = false;
  
  len = strlen(str1);
  
  for (int i = 0; i <= len; i++)
  {
    if ((int)str1[i] != 32 && wordFound == false)
    {
      beginIndex = i;
      wordFound = true;
    }
    else if ((int)str1[i] == 32 && wordFound == true)
    {
      printSubString(str1, beginIndex, i);
      wordFound = false;
    }
    else if (i == len && wordFound == true)
      printSubString(str1, beginIndex, i);
  } 
}

 


int main()
{
char str1[] = "The fox jumps over the fence." ;
char str2[] = "The              fox jumps over the fence." ;
char str3[] = "    The fox jumps over the fence." ;
char str4[] = "The fox jumps over the fence.    " ;


printWordsInAString( str1 ) ;
cout << endl ;
printWordsInAString( str2 ) ;
cout << endl ;

printWordsInAString( str3 ) ;
cout << endl ;
printWordsInAString( str4 ) ;
cout << endl ;


return( 1 ) ;
}