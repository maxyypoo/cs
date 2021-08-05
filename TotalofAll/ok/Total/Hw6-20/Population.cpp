#include <iostream>
using namespace std;

int main()
{
  int totalMalesInClass, totalFemalesInClass, totalIndividualsInClass;
  float percentOfMales, percentOfFemales;
  
  cout << "Please enter the amount males in your class: ";
  cin >> totalMalesInClass;
  cout << "Please enter the amount of females in your class:";
  cin >> totalFemalesInClass;
  
  totalIndividualsInClass = totalFemalesInClass + totalMalesInClass;
  percentOfMales = totalMalesInClass / totalIndividualsInClass * 100;
  percentOfFemales = totalFemalesInClass / totalIndividualsInClass * 100;
  
  cout << "Percantage of males in your class is: " << percentOfMales << "%" << endl;
  cout << "Percantage of females in your class is: " << percentOfFemales << "%" << endl;
  
  return 0;
}