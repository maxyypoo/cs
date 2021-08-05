//file:nested_loop.cpp
//assignment:CS110A, M32-2: Nested For Loops
//description:Write a program that produces the following output.description
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
 cout << "Draw 1 symbol:\n" << symbol << endl;
 //Draw 10 symbols
 cout << "Draw 10 symbols:" << endl;
 for(i = 0; i < 10; i++)
 {
   cout << symbol;
 }
 cout << endl;
 //Draw X symbol:
 cout << "Draw X symbol:" << endl;
 cout << "Enter line length: ";
 cin >> lineLength;
 for(i = 0; i < lineLength; i++)
 {
   cout << symbol;
 }
 cout << endl;
 //Draw X symbol twice:
 cout << "Draw X symbol twice:" << endl;
 for(j = 0; j < 2; j++)
 {
   for(i = 0; i < lineLength; i++)
   {
     cout << symbol;
   }
   cout << endl;
 }
 
 //Draw X symbol Y times:
 cout << "Enter height: ";
 cin >> height;
 
 for(j = 0; j < height; j++)
 {
   for(i = 0; i < lineLength; i++)
{
  cout << symbol;
}
   cout << endl;
 }
 //Draw X symbol Y times with a differnt beginning, 'A ':
 cout << "Draw X symbol Y times with a differnt beginning, 'A ':" << endl;
 for(j = 0; j < height; j++)
 {
   cout << "A ";
   for(i = 0; i < lineLength; i++)
   {
     cout << symbol;
   }
   cout << endl;
 }
 //Draw X symbol Y times with line numbers:
 cout << "Draw X symbol Y times with line numbers:" << endl;
 number = height-1;
 for(j = 0; j < height; j++)
 {
   cout << number << " ";
   for(i = 0; i < lineLength; i++)
   {
     cout << symbol;
   }
   cout << endl;
   number--;
 }
 //Make length depend on line number:
 cout << "Make length depend on line number: " << endl;
 number = height-1;
 for(j = height; j > 0; j--)
 {
   cout << number << " ";
   for(i = number; i > 0; i--)
   {
     cout << symbol;
   }
   cout << endl;
   number--;
 }
 //Reverse the triangle:
 cout << "Reverse the triangle:" << endl;
 number = height;
 count = 0;
 for(j = height; j > 0; j--)
 {
cout << number << " ";
   for(i = 0; i < count; i++)
   {
     cout << symbol;
   }
   cout << endl;
   number--;
   count++;
 }
 //Add a 2nd shape:
 cout << "Add a 2nd shape:" << endl;
 number = height;
 count = 0;
 for(j = height; j > 0; j--)
 {
   cout << number << " ";
   for(i = 0; i < height; i++)
   {
     cout << '#';
   }
   for(i = 0; i < count; i++)
   {
     cout << symbol;
   }
   cout << endl;
   number--;
   count++;
 }
 //Swap the triangle and the square:
 cout << "Swap the triangle and the square:" << endl;
 number = height;
 count = 0;
 for(j = height; j > 0; j--)
 {
   cout << number-1 << " ";
   for(i = 0; i < count; i++)
   {
     cout << symbol;
   }
   for(i = 0; i < height; i++)
   {
     cout << '#';
   }
   cout << endl;
   number--;
   count++;
 }
 //Change the symbol to a ' ' (space):
 cout << "Change the symbol to a ' ' (space):" << endl;
 number = height;
 count = 0;
symbol = ' ';
 for(j = height; j > 0; j--)
 {
   cout << number-1 << " ";
   for(i = 0; i < count; i++)
   {cout << symbol;
   }
   for(i = 0; i < height; i++)
   {
     cout << '#';
   }
   cout << endl;
   number--;
   count++;
 }
 return 0;
}





















