#include <iostream>
#include <string>

using namespace std;

void writeBackwards (string s)
{
  int size = s.size();
  
  cout << "Enter writeBackwards with string: " << s << endl;
  
  if (size == 0);
  else 
  {
    cout << "About to write last character of string: " << s << endl;
    
    //endline for clarity
    cout << s[size - 1] << endl;
    writeBackwards (s.substr(0, size - 1));
  }
  cout << "Leave writeBackwards with string: " << s << endl;
}

void writeBackwards2 (string s)
{
  int size = s.size();
  int start = 0;
  
  cout << "Enter writeBackwards2 with string: " << s << endl;
  
  if (size == 0);
  else
  {
    writeBackwards2(s.substr(start + 1, size));
    cout << "About to write first character of string: " << s << endl;
    
    //endline for clarity
    cout << s[0] << endl;
  }
  cout << "Leave writeBackwards2 with string: " << s << endl;
}




int main ()
{
  writeBackwards("Merhaba");
  writeBackwards2("Merhaba");
  writeBackwards("Privet");
  writeBackwards2("Privet");
  
  return 0;
}