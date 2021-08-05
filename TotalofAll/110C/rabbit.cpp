#include <iostream>

using namespace std;

long long int rabbit(int n)
{

  if ((n==1) || (n==2))
    return 1;
  
  else
    return rabbit(n-1)+rabbit(n-2);

}



int main ()
{
  
  long int n, fibo;
  
  cout << "Enter time in months";
  cin >> n;
  
  fibo = rabbit(n);
  
  
  cout << fibo;
  
  return 0;
}