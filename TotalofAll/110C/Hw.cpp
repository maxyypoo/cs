#include <iostream>

using namespace std;

int recursiveAddition (int start, int end)
{
  if (start == end)
  {
    return start;
  }
  else 
  {
  
  return end + recursiveAddition (start, end - 1);
  }
}
void reverseInt (int target)
{
  int container;
  container = target;
  
  if (target == 0);
  else
  {
    cout << container % 10;
    reverseInt (container / 10);
  }
}

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
  int numContainer;
  
  cout << "Addition" << endl;
  
  numContainer = recursiveAddition (3, 6);
  cout << numContainer << endl;
  numContainer = recursiveAddition (4, 30);
  cout << numContainer << endl;
  numContainer = recursiveAddition (1, 1);
  cout << numContainer << endl;
  
  cout << "Reversed Ints" << endl;
  
  reverseInt (1984);
  cout << '\n';
  reverseInt (24);
  cout << '\n';
  reverseInt (879);
  cout << '\n';
  reverseInt (100);
  cout << '\n';
  
  cout << "Write Backwards, both functions; in alternating fashion" << endl;
  
  writeBackwards("Merhaba");
  writeBackwards2("Merhaba");
  writeBackwards("Privet");
  writeBackwards2("Privet");
  
  
  return 0;
}


/*
[dakpinar@hills 110C]$ ./a.out
Addition
18
459
1
Reversed Ints
4891
42
978
001
Write Backwards, both functions; in alternating fashion
Enter writeBackwards with string: Merhaba
About to write last character of string: Merhaba
a
Enter writeBackwards with string: Merhab
About to write last character of string: Merhab
b
Enter writeBackwards with string: Merha
About to write last character of string: Merha
a
Enter writeBackwards with string: Merh
About to write last character of string: Merh
h
Enter writeBackwards with string: Mer
About to write last character of string: Mer
r
Enter writeBackwards with string: Me
About to write last character of string: Me
e
Enter writeBackwards with string: M
About to write last character of string: M
M
Enter writeBackwards with string:
Leave writeBackwards with string:
Leave writeBackwards with string: M
Leave writeBackwards with string: Me
Leave writeBackwards with string: Mer
Leave writeBackwards with string: Merh
Leave writeBackwards with string: Merha
Leave writeBackwards with string: Merhab
Leave writeBackwards with string: Merhaba
Enter writeBackwards2 with string: Merhaba
Enter writeBackwards2 with string: erhaba
Enter writeBackwards2 with string: rhaba
Enter writeBackwards2 with string: haba
Enter writeBackwards2 with string: aba
Enter writeBackwards2 with string: ba
Enter writeBackwards2 with string: a
Enter writeBackwards2 with string:
Leave writeBackwards2 with string:
About to write first character of string: a
a
Leave writeBackwards2 with string: a
About to write first character of string: ba
b
Leave writeBackwards2 with string: ba
About to write first character of string: aba
a
Leave writeBackwards2 with string: aba
About to write first character of string: haba
h
Leave writeBackwards2 with string: haba
About to write first character of string: rhaba
r
Leave writeBackwards2 with string: rhaba
About to write first character of string: erhaba
e
Leave writeBackwards2 with string: erhaba
About to write first character of string: Merhaba
M
Leave writeBackwards2 with string: Merhaba
Enter writeBackwards with string: Privet
About to write last character of string: Privet
t
Enter writeBackwards with string: Prive
About to write last character of string: Prive
e
Enter writeBackwards with string: Priv
About to write last character of string: Priv
v
Enter writeBackwards with string: Pri
About to write last character of string: Pri
i
Enter writeBackwards with string: Pr
About to write last character of string: Pr
r
Enter writeBackwards with string: P
About to write last character of string: P
P
Enter writeBackwards with string:
Leave writeBackwards with string:
Leave writeBackwards with string: P
Leave writeBackwards with string: Pr
Leave writeBackwards with string: Pri
Leave writeBackwards with string: Priv
Leave writeBackwards with string: Prive
Leave writeBackwards with string: Privet
Enter writeBackwards2 with string: Privet
Enter writeBackwards2 with string: rivet
Enter writeBackwards2 with string: ivet
Enter writeBackwards2 with string: vet
Enter writeBackwards2 with string: et
Enter writeBackwards2 with string: t
Enter writeBackwards2 with string:
Leave writeBackwards2 with string:
About to write first character of string: t
t
Leave writeBackwards2 with string: t
About to write first character of string: et
e
Leave writeBackwards2 with string: et
About to write first character of string: vet
v
Leave writeBackwards2 with string: vet
About to write first character of string: ivet
i
Leave writeBackwards2 with string: ivet
About to write first character of string: rivet
r
Leave writeBackwards2 with string: rivet
About to write first character of string: Privet
P
Leave writeBackwards2 with string: Privet
[dakpinar@hills 110C]$
*/