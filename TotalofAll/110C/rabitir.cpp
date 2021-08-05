#include <iostream>

using namespace std;

long long int rabbit(int n)
{

  long long int current=1, next=1, previous=1;
  for (long long int i=3; i<=n; i++)
  {
    // first, put rabbit(i) into next
    next = current+previous;
    // now, set up previous and current for next
    previous = current;
    current = next;
  }
  
  return next;
  

}



int main ()
{
  
  long long int n, fibo;
  
  cout << "Enter time in months";
  cin >> n;
  
  fibo = rabbit(n);
  
  
  cout << fibo;
  
  return 0;
}