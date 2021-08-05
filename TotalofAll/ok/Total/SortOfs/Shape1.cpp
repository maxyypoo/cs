#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  char symbol;
  int i, j, lineLength, height, number, count;
  //Draw 1 symbol
  cout << "Enter symbol: ";
  cin >> symbol;

  cout << symbol << endl;

  for (int i = 0; i < 10; i++)
    cout << symbol;
  cout << endl;

  cout << "Enter times you want: ";
  cin >> lineLength;

  for (int i = 0; i < lineLength; i++)
    cout << symbol;
  cout << endl;

  for (int j = 0; j < 2; j++)
  {
    for (int i = 0; i < lineLength; i++)
      cout << symbol;
    cout << endl;
  }
  
  cout << "Enter times you want: ";
  cin >> height;

  for (int j = 0; j < height; j++)
  {
    for (int i = 0; i < lineLength; i++)
      cout << symbol;
    cout << endl;
  }

  for (int j = 0; j < height; j++)
  {
    cout << 'A';
    for (int i = 0; i < lineLength; i++)
      cout << symbol;
    cout << endl;
  }
  
  number = height;
  
 for (int j = 0; j < height; j++)
 {
   cout << number << " ";
   for (int i = 0; i < lineLength; i++)
      cout << symbol;
   cout << endl;
   number--;
 }
  
  number = 1;
  
  for (int j = 0; j < height; j++)
  {
    cout << number << " ";
    for (int i = 0; i < lineLength; i++)
      cout << symbol;
    cout << endl;
    number++;
  }
  
  number = height;
  
  for (int j = 0; j < height; j++)
  {
    cout << number << " ";
    for (int i = 0; i < number; i++)
      cout << symbol;
    cout << endl;
    number--;
  }
  
  number = 1;
  
  for (int j = 0; j < height; j++)
  {
    cout << number << " ";
    for (int i = 0; i < number; i++)
      cout << symbol;
    cout << endl;
    number++;
  }
  
  number = height;
  
  for (int j = height; j > 0; j--)
  {
    cout << number << " ";
    
    for (int k = 0; k < height; k++)
      cout << "#";
    for (int i = 0; i < number; i++)
      cout << symbol;
    cout << endl;
    number--;
  }
  
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  