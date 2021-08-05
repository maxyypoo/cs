/*
Filename: Pizza.cpp
Assingment: expressions formatting adv
Description: A pizza slice amount and pizza amount calculator based on pizza size and guest number.
*/
#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  const double SLICE_SURFACE_AREA = 14.125f, NUMBER_PI = 3.141528f, SLICE_PER_ATTENDEE = 4;
  int numberOfAttendees, numberOfPizzas, numberOfSlices, pizzaPieDiameter, pizzaPieRadius;
  double pizzaPieSurfaceArea;
  
  cout << "Please enter the size of Pizza you will buy in inches: ";
  cin >> pizzaPieDiameter;
  cout << "Please enter the number of guests attending your party: ";
  cin >> numberOfAttendees;
  
  pizzaPieRadius = pizzaPieDiameter / 2;
  pizzaPieSurfaceArea = NUMBER_PI * pow(pizzaPieRadius, 2);
  numberOfSlices = pizzaPieSurfaceArea / SLICE_SURFACE_AREA;
  numberOfPizzas = ceil((SLICE_PER_ATTENDEE * numberOfAttendees) / static_cast<float>(numberOfSlices));
  
  if(pizzaPieDiameter > 0 && numberOfAttendees >= 0)
  {
    cout << setprecision(1) << fixed;
    cout << "Number of slices for " << pizzaPieDiameter << " inches of pizza is " << numberOfSlices << endl;
    cout << "You will need to buy " << numberOfPizzas << " pizzas for " << numberOfAttendees << endl;
  }
  else
    cout << "Invalid amount of guests or pizza size." << endl;
    
    return 0;
}
/*
dakpinar@hills Hw6-19]$ ./a.out
Please enter the size of Pizza you will buy in inches: 16
Please enter the number of guests attending your party: 4
Number of slices for 16 inches of pizza is 14
You will need to buy 2 pizzas for 4
[dakpinar@hills Hw6-19]$ ./a.out
Please enter the size of Pizza you will buy in inches: 90
Please enter the number of guests attending your party: 5
Number of slices for 90 inches of pizza is 450
You will need to buy 1 pizzas for 5
[dakpinar@hills Hw6-19]$ ./a.out
Please enter the size of Pizza you will buy in inches: 0
Please enter the number of guests attending your party: 5
Invalid amount of guests or pizza size.
[dakpinar@hills Hw6-19]$
*/