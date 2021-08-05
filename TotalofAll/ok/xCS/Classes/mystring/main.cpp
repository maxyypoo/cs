#include <iostream>
#include <cstring>
#include "mystring.h"


using namespace std;


 

int main ()
{
  mystring name ("ulala");
  
  mystring name2 = name;
  
  cout << name.length() << " ";
  name.print();
  
  name.append(" lulu");
  cout << name.length() << " ";
  name.print();
  
  return 0;
}