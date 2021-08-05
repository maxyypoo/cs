/*
Filename: MovieGross.cpp
Description: A profit calculator for movie theathers.
Assignment: Hw 6/14 - streaming iomanip adv.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  //variable
  const float adultTickets = 10, childTickets = 16;
  float grossBox, netBox, distPrice;
  float costAdult, costChild;
  string movieName;
  
  //input
  cout << "Please enter the movie name: ";
  getline(cin, movieName);
  cout << "Please enter the amount of adult tickets sold: ";
  cin >> adultTickets;
  cout << "Please enter the amount of child tickets sold: ";
  cin >> childTickets;
  
  //process
  grossBox = (adultTickets * costAdult) + (childTickets * costChild);
  netBox = (grossBox * 20) / 100;
  distPrice = grossBox - netBox;
  
 //output
  cout << "\n";
  cout << "Movie name:" << setw(27) << "\"" << movieName << "\"" << endl;
  cout << "\n";
  cout << "-------------------------" << endl;
  cout << "Amount of Adult Tickets sold:" << setw(13) << adultTickets << endl;
  cout << "Amount of Child Tickets sold:" << setw(13) << childTickets << endl;
  cout << "Gross box office profit:" << setw(15) << "$ " << grossBox << endl;
  cout << "Net box office profit:" << setw(17) << "$ " << netBox << endl;
  cout << "Price of distribution:" << setw(17) << "$ " << distPrice << endl;
  return 0;
}
/*
Please enter the movie name: Shrek 3
Please enter the amount of adult tickets sold: 546
Please enter the amount of child tickets sold: 223

Movie name:                          "Shrek 3"

-------------------------
Amount of Adult Tickets sold:          546
Amount of Child Tickets sold:          223
Gross box office profit:             $ 6798
Net box office profit:               $ 1359.6
Price of distribution:               $ 5438.4
*/