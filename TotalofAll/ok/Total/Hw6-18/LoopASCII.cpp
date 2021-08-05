/*
Filename: LoopASCII.cpp
Description: Using Loop for and modulus to show ASCII from 0-127.
Assignemnt: Hw 6/18 Loop 02
*/
#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  
  for(count = 0; count < 127; count++)
  {
    cout << static_cast<char>(count);
    if(count%16 == 0)
      cout << endl;
  }
    
  return 0;
}
/*
[dakpinar@hills Hw6-18]$ ./a.out






!"#$%&'()*+,-./0
123456789:;<=>?@
ABCDEFGHIJKLMNOP
QRSTUVWXYZ[\]^_`
abcdefghijklmnop
qrstuvwxyz{|}~
*/