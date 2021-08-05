#include <iostream>
#include <iomanip>
using namespace std;
 
//Function Prototype
float celcius(float);

//Main function
int main()
{
  //Variables
  float fahrenheit;
  
  //For loop to repeat till F=20
  for (fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
    {
    cout << fahrenheit << " degrees in fahrenheit is "<< celcius(fahrenheit) << setprecision(1) << fixed << " degrees in celcius.\n";
    }
  
  return 0;
}

//Conversion Function
float celcius(float fahrenheit)
{
  //Variables
  float celciusVar;
  //Calculation process
  celciusVar = (fahrenheit - 32) * 5 / 9;
  //Output
 return celciusVar;
}