#include <iostream>
using namespace std;

void a()
{
  int z = 9;
}

void b()
{
  int y;
  cout << "y=" << y << endl;
}

int main()
{
  goto yah;
  nah:
  a();
  b();
  yah:
  goto nah;
  return 0;
}