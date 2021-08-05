/*
Filename: AreaRect2.cpp
Description: A compartmental area calculator for rectangles
Assignment: Functions4 6/21 In-class
*/
#include <iostream>
using namespace std;

//Function Prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
  //Variables
  double length, width, areaOfRect;

  //Validator
  do
  {  
    //Function calls
    (length = getLength());
    (width = getWidth());
  }while (length < 0 || width < 0);
    
  (areaOfRect = getArea(length, width));
  displayData(length, width, areaOfRect);
  
  return 0;
}

//Length Function
double getLength()
{
  double length;
  
  cout << "Please enter a length value: ";
  cin >> length;
  
  return length;
}

//Width Function
double getWidth()
{
  double width;
  
  cout << "Please enter a width value: ";
  cin >> width;
  
  return width;
}

//Area Function
double getArea(double length, double width)
{
  double areaOfRect;
  
  areaOfRect = length * width;
  
  return areaOfRect;
}

//Display Function
void displayData(double length, double width, double areaOfRect)
{
  cout << "For length, you entered: " << length << " units." << endl;
  cout << "For width, you entered: " << width << " units." << endl;
  cout << "Based on length and width you entered, the area of rectangle is: " << areaOfRect << " units^2." << endl;
}
/*
dakpinar@hills Hw6-21]$ ./a.out
Please enter a length value: 5
Please enter a width value: 3
For length, you entered: 5 units.
For width, you entered: 3 units.
Based on length and width you entered, the area of rectangle is: 15 units^2.
[dakpinar@hills Hw6-21]$ ./a.out
Please enter a length value: -5
Please enter a width value: 0
Please enter a length value: 5
Please enter a width value: -5
Please enter a length value: 6
Please enter a width value: 3
For length, you entered: 6 units.
For width, you entered: 3 units.
Based on length and width you entered, the area of rectangle is: 18 units^2.
*/






