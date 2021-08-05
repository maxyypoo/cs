//Filename: main.cpp
//Description: A mile to Km converter
//Assignment: Hw 9/10
#include <iostream>
#include <iomanip>

int main()
{
  float milesInput, convertedKilometers;
  
  std::cout << "Please enter the amount of miles you'd like to convert: ";
  std::cin >> milesInput;
  
  convertedKilometers = (milesInput * 1.609344);
  
  std::cout << std::setprecision(1) << std::fixed;
  std::cout << milesInput << " miles are " << convertedKilometers << " kilometers.";
  std::cout << '\n';
  
  return 0;
}
/*
[dakpinar@hills Work8-28]$ ./a.out
Please enter the amount of miles you'd like to convert: 25
25.0 miles are 40.2 kilometers.
/*