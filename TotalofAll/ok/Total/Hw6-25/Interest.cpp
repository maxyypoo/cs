/*
Filename: Interest.cpp
Description: Using file streaming to output a txt record of compounding loan based on user input.
Assignment: Expressions 07 Hw 6/25
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

//Function Prototype
void printRecord(float, float, float, float, float, float, int);

int main()
{
  //Variables
  float loanAmount, monthlyInterestRate, monthlyPayment, amountPaidBack, interestPaid, compundingRate;
  int numberOfPayments;
  
  //Input
  cout << setprecision(2) << fixed;
  cout << "Please enter the loan amount: $";
  cin >> loanAmount;
  cout << "Please enter the monthly interest rate: ";
  cin >> monthlyInterestRate;
  cout << "Please enter the number of payments: ";
  cin >> numberOfPayments;
  
  //Processing
  monthlyInterestRate = monthlyInterestRate / 100;
  compundingRate = pow(((monthlyInterestRate / 12) + 1 ) , numberOfPayments);
  monthlyPayment = loanAmount * compundingRate - loanAmount;
  amountPaidBack = monthlyPayment * numberOfPayments;
  interestPaid = amountPaidBack * monthlyInterestRate;
  
  //Functiono call to save values
  printRecord(loanAmount, monthlyInterestRate, monthlyPayment, compundingRate, amountPaidBack, interestPaid, numberOfPayments);
  
  return 0;
}

void printRecord(float loanAmount, float monthlyInterestRate, float monthlyPayment, float compundingRate, float amountPaidBack, float interestPaid, int numberOfPayments)
{
  //File streaming declaration
  ofstream fout;
  fout.open("Records.txt");
  
  //Output
  fout << setw(40) << left << "Loan Amount:" << "$";
  fout << "" << setw(8) << right << loanAmount << "\n";
  fout << setw(40) << left << "Monthly Interest Rate: ";
  fout << setw(8) << right << monthlyInterestRate * 100 << "%\n";
  fout << setw(40) << left << "Number Of Payments: "; 
  fout << setw(9) << right << numberOfPayments << "\n";
  fout << setw(40) << left << "Monthly Payment:" << "$"; 
  fout << setw(8) << right << monthlyPayment << "\n";
  fout << setw(40) << left << "Total Amount Paid:" << "$";
  fout << setw(8) << right << amountPaidBack << "\n";
  fout << setw(40) << left <<"Interest Paid:" << "$";
  fout << setw(8) << right << interestPaid << "\n";
}
/*
dakpinar@hills Hw6-25]$ ./a.out
Please enter the loan amount: $5632
Please enter the monthly interest rate: 4
Please enter the number of payments: 48
[dakpinar@hills Hw6-25]$ cat Records.txt
Loan Amount:                            $5632
Monthly Interest Rate:                  4%
Number Of Payments:                     48
Monthly Payment:                        $975.454
Total Amount Paid:                      $46821.8
Interest Paid:                          $1872.87
*/