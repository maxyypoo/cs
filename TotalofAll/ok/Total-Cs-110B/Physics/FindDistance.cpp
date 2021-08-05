#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;
using std::endl;

float getVal ();
char getUnit ();
float calculateDistance (float, float, float, float);
void displayInfo (float, char);

int main ()
{
  float initialVelocity, timeItTakesToTravel, accelerationOfTheObject, initialPosition;
  float finalResultForDistance;
  char unit;
  
  cout << "This program calculates distance traveled, based on time, acceleration and initial velocity. " << endl;
  
  cout << "Please enter your initial position: ";
  initialPosition = getVal ();
  
  cout << "Please enter the time it takes for the object the travel that particular distance: ";
  timeItTakesToTravel = getVal ();
  
  cout << "Please enter the initial speed of the object: ";
  initialVelocity = getVal ();
  
  cout << "Please enter the acceleration of the object (must be constant, if not enter Avg value): ";
  accelerationOfTheObject = getVal ();
  
  unit = getUnit ();
  
  finalResultForDistance = calculateDistance (timeItTakesToTravel, initialVelocity, accelerationOfTheObject, initialPosition);
  
  displayInfo (finalResultForDistance, unit);
  
  return 0;
}

float getVal ()
{
  float tempValue;
  
  cin >> tempValue;
  
  return tempValue;
}

char getUnit ()
{
  char unit;
  
  do
  {
    cout << "Please enter the unit type you used." << endl;
    cout << "Enter k for km and hours, m for meters and seconds: ";
    cin >> unit;

    switch (unit)
    {
      case 'k' : case 'K' :
        unit = 'k';
        break;

      case 'm' : case 'M' :
        unit = 'm';
        break;

      default: 
        cout << "Please enter an acceptable value." << endl;
        unit = '?';
    }
  }while (unit == '?');
  
  return unit;
}

float calculateDistance (float timeItTakesToTravel, float initialVelocity, float accelerationOfTheObject, float initialPosition)
{
  float distanceFound;
  
  distanceFound = initialPosition;
  
  distanceFound += (initialVelocity * timeItTakesToTravel);
  
  distanceFound += (.5 * accelerationOfTheObject * pow (timeItTakesToTravel, 2));
  
  return distanceFound;
}

void displayInfo (float finalResultForDistance, char unit)
{

  cout << "The objects distance is : " << finalResultForDistance;
  
  if (unit == 'k')
    cout << " kilometers." << endl;
  else 
    cout << " meter." << endl;
}