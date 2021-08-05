#include "mystring.h"
#include <cstring>


  
using namespace std;


ostream& operator<<(ostream& os, const mystring& str1Obj)
{
  os << "Inside my ostream" << endl;
  os << str1Obj.holder << endl;
  return os;
}

mystring::mystring(mystring& str1)
{
  cout << "Copy construtor" << endl;
  int len = strlen (str1.holder);
  holder = new char [len + 1];  
  strcpy(holder, str1.holder);
  
}


mystring::mystring( const char* str1 ) 
{
  cout << "Constructor" << endl;
  holder = new char[  strlen(str1)  + 1];
  strcpy(holder, str1);
}

int mystring::length() 
{
  int length = 0;
  
  
  for (int i = 0; holder[i] != '\0'; i++)
    length++;
  
  return length;
}
 
void mystring::append(const char* str2 ) 
{
  char* holder1;
  
  holder1 = new char [strlen(holder) + 1];
  strcpy (holder1,holder);
  
  delete[] holder;
  holder = new char[strlen(holder1) + strlen(str2) + 1];
  
  strcpy(holder, holder1);
  strcat(holder, str2);
  
  delete[] holder1;
}

void mystring::print() 
{
  cout << holder << endl;
}

mystring::~mystring() {
  cout << "Inside the destructor" << endl;
  delete[] holder;
}

void printG (mystring obj1)
{
  cout << obj1.holder << endl;
}


