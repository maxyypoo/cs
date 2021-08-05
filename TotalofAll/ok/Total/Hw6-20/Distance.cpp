/*
Filename: Distance.cpp
Description: A total distance traveled calculator, based on average miles per gallon in different road styles.
Assignment: Expressions06.cpp
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Variables - Constants
  const float AVG_MILE_PER_GALLON_HIGHWY = 28.9,
  AVG_MILE_PER_GALLON_TWN = 23.5,
  FULL_TANK_VOLUME = 20;
  //Non-Constant Floats
  float distancePerGallon, totalDistanceTraveled, townMiles, cityMiles;
  
  //processing
  townMiles = FULL_TANK_VOLUME * AVG_MILE_PER_GALLON_TWN;
  cityMiles = FULL_TANK_VOLUME * AVG_MILE_PER_GALLON_HIGHWY;
  
  //Output set up
  cout << setprecision(1) << fixed << endl;
  cout << "Average Distance per Full Tank" << endl;
  cout << setw(30) << setfill('-') << "" << endl;
  
  cout << setfill(' ') <<"Road" << setw(11) << "" << "Distance(Miles)" << endl;
  cout << setw(23) << left << "Town" << townMiles << endl;
  cout <<  setw(23) << left << "Highway"<< cityMiles << endl;
  
  cout << setw(30) << setfill('+') << "" << endl;
  cout << setfill(' ');               //To reset setfill
  cout << endl;                      //Line break
  
  return 0;
}
/*
[dakpinar@hills Hw6-20]$ ./a.out

Average Distance per Full Tank
------------------------------
Road           Distance(Miles)
Town                     470.0
Highway                  578.0
++++++++++++++++++++++++++++++
*/