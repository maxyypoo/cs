/*
Filename: AreaRect-Stub.cpp
Description: A stub for the Functions 4 assignment
Assignment: Functions 4
*/
#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);


int main()
{
  cout << "Function getLength(): " << getLength() << endl;
  cout << "Function getWidth(): " <<  getWidth()  << endl;
  cout << "Function getArea(length, width): " << getArea(34.5, 12.6) << endl;
  cout << "Function displayData(length, width, areaOfRect): " << "No return" << endl;
  displayData(34.5, 12.6, 0.5757);
  
  return 0;
}

double getLength()
{
  double length = 34.5;
  
  cout << "function: getLength: Input: NONE " << endl;
  cout << "function: getLength: Output: length: " << length << endl;
  
  return length;
}

double getWidth()
{
  double width = 12.6;
  
  cout << "function: getWidth: Input1: NONE " << endl;
  cout << "function: getWidth: Output1: width: " << width<< endl;
  
  return width;
}

double getArea(double, double )
{
  double areaOfRect = 0.5757, length = 34.5, width = 12.6;
  
  cout << "function: getArea: Input1: length: " << length << endl;
  cout << "function: getArea: Input2: width: " << width << endl;
  cout << "function: getArea: Output1: area: " << areaOfRect << endl;
  
  return areaOfRect;
}

void displayData(double, double, double)
{
  double length, width, areaOfRect;
  length = 34.5;
  width = 12.6;
  areaOfRect = 0.5757;
  
  cout << "function: displayData: Input1: length: " << length << endl;
  cout << "function: displayData: Input2: width: " << width << endl;
  cout << "function: displayData: input3: area: " << areaOfRect << endl;
  cout << "function: displayData: Output: None " << endl;
}
/*
function: getLength: Input: NONE
function: getLength: Output: length: 34.5
Function getLength(): 34.5
function: getWidth: Input1: NONE
function: getWidth: Output1: width: 12.6
Function getWidth(): 12.6
function: getArea: Input1: length: 34.5
function: getArea: Input2: width: 12.6
function: getArea: Output1: area: 0.5757
Function getArea(length, width): 0.5757
Function displayData(length, width, areaOfRect): No return
function: displayData: Input1: length: 34.5
function: displayData: Input2: width: 12.6
function: displayData: input3: area: 0.5757
function: displayData: Output: None
*/






