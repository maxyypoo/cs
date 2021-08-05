#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{
  int colFName = 10, colSpace = 10, colLName = 10;
  
  cout << "Unit";
  cout << setw(colFName) << " ";
  cout << setw(colSpace) << "Price" << endl;
  cout << setfill('-') << setw(25) << " " << endl;
  cout << setfill(' ') << endl;
  //Colon set up -- Colon A: unit name; Colon B: Space << Symbol w/space ("$ "); Colon C: space unit match (like price or amount); repeat till full
  cout << "Tv";
  cout << setw(colFName) << "$ ";
  cout << setw(colSpace) << "5.4599";
  
  return 0;
}