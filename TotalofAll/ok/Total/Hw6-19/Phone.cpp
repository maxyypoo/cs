/*
Filename: Phone.cpp
Description: A phone carrier, package selection menu. Calculates total bills and savings based on selection and minutes talked.
Assignment: Decisions02 Adv - Hw 6/19
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  //Varialbes
  char userPackageChoice;
  int minutesUsed, packageMax, minutesMax;
  const int PACKG_MAX_FOR_A = 450, PACKG_MAX_FOR_B = 900, PACKG_MAX_FOR_C = 44640;
  const float COST_OF_PACKAGE_A = 39.99, COST_OF_PACKAGE_B = 59.99, COST_OF_PACKAGE_C = 69.99;
  const float EXTRA_RATE_FOR_PCKG_A = 0.45, EXTRA_RATE_FOR_PCKG_B = 0.40, EXTRA_RATE_FOR_PCKG_C = 0;
  float costOfUser, costPerMin, packageNext, packageSave, packageNextMax, packageNextCost, packageNextRate, totalCost;
  bool validUserInput;
  string monthOfBill;
  
  //Menu Loop with Do process
 do
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
   cin >> userPackageChoice;
   cout << endl;
   userPackageChoice = tolower(userPackageChoice);          //To make sure code works even if lower case is entered.
   cout << setprecision(3) << fixed;

   //Switch processing for choosing a package.
  switch (userPackageChoice)
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
     cin >> minutesUsed;
     cout << "Please enter the month: ";
     cin >> monthOfBill;
     
     //Setting up a validation for minutes in months
     if (monthOfBill == "january" || monthOfBill ==  "march" || monthOfBill ==  "may"|| monthOfBill ==   "july" || monthOfBill ==  "august" || monthOfBill == "october" || monthOfBill == "december" || monthOfBill == "January" || monthOfBill == "March" || monthOfBill == "May" || monthOfBill == "July" || monthOfBill == "August" || monthOfBill == "October" || monthOfBill == "December")
       minutesMax = 744 * 60;
     else if (monthOfBill == "april" || monthOfBill ==  "june" || monthOfBill == "november"|| monthOfBill ==   "september" || monthOfBill ==  "April" || monthOfBill == "June" || monthOfBill == "November" || monthOfBill == "September")
       minutesMax = 720 * 60;
     else if (monthOfBill == "february" || monthOfBill == "February")
       minutesMax = 672 * 60;
     else
       cout << "Please enter a valid month name." << endl;
     totalCost = costOfUser + (costPerMin * (minutesUsed - packageMax));
     if (minutesUsed < 1 || minutesUsed > minutesMax)                   //Validating minutes in months to make sure incorrect minutes weren't entered
       cout << "Please enter a correct amount of minutes." << endl;
     else if (minutesUsed < packageMax)
       cout << "Your total cost is: $" << costOfUser << endl;
     else if (minutesUsed > packageMax && minutesUsed <= packageNextMax)
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
     else if (minutesUsed > packageMax && minutesUsed > packageNextMax)
     {
       cout << "Your total cost is: $" << totalCost << "." << endl;
       if (totalCost > (packageNextCost + (packageNextRate * (minutesUsed - packageNextMax))))
       {
       cout << "You could have saved: $" << totalCost - (packageNextCost + (packageNextRate * (minutesUsed - packageNextMax))) << " if you switched to plan B." << endl;
       cout << "You could have saved: $" << totalCost - COST_OF_PACKAGE_C << " if you switched to plan C." << endl;
       }
     }
     else
       cout << "Error." << endl;
     cout << endl;
   }   
 }while (userPackageChoice != 'q');
  
  return 0;
}

/*
[dakpinar@hills Hw6-19]$ ./a.out
Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: a

Please enter the minutes talked: 500
Please enter the month: may
Your total cost is: $62.490.
You could have saved: $2.500 if you switched to plan B.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: a

Please enter the minutes talked: 910
Please enter the month: may
Your total cost is: $246.990.
You could have saved: $183.000 if you switched to plan B.
You could have saved: $177.000 if you switched to plan C.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: b

Please enter the minutes talked: 1000
Please enter the month: may
Your total cost is: $99.990.
You could have saved: $30.000 if you switched to plan C.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: c

Please enter the minutes talked: 650
Please enter the month: may
Your total cost is: $69.990

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: d

Error. Please Enter A, B or C. Or enter Q to quit.
Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: a

Please enter the minutes talked: 6000000
Please enter the month: may
Please enter a correct amount of minutes.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit: b

Please enter the minutes talked: 540
Please enter the month: lopa
Please enter a valid month name.
Your total cost is: $59.990

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit:
a

Please enter the minutes talked: -1
Please enter the month: may
Please enter a correct amount of minutes.

Phone Package Selection Menu
---------------------------------------------------------------------------
Package          Monthly Cost          Minutes          Extra Rates Per Min
Package A        $39.99                450              $0.45
Package B        $59.99                900              $0.40
Package C        $69.99                Unlmtd              -
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Please select a package (Enter A, B or C) or type Q to quit:
*/
