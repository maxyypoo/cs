#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

const int MAX_VAL_FOR_MATH_FUNCT = 100;

int getVal ();
float findDisposition (int, int, int);
float findLeftHandSum (int, int, int, float);
float findRightHandSum (int, int, int, float);
float findMidpoint (int, int, int, float);
float findTrapezoid (float, float);
float findSimpsons (float, float);
void displayInfo (float, float, float, float, float);

int main ()
{
  using std::cout;
  
  
  int minimumVal, maximumVal, subDivisions; 
  float disposition;
  float leftHandSum, rightHandSum, midPoint, trapezoid, simpsons;
  
  cout << "Please enter the lower limit: ";
  minimumVal = getVal();
  
  cout << "Please enter the higher limit: ";
  maximumVal = getVal();
  
  cout << "Please enter the amount of sub divisions: ";
  subDivisions = getVal();
  
  disposition = findDisposition (minimumVal, maximumVal, subDivisions);
  
  leftHandSum = findLeftHandSum  (minimumVal, maximumVal, subDivisions, disposition);
  rightHandSum = findRightHandSum  (minimumVal, maximumVal, subDivisions, disposition);
  midPoint = findMidpoint (minimumVal, maximumVal, subDivisions, disposition);
  trapezoid = findTrapezoid (leftHandSum, rightHandSum);
  simpsons = findSimpsons (trapezoid, midPoint);
  
  displayInfo (leftHandSum, rightHandSum, midPoint, trapezoid, simpsons);
  
  return 0;
}

int getVal ()
{
  using std::cin;
  int tempValue;
  
  cin >> tempValue;
  
  return tempValue;
}

float findDisposition (int minimumVal, int maximumVal, int subDivisions)
{
  float disposition;
  
  disposition = (maximumVal - minimumVal) / static_cast<float>(subDivisions);
  
  return disposition;
}

float findLeftHandSum (int minimumVal, int maximumVal, int subDivisions, float disposition)
{
  float leftHandSum;
  float totalSum = 0, tempSum;
  
  for (int i = 0; i <= subDivisions - 1; i++)
  {
    tempSum = ((i + minimumVal) * disposition);
    totalSum += std::pow(tempSum , 2);
  }

  leftHandSum = totalSum * disposition;
  
  return leftHandSum;
}

float findRightHandSum (int minimumVal, int maximumVal, int subDivisions, float disposition)
{
  float rightHandSum;
  float totalSum = 0;
  
  for (int i = 1; i <= subDivisions; i++)
    totalSum += std::pow (((i + minimumVal) * disposition) , 2);
  
  rightHandSum = totalSum * disposition;
  
  return rightHandSum;
}

float findMidpoint (int minimumVal, int maximumVal, int subDivisions, float disposition)
{
  float midPoint;
  float totalSum = 0;
  
  for (int i = 1; i <= subDivisions; i++)
    totalSum += std::pow (((((i + minimumVal) * disposition) / 2.0)) , 2);
  
  midPoint = totalSum * disposition;
  
  return midPoint;
}

float findTrapezoid (float leftHandSum, float rightHandSum)
{
  float trapezoid;
  
  trapezoid = (leftHandSum + rightHandSum) / 2.0;
  
  return trapezoid;
}

float findSimpsons (float trapezoid, float midPoint)
{
  float simpsons;
  
  simpsons = (((2 * midPoint) + trapezoid) / static_cast<float>(3));
  
  return simpsons;
}

void displayInfo (float leftHandSum, float rightHandSum, float midPoint, float trapezoid, float simpsons)
{
  using std::cout;
  using std::endl;
  
  cout << std::setprecision(9) << std::fixed;
  
  cout << "left Hand Sum: " << leftHandSum << endl;
  cout << "right Hand Sum: " << rightHandSum << endl;
  cout << "mid Point: " << midPoint << endl;
  cout << "trapezoid: " << leftHandSum << endl;
  cout << "simpsons: " << leftHandSum << endl;
}















