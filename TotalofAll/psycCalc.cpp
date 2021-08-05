#include <iostream>

using namespace std;

int calcE (int arr[], const int size)
{
  int sum = 0;
  
  for (int i = 0; i < 50; i++)
  {
    if ((i + 1 == 1) || (i + 1 == 11) || (i + 1 == 21) || (i + 1 == 31) || (i + 1 == 41) )
      sum += arr[i];
    else if ((i + 1 == 6) || (i + 1 == 16) || (i + 1 == 26) || (i + 1 == 36) || (i + 1 == 46))
      sum -= arr[i];
  }
  
  return sum + 20;
}

int calcA (int arr[], const int size)
{
  int sum = 0;
  
  for (int i = 0; i < 50; i++)
  {
     if ((i + 1 == 7) || (i + 1 == 17) || (i + 1 == 27) || (i + 1 == 37) || (i + 1 == 42) || (i + 1 == 47))
      sum += arr[i];
    else if ((i + 1 == 2) || (i + 1 == 12) || (i + 1 == 22) || (i + 1 == 32))
      sum -= arr[i];
  }
  
  return sum + 14;
}

int calcO (int arr[], const int size)
{
  int sum = 0;
  
  for (int i = 0; i < 50; i++)
  {
     if ((i + 1 == 5) || (i + 1 == 15) || (i + 1 == 25) || (i + 1 == 35) || (i + 1 == 40) || (i + 1 == 45) || (i + 1 == 50) )
      sum += arr[i];
    else if ((i + 1 == 10) || (i + 1 == 20) || (i + 1 == 30))
      sum -= arr[i];
  }
  
  return sum + 8;
}

int calcN (int arr[], const int size)
{
  int sum = 0;
  
  for (int i = 0; i < 50; i++)
  {
    if ((i + 1 == 9) || (i + 1 == 19))
      sum += arr[i];
    else if ((i + 1 == 4) || (i + 1 == 14) || (i + 1 == 24) || (i + 1 == 29) || (i + 1 == 34) || (i + 1 == 39) || (i + 1 == 44) || (i + 1 == 49))
      sum -= arr[i];
  }
  
  return sum + 38;
}

int calcC (int arr[], const int size)
{
  int sum = 0;
  
  for (int i = 0; i < 50; i++)
  {
    
     if ((i + 1 == 3) || (i + 1 == 13) || (i + 1 == 23) || (i + 1 == 33) || (i + 1 == 43) || (i + 1 == 48))
      sum += arr[i];
    else if ((i + 1 == 8) || (i + 1 == 18) || (i + 1 == 28) || (i + 1 == 38))
      sum -= arr[i];
  }
  
  return sum + 14;
}


int main ()
{
  int e, a, o, n, c;
  int answers[50];
  
  
  e = a = o = n = c = 0;
  
  for (int i = 0; i < 50; i++)
  {
    cout << "Enter answer " << i + 1 << " : ";
    cin >> answers[i];
  }
  
  
  
  e = calcE(answers, 50);
  a = calcA(answers, 50);
  o = calcO(answers, 50);
  n = calcN(answers, 50);
  c = calcC(answers, 50);
  
  
  cout << "Extraversion is " << e << " ,mean score is " << static_cast<float>(e)/8 << endl;
  cout << "Openness is " << o << " ,mean score is " << static_cast<float>(o)/8 << endl;
  cout << "Agreebleeness is " << a << " ,mean score is " << static_cast<float>(a)/8 << endl;
  cout << "Neuroticisim is " << n << " ,mean score is " << static_cast<float>(n)/8 << endl;
  cout << "Constientiousness is " << c << " ,mean score is " << static_cast<float>(c)/8 << endl;
  
  
  return 0;
  
}