//Filename: Tax.cpp
//Assignment: HW4 7/2 Tax
//Description: A sales and sales tax calculator, using material from all chapters
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Function Prototype
int yearSalesCollected ();
string monthSalesCollected ();
void displayFunction (int, string, float, float, float, float, float);
float calculateTaxFunc (float);
float userSalesInput ();
void archiveOutput (int, string, float, float, float, float, float);

int main ()
{
  //Variables
  string monthOfSale;
  int yearOfSale;
  float totalIncome;
  float totalSales;
  char userInputForRecord;
  const float countyTax = 0.02, stateTax = 0.04;
  float totalTax = countyTax + stateTax;
  
  //Start of processing and function calls
  cout << "Welcome to the Sales report book" << endl;
  monthOfSale = monthSalesCollected ();
  yearOfSale = yearSalesCollected ();
  totalIncome = userSalesInput ();
  totalSales = calculateTaxFunc(totalIncome);
  displayFunction (yearOfSale, monthOfSale, totalIncome, totalSales, countyTax, stateTax, totalTax);
  
  //Prompt for recording
  cout << "Would you like to record this report ? Y/N: ";
  cin >> userInputForRecord;
  
  userInputForRecord = tolower(userInputForRecord);
  
  //calling the record function
  if (userInputForRecord == 'y')
    archiveOutput (yearOfSale, monthOfSale, totalIncome, totalSales, countyTax, stateTax, totalTax);
  
  return 0;
}

string monthSalesCollected ()
{
  //variable
  string monthOfSale;
  
  //input
  cout << "Please enter the month that you are reporting the sales for: ";
  cin >> monthOfSale;
  
  //returning the month as a string
  return monthOfSale;
}

int yearSalesCollected ()
{
  //Variable
  int yearOfSale;
  
  //Input
  cout << "Please enter the year that you are reporting the sales for: ";
  cin >> yearOfSale;
  
  return yearOfSale;
}
float userSalesInput ()
{
  //Variable
  float totalIncome;
  
  //Input
  cout << "Please enter the total income for this month: $";
  cin >> totalIncome;
  
  return totalIncome;
}

float calculateTaxFunc (float totalIncome)
{
  //Vaiables
  float totalSales, totalTax = 0.06;
  
  //Calculating sales
  totalSales = totalIncome - (totalIncome * totalTax);
  
  return totalSales;
}

void displayFunction (int yearOfSale, string monthOfSale, float totalIncome, float totalSales, float countyTax, float stateTax, float totalTax)
{
  //Output
  cout << setprecision(2) << fixed;
  
  cout << setw(10) << left << "Month:" << monthOfSale;
  cout << setw(7) << right << yearOfSale << endl;
  
  cout << setfill('-');
  cout << setw(22) << '-' << endl;
  cout << setfill (' ');
  
  cout << "Total collected:" << setw(7) << "$";
  cout << right << setw(10) << totalIncome  << endl;
  cout << "Sales:" << setw(17) << "$";
  cout << right << setw(10) << totalSales << endl;
  cout << "County Sales Tax:" << setw(6) << "$";
  cout << right << setw(10) << (totalIncome * countyTax) << endl;
  cout << "State Sales Tax:" << setw(7) << "$";
  cout << right << setw(10) << (totalIncome * stateTax) << endl;
  cout << "Total Sales Tax:" << setw(7) << "$";
  cout << right << setw(10) << (totalIncome * totalTax) << endl;
  
  cout << setfill('-');
  cout << setw(22) << '-' << endl;
  cout << setfill (' ');
}

void archiveOutput (int yearOfSale, string monthOfSale, float totalIncome, float totalSales, float countyTax, float stateTax, float totalTax)
{
  //File streaming output
  ofstream fout;
  
  string nameOfTheFile;
  
  cout << "Please enter the name of the file you would like to create (eg. Record.txt or February2005.txt) : ";
  cin >> nameOfTheFile;
  
  fout.open(nameOfTheFile);
  
  fout << setprecision(2) << fixed;
  
  fout << setw(10) << left << "Month:" << monthOfSale;
  fout << setw(7) << right << yearOfSale << endl;
  
  fout << setfill('-');
  fout << setw(22) << '-' << endl;
  fout << setfill (' ');
  
  fout << "Total collected:" << setw(7) << "$";
  fout << right << setw(10) << totalIncome  << endl;
  fout << "Sales:" << setw(17) << "$";
  fout << right << setw(10) << totalSales << endl;
  fout << "County Sales Tax:" << setw(6) << "$";
  fout << right << setw(10) << (totalIncome * countyTax) << endl;
  fout << "State Sales Tax:" << setw(7) << "$";
  fout << right << setw(10) << (totalIncome * stateTax) << endl;
  fout << "Total Sales Tax:" << setw(7) << "$";
  fout << right << setw(10) << (totalIncome * totalTax) << endl;
  
  fout << setfill('-');
  fout << setw(22) << '-' << endl;
  fout << setfill (' ');
  
  fout.close();
}
/*
dakpinar@hills Hw7-2]$ ./a.out
Welcome to the Sales report book
Please enter the month that you are reporting the sales for: February
Please enter the year that you are reporting the sales for: 2018
Please enter the total income for this month: $1265.98
Month:    February   2018
----------------------
Total collected:      $   1265.98
Sales:                $   1190.02
County Sales Tax:     $     25.32
State Sales Tax:      $     50.64
Total Sales Tax:      $     75.96
----------------------
Would you like to record this report ? Y/N: y
Please enter the name of the file you would like to create (eg. Record.txt or February2005.txt) : Records.txt
[dakpinar@hills Hw7-2]$ cat Records.txt
Month:    February   2018
----------------------
Total collected:      $   1265.98
Sales:                $   1190.02
County Sales Tax:     $     25.32
State Sales Tax:      $     50.64
Total Sales Tax:      $     75.96
----------------------
*/