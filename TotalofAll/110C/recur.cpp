#include <string>
#include <iostream>

using namespace std;

void reverseString (string s)
{
int length = s.size();
  int start = 0;
if (length > start)
{
//write the last character
  
reverseString(s.substr(start + 1, length));
//call reverseString on s minus the last character
cout << s[0];
}
  
}


int main ()
{
  reverseString("cat");
  
  return 0;
}