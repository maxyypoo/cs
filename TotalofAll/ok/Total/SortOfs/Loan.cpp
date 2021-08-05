//Filename: Loan.cpp
//Description: A Loan calculater that calculates how long it will take to pay a loan
//Assignment: Hw 10 Loan
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Gets the user input
//Uses pass by reference to alter the variables defined in main func
void getUserEntry (float&, double&, float&); 
//Displays all the pertinent information in accordance with taking a loan/debt
void displayInfo (int, float, float);
//Calculates final payment, time it takes to pay the debt and total interest paid, and alters it using pass by reference
//Returns a bool based on user input, regarding valid monthly payment amount, to the main function
//If the flag is checked false, this function outputs the minimal monthly amount needed to pay the debt
bool calculatePaymentInfo (float, double, float, float&, float&, int&);

int main()
{
  //Variables
  float initialPrincipal, monthlyPaymentAmount, finalPayment, totalInterestPaid;
  double annualRate;
  int timeItTakesToPay;
  bool validMonthlyPayment = false;
  
  cout << "** Welcome to the Consumer Loan Calculator **" << endl;
  cout << endl;
  
  getUserEntry (initialPrincipal, annualRate, monthlyPaymentAmount);
  
  //validMonthlyPayment = calculatePaymentInfo (initialPrincipal, annualRate, monthlyPaymentAmount, finalPayment, totalInterestPaid, timeItTakesToPay);
  
  
  if (/*validMonthlyPayment*/ calculatePaymentInfo (initialPrincipal, annualRate, monthlyPaymentAmount, finalPayment, totalInterestPaid, timeItTakesToPay))
    displayInfo(timeItTakesToPay, finalPayment, totalInterestPaid);
  else;
  
  return 0;
}

void getUserEntry (float& initialPrincipalRef, double& annualRateRef, float& monthlyPaymentAmountRef)
{
  bool entryValidationFlag;
  
  //User entry, and input validation
  do 
  {
    cout << "How much do you want to borrow? $";
    cin >> initialPrincipalRef;

    entryValidationFlag = initialPrincipalRef > 0;

    if (!entryValidationFlag)
      cout << "Please enter a positive number." << endl;

  }while (!entryValidationFlag);
  
  do
  {
    cout << "What is the annual interest rate expressed as a percent? ";
    cin >> annualRateRef;
    
    entryValidationFlag = annualRateRef > 0;
    
    if (!entryValidationFlag)
      cout << "Please enter a positive number." << endl;
    
  }while(!entryValidationFlag);
    
  do
  {
    cout << "What is the monthly payment amount? ";
    cin >> monthlyPaymentAmountRef;
    
    entryValidationFlag = monthlyPaymentAmountRef > 0;
    
    if (!entryValidationFlag)
      cout << "Please enter a positive number." << endl;
    
  }while (!entryValidationFlag);
  
  //Setting the percentage to a decimal rate
  annualRateRef /= 100;
}

bool calculatePaymentInfo (float initialPrincipal, double annualRate, float monthlyPaymentAmount, float& finalPaymentRef, float& totalInterestPaidRef, int& timeItTakesToPayRef)
{
  float totalBalance = initialPrincipal, initialTotalBalance;
  float monthlyInterestRate = (annualRate / 12);
  float leastAmountOfMonthlyPayment = initialPrincipal * monthlyInterestRate;
  float totalPayment;
  bool validMonthlyPayment = true;
  float inHolder = 0;
  timeItTakesToPayRef = 0;
  
  initialTotalBalance = totalBalance;
  
  //While loop to calculate amount of time it takes to pay the debt, and total interest
  while (totalBalance > 0 && totalBalance <= initialTotalBalance)
  {
    inHolder += totalBalance * monthlyInterestRate;
    totalBalance = totalBalance + (totalBalance * monthlyInterestRate);
    totalBalance -= monthlyPaymentAmount;
      
    timeItTakesToPayRef++;
  }
    
  totalPayment = initialPrincipal + inHolder;
    
  finalPaymentRef = totalPayment - (monthlyPaymentAmount * (timeItTakesToPayRef - 1));
  totalInterestPaidRef = inHolder;
    
  //If statement to check if the user entered monthly Payment Amount is valid
  if (monthlyPaymentAmount  < totalPayment / timeItTakesToPayRef)
  {
    cout << "You must make payments of at least $" << leastAmountOfMonthlyPayment + 1 << endl;
    cout << "Because your monthly interest is $" << leastAmountOfMonthlyPayment << endl;
    cout << endl;
    cout << "** Don't get overwhelmed with debt! **" << endl;
    validMonthlyPayment = false;
  }
  
  return validMonthlyPayment;
}

void displayInfo (int timeItTakesToPay, float finalPayment, float totalInterestPaid)
{
  //Output
  cout << setprecision(2) << fixed;
  cout << "Your debt will be paid off after " << timeItTakesToPay << " months, with a final payment of just $" <<  finalPayment << endl;
  cout << "The total amount of interest you will pay during that time is $" << totalInterestPaid << "." << endl;
  cout << endl;
  cout << "** Don't get overwhelmed with debt! **" << endl;
}
/*
** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $1000
What is the annual interest rate expressed as a percent? 18
What is the monthly payment amount? 50
Your debt will be paid off after 24 months, with a final payment of just $47.83
The total amount of interest you will pay during that time is $197.83.

** Don't get overwhelmed with debt! **
[dakpinar@hills SortOfs]$ ./a.out Loan.cpp
** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $15000
What is the annual interest rate expressed as a percent? 10
What is the monthly payment amount? 100
You must make payments of at least $126
Because your monthly interest is $125

** Don't get overwhelmed with debt! **
[dakpinar@hills SortOfs]$ ./a.out Loan.cpp
** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $-50
Please enter a positive number.
How much do you want to borrow? $-200
Please enter a positive number.
How much do you want to borrow? $20000
What is the annual interest rate expressed as a percent? -2.5
Please enter a positive number.
What is the annual interest rate expressed as a percent? 5
What is the monthly payment amount? 0
Please enter a positive number.
What is the monthly payment amount? 200
Your debt will be paid off after 130 months, with a final payment of just $125.80
The total amount of interest you will pay during that time is $5925.80.

** Don't get overwhelmed with debt! **
*/