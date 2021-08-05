//file:Loan2.cpp
//assignment:CS110A, Decisions 08 - adv
//description:Create a program that calculates and reports on monthly loan data.
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void changeRecord (float &, float &, int &);
void displayRecord (float &, float &, float &, float &, float &, float &, int &);
void printRecord (float, float, float, float, float, int);
void inputFromFileRecord (float &, float &, float &, float &, float &, float &, int &);
void calcsFunc (float, float, int);
int userOptionInput ();

int main()
{
  float loanAmount, monthlyInterestRate, monthlyPayment, amountPaidBack, interestPaid, compundingRate;
  int numberOfPayments;
  int userChoice;
  bool exitChoice = false;
  
  do
  {
    cout << "Welcome to Loan Calculator. Please select an option." << endl;
    cout << setfill('*') << setw(53) << " " << endl;
    cout << setfill(' ');
    cout << "1. Change the Loan Amount, Monthly Interest Rate, or Number of Payments." << endl;
    cout << "2. Calculate and display a report." << endl;
    cout << "3. Allow the user to save the report to a text file." << endl;
    cout << "4. Allow the user to generate a report from an input file." << endl;
    cout << "5. Exit the program." << endl;
    cout << "Please enter your choice: ";
    userChoice = userOptionInput();
    
    if (userChoice < 1 || userChoice > 5)
    {
      cout << "Please enter a number ranging from 1-5" << endl;
      continue;
    }
    
    switch (userChoice)
    {
      case 1 :
        changeRecord (loanAmount, monthlyInterestRate, numberOfPayments);
        break;
        
      case 2 :
        displayRecord (loanAmount, monthlyInterestRate, monthlyPayment, compundingRate, amountPaidBack, interestPaid, numberOfPayments);
        break;
        
      case 3 :
        printRecord (loanAmount, monthlyInterestRate, monthlyPayment, amountPaidBack, interestPaid, numberOfPayments);
        break;
        
      case 4 :
        inputFromFileRecord (loanAmount, monthlyInterestRate, monthlyPayment, compundingRate, amountPaidBack, interestPaid, numberOfPayments);
        break;
        
      case 5 :
        cout << "Thanks for using. Good Bye." << endl;
        exitChoice = true;
        break;
        
      default:
        cout << "Please enter a number 1-5." << endl;
        break;
    }
  }while(!(exitChoice));
  
  return 0;
}

int userOptionInput ()
{
  int userChoice;
  
  cin >> userChoice;
  
  return userChoice;
}

void calcsFunc (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef)
{
  monthlyInterestRateRef = monthlyInterestRateRef / 100;
  compundingRateRef = pow(((monthlyInterestRateRef / 12) + 1 ) , numberOfPaymentsRef);
  monthlyPaymentRef = loanAmountRef * compundingRateRef - loanAmountRef;
  amountPaidBackRef = monthlyPaymentRef * numberOfPaymentsRef;
  interestPaidRef = amountPaidBackRef - loanAmountRef;
}

void printRecord (float loanAmount, float monthlyInterestRate, float monthlyPayment, float amountPaidBack, float interestPaid, int numberOfPayments)
{
  ofstream fout;
  fout.open ("Record.txt");
  
  //Output
  fout << setw(40) << left << "Loan Amount:" << "$" << loanAmount << "\n";
  fout << setw(40) << left << "Monthly Interest Rate: " << monthlyInterestRate * 100 << "%\n";
  fout << setw(40) << left << "Number Of Payments: " << numberOfPayments << "\n";
  fout << setw(40) << left << "Monthly Payment:" << "$" << monthlyPayment << "\n";
  fout << setw(40) << left << "Total Amount Paid:" << "$" << amountPaidBack << "\n";
  fout << setw(40) << left <<"Interest Paid:" << "$" << interestPaid << "\n";
  
  fout.close();
}

void changeRecord (float &loanAmountRef, float &monthlyInterestRateRef, int &numberOfPaymentsRef)
{
  int userChoice;
  bool exitChoice = false;
  do 
  {   
    //  Menu selection output
    cout << "1. Change the loan amount." << endl;
    cout << "2. Change the amount of monthly payments." << endl;
    cout << "3. Change the monthly interest rate." << endl;
    cout << "4. Exit the program." << endl;
    cout << "Please select or enter 4 to exit ";
    userChoice = userOptionInput();

    switch (userChoice)
    {
      case 1 :
        cout << "Please enter a new loan amount: $";
        cin >> loanAmountRef;
        break;
      case 2 :
        cout << "Please enter a new amount of monthly payments: ";
        cin >> numberOfPaymentsRef;
        break;
      case 3 :
        cout << "Please enter a new monthly interest rate: ";
        cin >> monthlyInterestRateRef;
        break;
      case 4 :
        cout << "Returning to the main menu." << endl;
        exitChoice = true;
        break;
      default:
        cout << "Please enter a number between 1 and 4." << endl;
        break;
    }
  }while (!(exitChoice));
}

void displayRecord (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef)
{
  calcsFunc (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, compundingRateRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef);
  
    cout << setw(40) << left << "Loan Amount:" << "$" << loanAmountRef << "\n";
    cout << setw(40) << left << "Monthly Interest Rate: " << monthlyInterestRateRef * 100 << "%\n";
    cout << setw(40) << left << "Number Of Payments: " << numberOfPaymentsRef << "\n";
    cout << setw(40) << left << "Monthly Payment:" << "$" << monthlyPaymentRef << "\n";
    cout << setw(40) << left << "Total Amount Paid:" << "$" << amountPaidBackRef << "\n";
    cout << setw(40) << left <<"Interest Paid:" << "$" << interestPaidRef << "\n";
}

void inputFromFileRecord (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef)
{
  ifstream fin;
  int userChoice;
  string choiceOfFile;
  
  cout << "Make sure the file ends in txt and enter the name in correct format. Eg. \"Output.txt\"" << endl;
  cout << "Values are entered in the shown order: Loan Amount, Monthly Interest Rate, Number of Payments." << endl;
  cout << "Please enter the file you would like to get values from.";
  cin >> choiceOfFile;
  
  fin.open (choiceOfFile);
  
  fin >> loanAmountRef;
  fin >> monthlyInterestRateRef;
  fin >> monthlyPaymentRef;
  
  calcsFunc (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, compundingRateRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef);
  
  cout << "Enter 1 if you'd like to display it on the secreen or enter 2 of you'd like to save it to a file: ";
  userChoice = userOptionInput();
  
  if (userChoice == 1)
  {
    displayRecord (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, compundingRateRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef);
  }
  else if (userChoice == 2)
  {
    printRecord (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef);
  }
  else
    cout << "Exitting." << endl;
  
  fin.close();
}
