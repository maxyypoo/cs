//Filename: MilesPerGallon.cpp
//Description: Calculates and holds miles per galon, avg MPG across all entries and lowest MPG.
//Assignment: Expressions 05 Hw 6/26.
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Function prototypes
void avgMPG (float);
void currentCarMPG (int, int);
void lowestMPGOfAll (float);

int main()
{
  //Variables
  int volumeOfTank, milesTraveledBeforeRefuel;
  
  //Do loop for menu
  do
  {
    //input
    cout << "Please enter the total volume of your car's tank or Enter 0 to exit: ";
    cin >> volumeOfTank;
    
    //Exit command
    if (volumeOfTank == 0)
      exit(0);
    //Input
    cout << "Please enter the number of miles traveled before refueling: ";
    cin >> milesTraveledBeforeRefuel;
    
    //User validation -- rejecting negative numbers and promting the input
    if (volumeOfTank < 1 || milesTraveledBeforeRefuel < 1)
      cout << "Please enter a positive value." << endl;
    else
      currentCarMPG(volumeOfTank, milesTraveledBeforeRefuel);               //Function call

  }while(milesTraveledBeforeRefuel != 0);              //Loop end
  
  return 0;
}

//Function that calculates the MPG for the current car
void currentCarMPG(int volumeOfTank, int milesTraveledBeforeRefuel)
{
  //Variables - float because it's an average
  float milesPerGallon;
  
  //Calculation process and static cast
  milesPerGallon = static_cast<float>(milesTraveledBeforeRefuel) / volumeOfTank;  //use ceil or set precision
  
  //Output
  cout << fixed << showpoint << setprecision(1);
  cout << "MPG for this car is: " << milesPerGallon << endl;
  
  //Function calls
  avgMPG(milesPerGallon);
  lowestMPGOfAll(milesPerGallon);
}

//Average MPG calculator for all user entries
void avgMPG (float milesPerGallon)
{
  //Variables -- float for the average -- static for the counter and total MPG holder
  int static entry;
  float static totalMPG;
  float avgMPG;
  
  //Calculation process and entry incrementation
  entry++;
  totalMPG = milesPerGallon + totalMPG;
  avgMPG = totalMPG / entry;
  
  //output
  cout << "Average MPG across all cars is: " << avgMPG << endl;
}

//Comparison Function to hold the lowest MPG
void lowestMPGOfAll (float milesPerGallon)
{
  //Variables -- static to hold counter and lowest value -- float for average
  int static entry;
  float static lowestMPG;
  
  //if process to find and hold lowest value
  if (entry == 0)
    lowestMPG = milesPerGallon;
  else if (lowestMPG > milesPerGallon)
    lowestMPG = milesPerGallon;
    
  //Output
  cout << "Lowest MPG so far is: " << lowestMPG << endl;
  
  //Incrementation
  entry++;
}
/*
[dakpinar@hills Hw6-26]$ ./a.out
Please enter the total volume of your car's tank or Enter 0 to exit: 2
Please enter the number of miles traveled before refueling: 0
Please enter a positive value.
[dakpinar@hills Hw6-26]$ ./a.out
Please enter the total volume of your car's tank or Enter 0 to exit: 256
Please enter the number of miles traveled before refueling: 3
MPG for this car is: 0.0
Average MPG across all cars is: 0.0
Lowest MPG so far is: 0.0
Please enter the total volume of your car's tank or Enter 0 to exit: 69
Please enter the number of miles traveled before refueling: 20000
MPG for this car is: 289.9
Average MPG across all cars is: 144.9
Lowest MPG so far is: 0.0
Please enter the total volume of your car's tank or Enter 0 to exit: 0
[dakpinar@hills Hw6-26]$ ./a.out
Please enter the total volume of your car's tank or Enter 0 to exit: 20
Please enter the number of miles traveled before refueling: 3
MPG for this car is: 0.2
Average MPG across all cars is: 0.2
Lowest MPG so far is: 0.2
Please enter the total volume of your car's tank or Enter 0 to exit: 2600
Please enter the number of miles traveled before refueling: 32
MPG for this car is: 0.0
Average MPG across all cars is: 0.1
Lowest MPG so far is: 0.0
Please enter the total volume of your car's tank or Enter 0 to exit: 2
Please enter the number of miles traveled before refueling: 1000
MPG for this car is: 500.0
Average MPG across all cars is: 166.7
Lowest MPG so far is: 0.0
Please enter the total volume of your car's tank or Enter 0 to exit: 0
*/