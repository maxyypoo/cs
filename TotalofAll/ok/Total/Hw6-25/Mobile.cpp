/*
Filename: Phone.cpp
Description: A phone carrier, package selection menu. Calculates total bills and savings based on selection and minutes talked.
Assignment: Decisions02 Adv - Hw 6/19
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Function Prototype
void showState(ifstream &);

int main()
{
  //Varialbes
  char userPackageChoice, userChoice;
  int minutesUsed, minutesUsedReal, packageMax, minutesMax;
  const int PACKG_MAX_FOR_A = 450, PACKG_MAX_FOR_B = 900, PACKG_MAX_FOR_C = 44640;
  const float COST_OF_PACKAGE_A = 39.99, COST_OF_PACKAGE_B = 59.99, COST_OF_PACKAGE_C = 69.99;
  const float EXTRA_RATE_FOR_PCKG_A = 0.45, EXTRA_RATE_FOR_PCKG_B = 0.40, EXTRA_RATE_FOR_PCKG_C = 0;
  float costOfUser, costPerMin, packageNext, packageSave, packageNextMax, packageNextCost, packageNextRate, totalCost;
  bool validUserInput, finError;
  string monthOfBill, monthOfBillReal;
  
  //File stream declaration
  ifstream fin;
  
  //File existance validation
  fin.open("userChoice.txt");
  if (!fin)
  {
    fin.open("userChoice.txt" , ios::out);
    finError = true;
  }
  else
  {
    fin.close();
    cout << "userChoice.txt already exists." << endl;
  }
  
  //Menu Loop with Do process
 fin.open("userChoice.txt");
  while (userPackageChoice != 'q' && !fin.eof())
  { 
    //The menu
    cout << "Phone Package Selection Menu" << endl;
    cout << "" << setfill('-') << setw(76) <<"\n";
    cout << setfill(' ');                           //To reset setfill
    cout << "Package" << setw(10) << "" << "Monthly Cost" << setw(10) << "" << "Minutes" << setw(10) << "" << "Extra Rates Per Min" <<  endl;
    cout << "Package A" << setw(8) << "" << "$39.99" << setw(16) << "" << "450" << setw(14) << "" << "$0.45" << endl;
    cout << "Package B" << setw(8) << "" << "$59.99" << setw(16) << "" << "900" << setw(14) << "" << "$0.40" << endl;
    cout << "Package C" << setw(8) << "" << "$69.99" << setw(16) << "" << "Unlmtd" << setw(14) << "" << "-" << endl;
    cout << "" << setw(76) << setfill('+') << "+" << endl;
    cout << setfill(' ');
    cout << endl;
    cout << "Please select a package (Enter A, B or C) or type Q to quit: ";
    fin >> userPackageChoice;
    userChoice = tolower(userPackageChoice);
    cout << endl;
    //userPackageChoice = tolower(userPackageChoice);          //To make sure code works even if lower case is entered.
    cout << setprecision(3) << fixed;
    

    //Switch processing for choosing a package.
    switch (userChoice)
    {
    case 'a':
      validUserInput = true;
      costOfUser = COST_OF_PACKAGE_A;
      costPerMin = EXTRA_RATE_FOR_PCKG_A;
      packageMax = PACKG_MAX_FOR_A;
      packageNextMax = PACKG_MAX_FOR_B;
      packageNextCost = COST_OF_PACKAGE_B;
      packageNextRate = EXTRA_RATE_FOR_PCKG_B;
      break;
    case 'b': 
      validUserInput = true;
      costOfUser = COST_OF_PACKAGE_B;
      costPerMin = EXTRA_RATE_FOR_PCKG_B;
      packageMax = PACKG_MAX_FOR_B;
      packageNextMax = PACKG_MAX_FOR_C;
      packageNextCost = COST_OF_PACKAGE_C;
      packageNextRate = EXTRA_RATE_FOR_PCKG_C;
      break;
    case 'c' :
      validUserInput = true;
      costOfUser = COST_OF_PACKAGE_C;
      costPerMin = EXTRA_RATE_FOR_PCKG_C;
      packageMax = PACKG_MAX_FOR_C;
      break;
    case 'q':
      validUserInput = false;
      cout << "Thanks for using." << endl;
      break;
    default :
      cout << "Error. Please Enter A, B or C. Or enter Q to quit." << endl;
      validUserInput = false;
      break;
    }
    
    if (validUserInput)
    { 
     //Post menu price calculations
     cout << "Please enter the minutes talked: ";
     fin >> minutesUsed;
     minutesUsedReal = (minutesUsed);
     cout << "Please enter the month: ";
     fin >> monthOfBill;
     monthOfBillReal = (monthOfBill);
      
     
     //Setting up a validation for minutes in months
     if (monthOfBillReal == "january" || monthOfBillReal ==  "march" || monthOfBillReal ==  "may"|| monthOfBillReal ==   "july" || monthOfBillReal ==  "august" || monthOfBillReal == "october" || monthOfBillReal == "december" || monthOfBillReal == "January" || monthOfBillReal == "March" || monthOfBillReal == "May" || monthOfBillReal == "July" || monthOfBillReal == "August" || monthOfBillReal == "October" || monthOfBillReal == "December")
       minutesMax = 744 * 60;
     else if (monthOfBillReal == "april" || monthOfBillReal ==  "june" || monthOfBillReal == "november"|| monthOfBillReal ==   "september" || monthOfBillReal ==  "April" || monthOfBillReal == "June" || monthOfBillReal == "November" || monthOfBillReal == "September")
       minutesMax = 720 * 60;
     else if (monthOfBillReal == "february" || monthOfBillReal == "February")
       minutesMax = 672 * 60;
     else
      cout << "Please enter a valid month name." << endl;
      
      //Calculating total cost
      totalCost = costOfUser + (costPerMin * (minutesUsedReal - packageMax));
      
      //If processing for price and savings calculations
      if (minutesUsedReal < 1 || minutesUsedReal > minutesMax)                   //Validating minutes in months to make sure incorrect minutes weren't entered
       cout << "Please enter a correct amount of minutes." << endl;
      else if (minutesUsedReal < packageMax)
       cout << "Your total cost is: $" << costOfUser << endl;
      else if (minutesUsedReal > packageMax && minutesUsedReal <= packageNextMax)
      {
        cout << "Your total cost is: $" << totalCost << "." << endl;
        if (totalCost > packageNextCost)
        {  
          if (packageNextMax < PACKG_MAX_FOR_C)                         //To make sure only package A shows price savings for package B
            cout << "You could have saved: $" << totalCost - packageNextCost << " if you switched to plan B." << endl;
          if (totalCost > COST_OF_PACKAGE_C)
            cout << "You could have saved: $" << totalCost - COST_OF_PACKAGE_C << " if you switched to plan C." << endl;
        }
      }
      else if (minutesUsedReal > packageMax && minutesUsedReal > packageNextMax)
      {
        cout << "Your total cost is: $" << totalCost << "." << endl;
        if (totalCost > (packageNextCost + (packageNextRate * (minutesUsedReal - packageNextMax))))
        {
        cout << "You could have saved: $" << totalCost - (packageNextCost + (packageNextRate * (minutesUsedReal - packageNextMax))) << " if you switched to plan B." << endl;
        cout << "You could have saved: $" << totalCost - COST_OF_PACKAGE_C << " if you switched to plan C." << endl;
        }
      }
      //Trailing else to catch errors
      else
        cout << "Error." << endl;
      cout << endl;
    }   
  }
  
  //Extra Error Testing, Commented to stop from acting
  //showState(fin);
  
  fin.close();
  
  return 0;
}

//Error testing Function
void showState(ifstream &file)
{
  cout << "File Status" << endl;
  cout << "   eof bit:  " << file.eof() << endl;
  cout << "   fail bit: " << file.fail() << endl;
  cout << "   bad bit:  " << file.bad() << endl;
  cout << "   good bit: " << file.good() << endl;
}
/*
[dakpinar@hills Hw6-25]$ ./a.out
userChoice.txt already exists.
Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit:
Please enter the minutes talked: Please enter the month: Your total cost is: $62.490.
You could have saved: $2.500 if you switched to plan B.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit:
Please enter the minutes talked: Please enter the month: Your total cost is: $69.990

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit:
Please enter the minutes talked: Please enter the month: Your total cost is: $4337.490.
You could have saved: $637.500 if you switched to plan B.
You could have saved: $4267.500 if you switched to plan C.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit:
Please enter the minutes talked: Please enter the month: Your total cost is: $499.990.
You could have saved: $430.000 if you switched to plan C.

[dakpinar@hills Hw6-25]$ cat userChoice.txt
A
500
may
c
900
june
a 10000 december
b 2000 july
*/