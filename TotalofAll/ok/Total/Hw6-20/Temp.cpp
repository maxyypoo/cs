/*
Filename: Temp.cpp
Description: Using void datatype and function calling to loop and display tempareture conversions
Assignment: Function2 6/20
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
//Function Prototype
void celcius(float);

//Main function
int main()
{
  //Variables
  float fahrenheit;
  
  //For loop to repeat till F=20
  for (fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
    celcius(fahrenheit);
  
  return 0;
}

//Conversion Function
void celcius(float fahrenheit)
{
  //Variables
  float celciusVar;
  //Calculation process
  celciusVar = (fahrenheit - 32) * 5 / 9;
  //Output
  cout << fahrenheit << " degrees in fahrenheit is "<< celciusVar << setprecision(1) << fixed << " degrees in celcius.\n";
}
/*
[dakpinar@hills Hw6-20]$ ./a.out
0 degrees in fahrenheit is -17.7778 degrees in celcius.
1.0 degrees in fahrenheit is -17.2 degrees in celcius.
2.0 degrees in fahrenheit is -16.7 degrees in celcius.
3.0 degrees in fahrenheit is -16.1 degrees in celcius.
4.0 degrees in fahrenheit is -15.6 degrees in celcius.
5.0 degrees in fahrenheit is -15.0 degrees in celcius.
6.0 degrees in fahrenheit is -14.4 degrees in celcius.
7.0 degrees in fahrenheit is -13.9 degrees in celcius.
8.0 degrees in fahrenheit is -13.3 degrees in celcius.
9.0 degrees in fahrenheit is -12.8 degrees in celcius.
10.0 degrees in fahrenheit is -12.2 degrees in celcius.
11.0 degrees in fahrenheit is -11.7 degrees in celcius.
12.0 degrees in fahrenheit is -11.1 degrees in celcius.
13.0 degrees in fahrenheit is -10.6 degrees in celcius.
14.0 degrees in fahrenheit is -10.0 degrees in celcius.
15.0 degrees in fahrenheit is -9.4 degrees in celcius.
16.0 degrees in fahrenheit is -8.9 degrees in celcius.
17.0 degrees in fahrenheit is -8.3 degrees in celcius.
18.0 degrees in fahrenheit is -7.8 degrees in celcius.
19.0 degrees in fahrenheit is -7.2 degrees in celcius.
20.0 degrees in fahrenheit is -6.7 degrees in celcius.
*/
