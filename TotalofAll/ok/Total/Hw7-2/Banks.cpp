//Filename: Banks.cpp
//Assignment: HW5 7/2 Bank
//Description: A monthly fee calculator for a checking account based on account balance and number of checks written
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Variables
  const float MONTHLY_BANK_FEE = 10.0;
  const float IF_BALANCE_UNDER_400 = 15.0;
  const float FEE_IF_LESS_THAN_20_CHECKS = 0.10;
  const float FEE_IF_LESS_THAN_40_CHECKS = 0.08;
  const float FEE_IF_LESS_THAN_60_CHECKS = 0.06;
  const float FEE_IF_MORE_THAN_60_CHECKS = 0.04;
  float beginningBalance;
  float checkPriceHolder;
  float bankFee = 0;
  int numberOfChecksWritten;
  
  //Input
  cout << "Enter the following information about your checking account." << endl;
  cout << "Beginning Balance: $";
  cin >> beginningBalance;
  cout << "Number of Checks Written: ";
  cin >> numberOfChecksWritten;
  
  //If processing to check if there is erroneous user input
  if (numberOfChecksWritten < 0)
    cout << "Please enter a positive number." << endl;
  
  //Process for calculating bank fee
  else
  {
    bankFee += MONTHLY_BANK_FEE;
    
    if (beginningBalance < 0)
    {
      cout << "Urgent! Your account is overdrawn." << endl;
      bankFee += IF_BALANCE_UNDER_400;
    }
    else if (beginningBalance < 400)
      bankFee += IF_BALANCE_UNDER_400;
    
    if (numberOfChecksWritten < 20)
      checkPrice = FEE_IF_LESS_THAN_20_CHECKS;
    else if (numberOfChecksWritten >= 20 && numberOfChecksWritten < 40)
      checkPrice = FEE_IF_LESS_THAN_40_CHECKS;
    else if (numberOfChecksWritten >= 40 && numberOfChecksWritten < 60)
     checkPrice = FEE_IF_LESS_THAN_60_CHECKS;
    else
      checkPrice = FEE_IF_MORE_THAN_60_CHECKS;
    
    //Calculation for the total fee
    bankFee += numberOfChecksWritten * checkPrice;
    
    //Output
    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "The bank fee this month is $" << bankFee << endl;
  }
  
  return 0;
}
/*
akpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $1000
Number of Checks Written: 10

The bank fee this month is $11.00
[dakpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $1000
Number of Checks Written: 20

The bank fee this month is $11.60
[dakpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $1000Number of Checks Written: 40

The bank fee this month is $12.40
[dakpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $1000
Number of Checks Written: 60

The bank fee this month is $12.40
[dakpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $1000
Number of Checks Written: 65

The bank fee this month is $12.60
[dakpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $-80
Number of Checks Written: 25
Urgent! Your account is overdrawn.

The bank fee this month is $27.00
[dakpinar@hills Hw7-2]$ ./a.out
Enter the following information about your checking account.
Beginning Balance: $300Number of Checks Written: 52

The bank fee this month is $28.12
*/