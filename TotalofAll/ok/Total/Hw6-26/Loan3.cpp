//file:Loan2.cpp
//assignment:CS110A, Decisions 08 - adv
//description:Create a program that calculates and reports on monthly loan data.
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

void changeRecord (float &, float &, float &, float &, float &, float &, int &);
void displayRecord (float &, float &, float &, float &, float &, float &, int &, bool, bool);
void printRecord (float &, float &, float &, float &, float &, float &, int &);
void inputFromFileRecord (float &, float &, float &, float &, float &, float &, int &);

int main()
{
  float loanAmount, monthlyInterestRate, monthlyPayment, amountPaidBack, interestPaid, compundingRate;
  int numberOfPayments;
  int userChoice;
  bool exitChoice = false;
  bool displayReport = true;
  bool saveReport = false;
  
  do
  {
    cout << "Welcome to Loan Calculator. Please select an option." << endl;
    cout << setfill('*') << setw(53) << " " << endl;
    cout << "1. Change the Loan Amount, Monthly Interest Rate, or Number of Payments." << endl;
    cout << "2. Calculate and display a report." << endl;
    cout << "3. Allow the user to save the report to a text file." << endl;
    cout << "4. Allow the user to generate a report from an input file." << endl;
    cout << "5. Exit the program." << endl;
    cout << "Please enter your choice: ";
    cin >> userChoice;
    
    if (userChoice < 1 || userChoice > 5)
    {
      cout << "Please enter a number ranging from 1-5" << endl;
      continue;
    }
    
    switch (userChoice)
    {
      case 1 :
        changeRecord (loanAmount, monthlyInterestRate, monthlyPayment, compundingRate, amountPaidBack, interestPaid, numberOfPayments);
        break;
      case 2 :
        displayRecord (loanAmount, monthlyInterestRate, monthlyPayment, compundingRate, amountPaidBack, interestPaid, numberOfPayments, displayReport, saveReport);
        break;
      case 3 :
        printRecord (loanAmount, monthlyInterestRate, monthlyPayment, compundingRate, amountPaidBack, interestPaid, numberOfPayments);
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


void printRecord (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef)
{
  cout << "Inside of printRecord function: " << endl;
  cout << "Input1: " << "loanAmount: " << loanAmountRef << endl;
  cout << "Input2: " << "monthlyInterestRate: " << monthlyInterestRateRef << endl;
  cout << "Input3: " << "monthlyPayment: " << monthlyPaymentRef << endl;
  cout << "Input4: " << "compundingRate: " << compundingRateRef << endl;
  cout << "Input5: " << "amountPaidBack: " << amountPaidBackRef << endl;
  cout << "Input6: " << "interestPaid: " << interestPaidRef << endl;
  cout << "Input7: " << "numberOfPayments: " << numberOfPaymentsRef << endl;
  cout << "Output: " << "NAN" << endl;
  
  /* Uncomment
  ofstream fout;
  fout.open ("Record.txt");
  
  //Output
  fout << setw(40) << left << "Loan Amount:" << "$" << loanAmountRef << "\n";
  fout << setw(40) << left << "Monthly Interest Rate: " << monthlyInterestRateRef * 100 << "%\n";
  fout << setw(40) << left << "Number Of Payments: " << numberOfPaymentsRef << "\n";
  fout << setw(40) << left << "Monthly Payment:" << "$" << monthlyPaymentRef << "\n";
  fout << setw(40) << left << "Total Amount Paid:" << "$" << amountPaidBackRef << "\n";
  fout << setw(40) << left <<"Interest Paid:" << "$" << interestPaidRef << "\n";
  
  fout.close();
  */
}

void changeRecord (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef)
{
  int userChoice;
  bool exitChoice = false;
  //do  Uncomment
  //{   Uncomment
    cout << "Inside of changeRecord function: " << endl;
    cout << "Input1: " << "loanAmount: " << loanAmountRef << endl;
    cout << "Input2: " << "monthlyInterestRate: " << monthlyInterestRateRef << endl;
    cout << "Input3: " << "monthlyPayment: " << monthlyPaymentRef << endl;
    cout << "Input4: " << "compundingRate: " << compundingRateRef << endl;
    cout << "Input5: " << "amountPaidBack: " << amountPaidBackRef << endl;
    cout << "Input6: " << "interestPaid: " << interestPaidRef << endl;
    cout << "Input7: " << "numberOfPayments: " << numberOfPaymentsRef << endl;
    cout << "Output: " << "NAN" << endl;
    
    
    /*   Uncomment
    cout << "1. Change the loan amount." << endl;
    cout << "2. Change the amount of monthly payments." << endl;
    cout << "3. Change the monthly interest rate." << endl;
    cout << "4. Exit the program." << endl;
    cout << "Please select or enter 4 to exit ";
    cin >> userChoice;

    switch (userChoice)
    {
      case 1 :
        cout << "Please enter a new loan amount: $";
        cin >> loanAmountRef;
        break;
      case 2 :
        cout << "Please enter a new amount of monthly payments: ";
        cin >> monthlyPaymentRef;
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
  */
}

void displayRecord (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef, bool displayReport, bool saveReport)
{
  cout << "Inside of displayRecord function: " << endl;
  cout << "Input1: " << "loanAmount: " << loanAmountRef << endl;
  cout << "Input2: " << "monthlyInterestRate: " << monthlyInterestRateRef << endl;
  cout << "Input3: " << "monthlyPayment: " << monthlyPaymentRef << endl;
  cout << "Input4: " << "compundingRate: " << compundingRateRef << endl;
  cout << "Input5: " << "amountPaidBack: " << amountPaidBackRef << endl;
  cout << "Input6: " << "interestPaid: " << interestPaidRef << endl;
  cout << "Input7: " << "numberOfPayments: " << numberOfPaymentsRef << endl;
  cout << "Output: " << "NAN" << endl;
  
  /*  Uncomment
  //Processing
  monthlyInterestRateRef = monthlyInterestRateRef / 100;
  compundingRateRef = pow(((monthlyInterestRateRef / 12) + 1 ) , numberOfPaymentsRef);
  monthlyPaymentRef = loanAmountRef * compundingRateRef - loanAmountRef;
  amountPaidBackRef = monthlyPaymentRef * numberOfPaymentsRef;
  interestPaidRef = amountPaidBackRef - loanAmountRef;
  
  if(displayReport)
  {
    cout << setw(40) << left << "Loan Amount:" << "$" << loanAmountRef << "\n";
    cout << setw(40) << left << "Monthly Interest Rate: " << monthlyInterestRateRef * 100 << "%\n";
    cout << setw(40) << left << "Number Of Payments: " << numberOfPaymentsRef << "\n";
    cout << setw(40) << left << "Monthly Payment:" << "$" << monthlyPaymentRef << "\n";
    cout << setw(40) << left << "Total Amount Paid:" << "$" << amountPaidBackRef << "\n";
    cout << setw(40) << left <<"Interest Paid:" << "$" << interestPaidRef << "\n";
  }
  if(saveReport)
    printRecord (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, compundingRateRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef);
    */
}

void inputFromFileRecord (float &loanAmountRef, float &monthlyInterestRateRef, float &monthlyPaymentRef, float &compundingRateRef, float &amountPaidBackRef, float &interestPaidRef, int &numberOfPaymentsRef)
{
  ifstream fin;
  int userChoice;
  bool displayReport = false;
  bool saveReport = false;
  string choiceOfFile;
  
  cout << "Inside of displayRecord function: " << endl;
  cout << "Input1: " << "loanAmount: " << loanAmountRef << endl;
  cout << "Input2: " << "monthlyInterestRate: " << monthlyInterestRateRef << endl;
  cout << "Input3: " << "monthlyPayment: " << monthlyPaymentRef << endl;
  cout << "Input4: " << "compundingRate: " << compundingRateRef << endl;
  cout << "Input5: " << "amountPaidBack: " << amountPaidBackRef << endl;
  cout << "Input6: " << "interestPaid: " << &interestPaidRef << endl;
  cout << "Input7: " << "numberOfPayments: " << numberOfPaymentsRef << endl;
  cout << "Output: " << "NAN" << endl;
  
  /*  Uncomment
  cout << "Make sure the file ends in txt and enter the name in correct format. Eg. \"Output.txt\"" << endl;
  cout << "Values are entered in the shown order: Loan Amount, Monthly Interest Rate, Number of Payments." << endl;
  cout << "Please enter the file you would like to get values from.";
  cin >> choiceOfFile;
  
  fin.open (choiceOfFile);
  
  fin >> loanAmountRef;
  fin >> monthlyInterestRateRef;
  fin >> monthlyPaymentRef;
  
  cout << "Enter 1 if you'd like to display it on the secreen or enter 2 of you'd like to save it to a file: ";
  cin >> userChoice;
  
  if (userChoice == 1)
  {
    displayReport = true;
    saveReport = false;
    displayRecord (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, compundingRateRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef, displayReport, saveReport);
  }
  else if (userChoice == 2)
  {
    saveReport = true;
    displayRecord (loanAmountRef, monthlyInterestRateRef, monthlyPaymentRef, compundingRateRef, amountPaidBackRef, interestPaidRef, numberOfPaymentsRef, displayReport, saveReport);
  }
  else
    cout << "Exitting." << endl;
  
  fin.close();
  */
}
