//Filename: Polygon.cpp
//Assignment: Hw 8 Shape
//Description: Draws a polygon based on user input using for loops
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  //Variables to hold shape, side lenght and loop counter
  char symbol;
  int height, number;
  
  //Input for shape and lenght of sides
  cout << "This program will output a parallelogram." << endl;
  
  cout << "How long do you want each side to be? ";
  cin >> height;

  cout << "Please enter the character you want it to be made of: ";
  cin >> symbol;

  number = 1;
  
  //Output loop counts upwards from 1 to height to draw the upside triangle
  for (int j = 0; j < height; j++)
  {
    for (int i = 0; i < number; i++)
      cout << symbol;
    cout << endl;
    number++;
  }
  
  number = height - 1;
  
  //Output loop that counts downwards from user lenght input to draw reversed triangle
  for (int j = 0; j < height; j++)
  {
    for (int l = number; l < height; l++)
      cout << ' ';
    for (int i = 0; i < number; i++)
      cout << symbol;
    cout << endl;
    number--;
  }
  
  return 0;
}
/*
dakpinar@hills SortOfs]$ g++ Polygon.cpp
[dakpinar@hills SortOfs]$ ./a.out
This program will output a parallelogram.
How long do you want each side to be? 9
Please enter the character you want it to be made of: $
$
$$
$$$
$$$$
$$$$$
$$$$$$
$$$$$$$
$$$$$$$$
$$$$$$$$$
 $$$$$$$$
  $$$$$$$
   $$$$$$
    $$$$$
     $$$$
      $$$
       $$
        $

[dakpinar@hills SortOfs]$ ./a.out
This program will output a parallelogram.
How long do you want each side to be? 6
Please enter the character you want it to be made of: *
*
**
***
****
*****
******
 *****
  ****
   ***
    **
     *
*/
  
  
  
  
  
  
  
  
  
  
  
  