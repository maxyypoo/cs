//Filename: Mean.cpp
//Assignment: Hw 9 Func
//Description: Calculates t score; a statistical score too see if your treatment produces significant difference compared to the control group
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int getTotalEntries (double [], int);                                                       //Get all raw scores and writes them into an array and returns the amount of scores in the array
float getSumOfEntries (double [], int);                                                     //Adds all the scores up
float getSumOfSquares (double [], int, int, float);                                         //Calculates Sum of Squares, which is needed to calculate Standard deviation
void displayMean (int, float, float, double [], int, float, float, float, float);           //Displays the array, sum of scores and the mean and all other values
float getVariance (float, int);                                                             //Calculates and returns variance
float getStandardDeviation (float);                                                         //Calculates and returns Standard Deviation
float getStudentsTScore (float, float, float);                                              //Calculates and return t-Score

int main()
{
  const int MAX_ARRAY_SIZE = 1000;
  double rawScores[MAX_ARRAY_SIZE];
  int totalEntries = 0;
  float sumOfEnteries = 0;
  float mean, populationMean;
  float sumOfSquares, variance, standardDeviation;
  float tScore;
  bool exit = false;
  
  cout << "This program calculates t-Score based on raw scores and population mean entered." << endl;
  cout << "Please enter the population mean for the research you are doing: ";
  cin >> populationMean;
  
  cout << "Please enter the raw scores (enter -1.01 to stop input process): ";
  
  for (int count = 0; count < MAX_ARRAY_SIZE && rawScores[count - 1] != -1.01; count++)
    cin >> rawScores[count];
  
  totalEntries = getTotalEntries(rawScores, MAX_ARRAY_SIZE);
  sumOfEnteries = getSumOfEntries(rawScores, MAX_ARRAY_SIZE);
  sumOfSquares = getSumOfSquares (rawScores, MAX_ARRAY_SIZE, totalEntries, sumOfEnteries);
  mean = sumOfEnteries / totalEntries;
  variance = getVariance (sumOfSquares, totalEntries);
  standardDeviation = getStandardDeviation (variance);
  tScore = getStudentsTScore (mean, populationMean, standardDeviation);
  
  
  displayMean (totalEntries, sumOfEnteries, mean, rawScores, MAX_ARRAY_SIZE, sumOfSquares, variance, standardDeviation, tScore);
  
  return 0;
}

//Goes through the entry and counts up all numbers entered
int getTotalEntries (double rawScoresRef[], int MAX_ARRAY_SIZE)
{
  int totalEntries = 0;
  
   for (int count = 0; count < MAX_ARRAY_SIZE && rawScoresRef[count] != -1.01; count++)
     totalEntries++;
  
  return totalEntries;
}

//Adds up the contents of the array
float getSumOfEntries (double rawScoresRef[], int MAX_ARRAY_SIZE)
{
  float sumOfEnteries = 0;
  
  for (int i = 0; i < MAX_ARRAY_SIZE && rawScoresRef[i] != -1.01; i++)
    sumOfEnteries += rawScoresRef[i];
  
  return sumOfEnteries;
}

//Display function; Outputs all the info to console
void displayMean (int totalEntries, float sumOfEnteries, float mean, double rawScoresRef[], int MAX_ARRAY_SIZE, float sumOfSquares, float variance, float standardDeviation, float tScore)
{
  cout << "The scores you entered are: ";
  
  for (int count = 0; count < MAX_ARRAY_SIZE && rawScoresRef[count] != -1.01; count++)
    cout << rawScoresRef[count] << " ";
  
  cout << endl;
  
  cout << "Your sample size is: " << totalEntries << "." << endl;
  cout << "Sum of all the raw scores you entered is: " << sumOfEnteries << endl;
  cout << "The mean of the numbers you entered is: " << mean << endl; 
  cout << "Sum of Squares is: " << sumOfSquares << endl;
  cout << "Variance is: " << variance << endl;
  cout << "Standard Deviation is: " << standardDeviation << endl;
  cout << "Studendized t-Score is: " << tScore << endl;
}

//Calculates sum of squares
float getSumOfSquares (double rawScoresRef[], int MAX_ARRAY_SIZE, int totalEntries, float sumOfEnteries)
{
  //Variables
  //The first one is, you square each number individually and then add them up -- Second one, you add them up then square
  float sumOfRawScoresSquared, squareOfSumOfRawScores;
  float numberHolder = 0;
  float sumOfSquares;
  
  squareOfSumOfRawScores = pow (sumOfEnteries, 2);
  
  for (int count = 0; count < MAX_ARRAY_SIZE && rawScoresRef[count] != -1.01; count++)
    numberHolder = numberHolder + (pow (rawScoresRef[count], 2));
  
  sumOfRawScoresSquared = numberHolder;
  
  sumOfSquares = sumOfRawScoresSquared - (squareOfSumOfRawScores / totalEntries);
  
  return sumOfSquares;
}

//Calculates degrees Of freedoom and variance
float getVariance (float sumOfSquares, int totalEntries)
{
  float variance;
  int degreesOfFreedom;
  
  degreesOfFreedom = totalEntries - 1;
  
  variance = sumOfSquares / degreesOfFreedom;
  
  return variance;
}

//Calculates Standard deviation
float getStandardDeviation (float variance)
{
  float standardDeviation;
  
  standardDeviation = sqrt (variance);
  
  return standardDeviation;
}

//Gets the t-score
float getStudentsTScore (float mean, float populationMean, float standardDeviation)
{
  float tScore;
  
  tScore = (mean - populationMean) / standardDeviation;
  
  return tScore;
}
/*
[dakpinar@hills SortOfs]$ ./a.out
This program calculates t-Score based on raw scores and population mean entered.
Please enter the population mean for the research you are doing: 30
Please enter the raw scores (enter -1.01 to stop input process): 30 27 28 22 45 33 -1.01
The scores you entered are: 30 27 28 22 45 33
Your sample size is: 6.
Sum of all the raw scores you entered is: 185
The mean of the numbers you entered is: 30.8333
Sum of Squares is: 306.833
Variance is: 61.3667
Standard Deviation is: 7.83369
Studendized t-Score is: 0.106378
*/